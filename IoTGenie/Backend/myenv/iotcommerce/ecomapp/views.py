from django.shortcuts import render
from rest_framework.response import Response
from rest_framework.decorators import api_view, permission_classes
from django.http import JsonResponse
from .models import Product
from .serializer import ProductSerializer, UserSerializer, UserSerializerWithToken
from rest_framework_simplejwt.serializers import TokenObtainPairSerializer
from rest_framework_simplejwt.views import TokenObtainPairView
from rest_framework.permissions import IsAuthenticated, IsAdminUser
from django.contrib.auth.models import User
from django.contrib.auth.hashers import make_password
from rest_framework import status

#for sending email and token generation
from django.template.loader import render_to_string
from django.utils.http import urlsafe_base64_decode, urlsafe_base64_encode 
from django.utils.encoding import force_bytes, force_text, DjangoUnicodeDecodeError
from django.core.mail import EmailMessage
from django.conf import settings
from django.views.generic import View

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

    
class MyTokenObtainPairSerializer(TokenObtainPairSerializer):
    def validate(self, attrs):
        data = super().validate(attrs)
        serializer= UserSerializerWithToken(self.user).data
        for k , v in serializer.items():
            data[k] = v
        # Add custom claims
        return data
    


class MyTokenObtainPairView(TokenObtainPairView):
    serializer_class = MyTokenObtainPairSerializer


@api_view(['GET'])
@permission_classes([IsAuthenticated])
def getUserProfiles(request):
    user = request.user
    serializer = UserSerializer(user, many=False)
    return Response(serializer.data)

@api_view(['GET'])
@permission_classes([IsAuthenticated])
def getUsers(request):
    users = User.objects.all()
    serializer = UserSerializer(users, many=True)
    return Response(serializer.data)


@api_view(['POST'])
def registerUser(request):
    data = request.data
    try:
        user = User.objects.create_user(
            first_name=data['fname'],
            last_name=data['lname'],
            username=data['email'],
            email=data['email'],
            password=make_password(data['password']), is_active = False)
        # Generate token for sending email verification link
        email_subject = "Activate your account"
        message = render_to_string("activate.html", 
                                   {
                                    'user': user,
                                   'domain': 'http://127.0.0.1:8000',
                                   'uid': urlsafe_base64_encode(force_bytes(user.pk)),
                                   'token': generate_token.make_token(user),
                                   }
                                   
        )
        print(message)

        serialize = UserSerializerWithToken(user, many=False)
        return Response(serialize.data)
    except:
        message = {'details': 'User with this username already exists'}
        return Response(message, status=status.HTTP_400_BAD_REQUEST)