#include <iostream>
#include <array>
#define MAX 10
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;

    int len2 = e - mid;

    int MainIndx = s;

    int *first = new int[len1];

    int *second = new int[len2];

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[MainIndx++];
    }

    MainIndx = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[MainIndx++];
    }
    // merging two sorted array :
    int index1 = 0;
    int index2 = 0;
    MainIndx = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[MainIndx++] = first[index1++];
        }
        else
        {
            arr[MainIndx++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[MainIndx++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[MainIndx++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    //  left part
    mergeSort(arr, s, mid);
    // right part
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    array<int, MAX> arr;
    cout << "Enter the element of the array one by one :";
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    mergeSort(&arr[0], 0, MAX - 1);
    cout << "Printing the sorted array by selection sort algorithm :" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}