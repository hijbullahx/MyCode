#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* Link;
};
struct Node* head;
void print()
{
    struct Node * temp;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->Link;
    }
}
int main()
{
    head = (struct Node*)malloc(sizeof(struct Node));
    head-> data = 2;
    head->Link = (struct Node*)malloc(sizeof(struct Node));
    head -> Link-> data = 5;
    head->Link->Link = NULL;
    print();
    return 0;
}
