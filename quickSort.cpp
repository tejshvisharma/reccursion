#include <iostream>
#include <array>
#define MAX 10
using namespace std;
int pivot(int *arr,int s,int e){
    int pivotElement = arr[s];
    // count how many elements are less than the pivot element :
    int count = 0;
    for (int  i = s+1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    // place the pivot at his accurate position
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    // place the elements at their perfect side :  
    int i = s;
    int j = e;
    while (i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=arr[pivotIndex]) i++;

        while(arr[j]>arr[pivotIndex]) j--;

        if(arr[i]>arr[pivotIndex] && arr[j]<arr[pivotIndex]) swap(arr[i],arr[j]);
    }
    
    return pivotIndex;

    
    
}
void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = pivot(arr,s,e);

  
    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
    
    
}

int main()
{
    array<int, MAX> arr;
    cout << "Enter the element of the array one by one :";
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    quickSort(&arr[0], 0, MAX - 1);
    cout << "Printing the sorted array by selection sort algorithm :" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}