#include<iostream>
#include<cstring>
using namespace std;
struct myStruct
{
    char name[50];
    string Name;
    int age;
    double height;
};
int main()
{
   int x;
   myStruct m1;
   myStruct m2;
   m1.age=10;
   m2.age= 20;
   m2.Name = "Hijbullah";
   strcpy(m1.name,"Hijbullah");
   cout<<m1.name<<" "<<m1.age<<" ";
   cout<<endl;
   cout<<m2.Name<<" "<<m2.age<<" ";
   return 0;
}
