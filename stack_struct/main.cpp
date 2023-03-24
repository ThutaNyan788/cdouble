#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first, *current;


void createList(int);
void traverseList();
void releaseList();

int main()
{
    first = NULL;
    current = NULL;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    while (num != 0)
    {
        createList(num);
        cout << "Enter a number : ";
        cin >> num;
    }

    traverseList();
    releaseList();

    return 0;

    return 0;
}


void createList(int num)
{
    current = new node;
    current->data = num;
    current->next = first;

    first = current;
}


void traverseList()
{

    current = first;

    while(current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}


void releaseList()
{

    while(first != NULL)
    {
        current = first;
        first = first->next;
        delete current;
    }

}