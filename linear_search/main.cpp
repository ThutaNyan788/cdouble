#include <iostream>
using namespace std;

int main()
{

    int arr[5],i, key;
    int found = 0;

    for ( i = 0; i < 5; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
    }

    cout << endl;

    // Enter key
    cout << "Enter key : ";
    cin >> key;

     i = 0;
    while (found == 0 && i < 5)
    {
        if (arr[i] == key)
        {
            found = 1;
        }
        else
        {
            i++;
        }
    }

    if (found == 1)
    {
        cout << "We found at position : " << i;
    }
    else
    {
        cout << "Sry ! We can't found";
    }

    return 0;
}