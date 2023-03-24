#include <iostream>
using namespace std;

int main()
{
    int arr[5], i, j, key, temp;
    int found = 0;
    int first = 0, last = 5-last;
    int middle;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
    }

    cout << endl;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < (5 - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Enter key : ";
    cin >> key;

    while (found = 0 && first <= last)
    {
        middle = (first + last) / 2;

        if (arr[middle] == key)
        {
            found = 1;
        }
        else if (arr[middle] < key)
        {
            first = middle + 1;
        }
        else if (arr[middle] > key)
        {
            last = middle - 1;
        }
    }

    if (found == 1)
    {
        cout << "We found it!! : " << middle;
    }
    else
    {
        cout << "Sry!! We can't ";
    }

    return 0;
}