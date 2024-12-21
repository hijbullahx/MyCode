#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int id;
    float cgpa;
    int mobile;
    string district;
    int marks;
    void input();
    void login(int num);
    void editStudent();
};

class Faculty : public Student {
private:
    string facultyName;
    int facultyID;
    string subject;
    string code;

public:
    void getdata();
    void addGrades(Student a[20],int num);
    int login2();
    void showdata(int s);
};
void Student::input() {
    cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the ID : ";
    cin >> id;
    cout << "Enter the CGPA : ";
    cin >> cgpa;
    cout << "Enter the mobile : ";
    cin >> mobile;
    cout << "Enter the Home District : ";
    cin >> district;
}
void Student::login(int num) {
    if(num == 0)
    {
        cout << "No data entered!!" << endl;
    } else {
       int n;
    cout << "Enter your ID : ";
    cin >> n;
    if (n == id) {
        cout << "ID Found Successfully!!" << endl;
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Mark : " << marks << endl;
    } else {
        cout << "ID not found in the list" << endl;
    }
    }
}
void Student::editStudent() {
   int n;
   cout << "Enter the ID you want to edit : ";
   cin >> n;
   if(n == id)
   {
        cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the ID : ";
    cin >> id;
    cout << "Enter the CGPA : ";
    cin >> cgpa;
    cout << "Enter the mobile : ";
    cin >> mobile;
    cout << "Enter the Home District : ";
    cin >> district;
   }
}
void Faculty :: getdata()
{
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the Faculty ID  : ";
    cin >> id;
    cout << "Enter the Subject Number : ";
    cin >> subject;
    cout << "Enter the login code : ";
    cin >> code;
}
int Faculty :: login2()
{
    string s;
    cout << "Enter the code : ";
    cin >> s;
    if(s == code)
    {
        return 1;
    } else {
        return 0;
    }
}
void Faculty :: addGrades(Student a[20],int num)
{
    if(login2() == 1)
    {
    cout << "1.Add the grades." << endl;
    cout << "2.View the grades." << endl;
    int choice;
    cout << "Enter your choice here : ";
    cin >> choice ;
    if( choice == 1)
    {
        cout << "Enter the marks : " << endl;
        for(int i = 0;i<num;i++)
        {
            cin >> a[i].marks;
        }
    } else {
        for(int i = 0;i<num;i++)
        {
            cout << "Student Name : " << a[i].id << "Marks : " << a[i].marks << endl;
        }
    }
    } else {
        cout << "Invalid Response!!" << endl;
    }
}
void Faculty ::  showdata(int s)
{
    if(s == 0)
    {
        cout << "No data entered" << endl;
    } else {
    cout << "Faculty Name : " << name << endl;
    cout << "Faculty ID  : " << id << endl;
    cout << "Subject Number : " << subject << endl;
    cout << "Enter the login code : " << code << endl;
    }
}
int main()
{
    Student obj[20];
    Faculty teacher;
    int choice,num=0,i,t=0,s=0;
    while(1)
    {
        cout << "*Student Management System*" << endl;
         cout << "\nAvailable operations: \n1. Add New "
                "Students\n2."
             << " Student Information\n3. Add Faculty\n4. "
                "Faculty Login\n5. Edit Information\n"
             << "6. Faculty View\n7. Exit";
             cout << endl;
             cout << "Enter your choice : ";
             cin >> choice;
             switch(choice)
             {
                case 1 : cout << "How many students do you want to add : ";
                              cin >> num;
                              for(i = 0;i<num;i++)
                              {
                                obj[t].input();
                                t++;
                              }
                              break;
                case 2 :
                    obj->login(num);
                              break;
                case 3 :  teacher.getdata();
                                s++;
                                break;
                case 4:teacher.addGrades(obj, num);
                                break;
                case 5 : if(s == 0)
                {
                    cout << "No data entered" << endl;
                } else {
                    if(teacher.login2()==1)
                                {
                                    obj->editStudent();
                                } else {
                                    cout << "Invalid Faculty Pass Code !!" << endl;
                                }
                }
                                break;
                case 6 : teacher.showdata(s);
                                break;
                case 7 : exit(0);
                                break;
                default : cout << "Invalid Choice !!" << endl;             }
    }
}

