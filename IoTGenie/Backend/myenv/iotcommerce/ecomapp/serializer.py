from rest_framework import serializers
from .models import Product
from django.contrib.auth.models import User
from rest_framework_simplejwt.tokens import RefreshToken



class ProductSerializer(serializers.ModelSerializer):
    class Meta:
        model = Product
        fields = '__all__'

class UserSerializer(serializers.ModelSerializer):
    name = serializers.SerializerMethodField(read_only=True)
    _id = serializers.SerializerMethodField(read_only=True)
    isAdmin = serializers.SerializerMethodField(read_only=True)

    class Meta:
        model = User
        fields = ['id', 'username', 'email', 'name', '_id', 'isAdmin']

    def get_name(self, obj):
        firstname = obj.first_name 
        lastname = obj.last_name
        name = f"{firstname} {lastname}"
        if name == "":
            name = obj.email
        return name
    
    def get__id(self, obj):
        return obj.id
    
    def get_isAdmin(self, obj):
        return obj.is_staff

class UserSerializerWithToken(UserSerializer):
    token = serializers.SerializerMethodField(read_only=True)

    class Meta:
        model = User
        fields = ['id', 'username', 'email', 'name', '_id', 'isAdmin', 'token']

    def get_token(self, obj):  # ✅ Function name should match the field
        token = RefreshToken.for_user(obj)
        return str(token.access_token)
 # Return both access and refresh tokens as strings