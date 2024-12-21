/*We want to store the information about different vehicles. Create a class named
Vehicle with two data members named mileage and price. Create its two subclasses
*Car with data members to store ownership cost, warranty (by years), seating
capacity, and fuel type (diesel or petrol).
*Bike with data members to store the number of cylinders, number of gears, cooling
type (air, liquid, or oil), wheel type (alloys or spokes) and fuel tank size (in inches)
Make another two subclasses, Audi and Ford of Car, each having a data member to
store the model type. Next, make two subclasses, Bajaj and TVS, each having a data
member to store the make-type.
Now, store and print the information of an Audi and a Ford car (i.e., model type,
ownership cost, warranty, seating capacity, fuel type, mileage, and price.) Do the
same for a Bajaj and a TVS bike.*/
/*Hybrid Ineheritence*/
#include<iostream>
using namespace std;
class Vehicle
{
public:
    float mileage, price;
};
class Car : public Vehicle
{
public:
    float ownership_cost;
    int warranty, seating_capasity;
    string fuel_type;
};
class Bike : public Vehicle
{
public:
    int cylinders, n_gears;
    string cooling_type, wheel_type;
    float tank_size;
};
class Audi : public Car
{
public:
    string model_type;
};
class Ford : public Car
{
public:
    string model_type;
    friend void printc(Audi a, Ford f);
    friend void showc(Audi a, Ford f);
};
class Bajaj : public Bike
{
public:
    string make_type;
};
class TVS : public Bike
{
public:
    string make_type;
    friend void printb(Bajaj b, TVS t);
    friend void showb(Bajaj b, TVS t);
};
void printc(Audi a, Ford f)
{
    cout<<"Enter Audi's Model Type: ";
    cin>>a.model_type;
    cout<<"Enter Audi's Ownership Cost: ";
    cin>>a.ownership_cost;
    cout<<"Enter Audi's Warrenty: ";
    cin>>a.warranty;
    cout<<"Enter Audi's Seating Capacity: ";
    cin>>a.seating_capasity;
    cout<<"Enter Audi's Fuel Type: ";
    cin>>a.fuel_type;
    cout<<"Enter Audi's Mileage :";
    cin>>a.mileage;
    cout<<"Enter Audi's Price :";
    cin>>a.price;
    cout<<endl;
    cout<<"Enter Ford's Model Type: ";
    cin>>f.model_type;
    cout<<"Enter Ford's Ownership Cost: ";
    cin>>f.ownership_cost;
    cout<<"Enter Ford's Warrenty: ";
    cin>>f.warranty;
    cout<<"Enter Ford's Seating Capacity: ";
    cin>>f.seating_capasity;
    cout<<"Enter Ford's Fuel Type: ";
    cin>>f.fuel_type;
    cout<<"Enter Ford's Mileage :";
    cin>>f.mileage;
    cout<<"Enter Ford's Price :";
    cin>>f.price;
}
void showc(Audi a, Ford f)
{
    cout<<"Audi's Model Type: "<<a.model_type<<endl;
    cout<<"Audi's Ownership Cost: "<<a.ownership_cost<<endl;
    cout<<"Audi's Warrenty: "<<a.warranty<<endl;
    cout<<"Audi's Seating Capacity: "<<a.seating_capasity<<endl;
    cout<<"Audi's Fuel Type: "<<a.fuel_type<<endl;
    cout<<"Audi's Mileage :"<<a.mileage<<endl;
    cout<<"Audi's Price :"<<a.price<<endl;
    cout<<endl;
    cout<<"Ford's Model Type: "<<f.model_type<<endl;
    cout<<"Enter Ford's Ownership Cost: "<<f.ownership_cost<<endl;
    cout<<"Enter Ford's Warrenty: "<<f.warranty<<endl;
    cout<<"Enter Ford's Seating Capacity: "<<f.seating_capasity<<endl;
    cout<<"Enter Ford's Fuel Type: "<<f.fuel_type<<endl;
    cout<<"Ford's Mileage :"<<f.mileage<<endl;
    cout<<"Enter Ford's Price :"<<f.price<<endl;
}
void printb(Bajaj b, TVS t)
{
    cout<<"Enter Bajaj's Make Type: ";
    cin>>b.make_type;
    cout<<"Enter Bajaj's Number of Gears: ";
    cin>>b.n_gears;
    cout<<"Enter Bajaj's Number of cylinders: ";
    cin>>b.cylinders;
    cout<<"Enter Bajaj's Cooling type: ";
    cin>>b.cooling_type;
    cout<<"Enter Bajaj's Whell type :";
    cin>>b.wheel_type;
    cout<<"Enter Bajaj's Fuel tank size :";
    cin>>b.tank_size;
    cout<<endl;
    cout<<"Enter TVS's Make Type: ";
    cin>>t.make_type;
    cout<<"Enter TVS's Number of Gears: ";
    cin>>t.n_gears;
    cout<<"Enter TVS's Number of cylinders: ";
    cin>>t.cylinders;
    cout<<"Enter TVS's Cooling type: ";
    cin>>t.cooling_type;
    cout<<"Enter TVS's Whell type :";
    cin>>t.wheel_type;
    cout<<"Enter TVS's Fuel tank size :";
    cin>>t.tank_size;
}
void showb(Bajaj b, TVS t)
{
    cout<<"Bajaj's Make Type: "<<b.make_type<<endl;
    cout<<"Bajaj's Number of Gears: "<<b.n_gears<<endl;
    cout<<"Bajaj's Number of cylinders: "<<b.cylinders<<endl;
    cout<<"Bajaj's Cooling type: "<<b.cooling_type<<endl;
    cout<<"Bajaj's Whell type :"<<b.wheel_type<<endl;
    cout<<"Bajaj's Fuel tank size :"<<b.tank_size<<endl;
    cout<<endl;
    cout<<"TVS's Make Type: "<<t.make_type;
    cout<<"TVS's Number of Gears: "<<t.n_gears<<endl;
    cout<<"TVS's Number of cylinders: "<<t.cylinders<<endl;
    cout<<"TVS's Cooling type: "<<t.cooling_type<<endl;
    cout<<"TVS's Whell type :"<<t.wheel_type<<endl;
    cout<<"TVS's Fuel tank size :"<<t.tank_size<<endl;
}
int main()
{
    Audi a;
    Ford f;
    Bajaj b;
    TVS t;
    printc(a,f);
    cout<<endl;
    printb(b,t);
    cout<<endl;
    cout<<"Information of Car: "<<endl;
    showc(a,f);
    cout<<endl;
    cout<<"Information of Bike: "<<endl;
    showb(b,t);
    cout<<endl;
    return 0;
}
