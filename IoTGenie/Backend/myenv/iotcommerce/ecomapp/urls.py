from django.urls import path
from . import views

from rest_framework_simplejwt.views import (
    TokenObtainPairView,
)

urlpatterns = [
    path('products/', views.getProducts, name='get-products'),  # No need to add 'api/' here
    path('routes/', views.getRoutes, name='get-routes'),
    path('product/<str:pk>/', views.getProduct, name='getProduct'),
    path('users/Login/', views.MyTokenObtainPairView.as_view(), 
    name='token_obtain_pair'),
    path('users/profile/', views.getUserProfiles, name = 'getUserProfiles'),
    path('users/', views.getUsers, name = 'getUsers'),  # No need to add 'api/' here
    path('users/register/', views.registerUser, name='register'),  # No need to add 'api/' here
]
