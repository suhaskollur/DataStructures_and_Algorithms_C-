/*
find the unique element in the array
and return the unique element 
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int findUnique(int arr[], int size)
{
   int ans = 0;
   for (int i = 0; i < size; i++)
   {
    ans = ans ^ arr[i];
   }
   return ans;
}

int main () {

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << findUnique(arr, size);
    return 0;
}