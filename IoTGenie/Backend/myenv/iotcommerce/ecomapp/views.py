from django.shortcuts import render
from rest_framework.response import Response
from rest_framework.decorators import api_view
from django.http import JsonResponse
from .models import Product
from .serializer import ProductSerializer

@api_view(['GET'])
def getRoutes(request):
    routes = [
        {"endpoint": "/api/products", "method": "GET", "description": "Returns all products"},
        {"endpoint": "/api/product/<id>", "method": "GET", "description": "Returns a single product by ID"}
    ]
    return Response(routes)

@api_view(['GET'])
def getProducts(request):
    products = Product.objects.all()
    serializer = ProductSerializer(products, many=True)
    return Response(serializer.data)

@api_view(['GET'])
def getProduct(request, pk):
    product = Product.objects.get(_id=pk)
    serializer = ProductSerializer(product, many=False)
    return Response(serializer.data)

    
