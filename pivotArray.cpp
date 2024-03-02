/*
    Find the pivot of an array ( mountain array ) using binary search method
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int pivotArray(int arr[], int size)
{

    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if ((arr[mid - 1] < arr[mid]) && (arr[mid + 1] < arr[mid]))
        {
            return arr[mid];
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main () {

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << pivotArray(arr, size);
    return 0;
    
}