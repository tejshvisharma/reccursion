#include <iostream>
#include <array>
#define MAX 10
using namespace std;
void insertionSort(int *arr, int size, int i = 0) {
    if(i==size)
    return;
    else
    {
        int temp = arr[i];
        int j = i-1;
        for ( ; j >= 0; j--) {
            if (arr[j]> temp ) {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
        insertionSort(arr,size, ++i );

    }
    
}

int main()
{
    array<int, MAX> arr;
    cout << "Enter the element of the array one by one :";
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    insertionSort(&arr[0], 10);
    cout << "Printing the sorted array by selection sort algorithm :" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}