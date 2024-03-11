#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}