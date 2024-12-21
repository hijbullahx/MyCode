#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
};
struct Node * head;
void print()
{
    struct Node * temp;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp= temp->link;
    }
}
int main()
{
    head = NULL;
}
