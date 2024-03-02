#include <iostream>
#include <iomanip>

using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            if (mid == 0 || arr[mid - 1] != key)
            {
                return mid; // Found the first occurrence
            }
            else
            {
                e = mid - 1;
            }
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int lastOcc(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            if (mid == size - 1 || arr[mid + 1] != key)
            {
                return mid; // Found the last occurrence
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    int key;
    cin >> key;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int first = firstOcc(arr, size, key);
    int last = lastOcc(arr, size, key);

    if (first != -1 && last != -1)
    {
        cout << "Total number of Occurrences = " << (last - first + 1) << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}