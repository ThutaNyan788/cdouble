#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *current, *first, *last;

void createList(int);
void traverseList();
void releaseList();

int main()
{
    first = NULL;
    current = NULL;
    last = NULL;

    int num;
    cout << "Enter a number : ";
    cin >> num;

    while(num != 0)
    {
        createList(num);
        cout << "Enter a number : ";
        cin >> num;
    }

    traverseList();
    releaseList();

    return 0;
}

void createList(int num)
{

    current = new node;
    current->data = num;
    current->next = NULL;
 
    if(first == NULL)
    {
        first = current;
    }else{
        last->next = current;
    }

    last = current;
}

void traverseList()
{

    current = first;
    while (current != NULL)
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
