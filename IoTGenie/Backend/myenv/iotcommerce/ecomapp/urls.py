from django.urls import path
from . import views

urlpatterns = [
    path('products/', views.getProducts, name='get-products'),  # No need to add 'api/' here
    path('routes/', views.getRoutes, name='get-routes'),
]
