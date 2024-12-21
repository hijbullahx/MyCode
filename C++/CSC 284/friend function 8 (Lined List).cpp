/*Define a class LinkedList with private members for the list elements
and head pointer. Write a friend function reverse that takes a LinkedList
object as a parameter and reverses the order of
the list elements.*/
#include <iostream>
using namespace std;

class LinkedList {
private:
    int* elements;
    int size;

public:
    LinkedList() {
        cout << "How many elements? ";
        cin >> size;
        elements = new int[size];
        cout << "Enter the elements: " << endl;
        for (int i = 0; i < size; i++) {
            cout << "List No. " << i + 1 << ": ";
            cin >> elements[i];
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    friend void reverseList(LinkedList& list);
};

void reverseList(LinkedList& list) {
    int start = 0;
    int end = list.size - 1;
    while (start < end) {
        swap(list.elements[start], list.elements[end]);
        start++;
        end--;
    }
}

int main() {
    LinkedList l;
    cout << "Original List: ";
    l.display();

    reverseList(l);

    cout << "Reversed List: ";
    l.display();

    return 0;
}
