/*
    find the duplicate element int he arrau, which means, return the element of the array whose occurance is more than 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int findDuplicate(int arr[], int size)
{

    int ele;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                ele = arr[i];
            }
        }
    }
    return ele;
}

int main () {

        int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << findDuplicate(arr, size);
    return 0;
}