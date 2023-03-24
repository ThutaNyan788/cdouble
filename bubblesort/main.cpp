#include<iostream>
using namespace std;

int main()
{
    int arr[5],temp;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number : ";
        cin >> arr[i];
    }

    cout << endl;

    //Befre sorting
    cout << "Before Sorting : "; 
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - i - 1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl;

    //After Sorting
    cout << "After Sorting : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }

        return 0;
}