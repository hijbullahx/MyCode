#include <iostream>
using namespace std;

class Student {
public:
    string ID = "S001";
    string name = "John Smith";
    int grades[4] = {85, 90, 78};

    void details() {
        cout << "Student ID: " << ID << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Grades: ";
        for(int i = 0; i < 4; i++)
            {
                if (grades[i] != 0)
                {
                    cout << grades[i] << " ";
                }

        }
        cout << endl;
    }

    void new_grade()
    {
        int n =95;
        for(int i=0; i<4; i++)
        {
            grades[3]= n;
        }
        cout<<endl;
    }
    void average_grade()
    {
        float sum =0;
       for(int i=0; i<4; i++)
        {
            sum = sum + grades[i];
        }
        float average = sum/4;
        cout<<"Average grade is: "<<average<<endl;

    }


};

int main() {
    Student h;
    cout << "Before Adding new grade: " << endl;
    h.details();
    cout << "After Adding new grade: " << endl;
    h.new_grade();
    h.details();
    h.average_grade();

    return 0;
}
