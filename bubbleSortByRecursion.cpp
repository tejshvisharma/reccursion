#include<iostream>
#include<array>
#define MAX 10
using namespace std;
// void bubbleSort(int *arr,int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         bool swapped = false;
//         for (int  j = 0; j < n-i-1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped==false)
//         break;
//     }
// }
void bubbleSort(int *arr,int n,int swapped = true){
    // base case array already sorted hai :
    if (n==0 || n==1)
    {
         return;
    }
    if(swapped){
        swapped = false;
    for (int  j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
    // recursion krelo age ka kam  :
    
    bubbleSort(arr, --n,swapped);
    }
    else
    return;
}



int main(){
      array<int,MAX> arr;
    cout<<"Enter the element of the array one by one :";
    for (int  i = 0; i < MAX; i++)
    {
        cin>>arr[i];
    }
    bubbleSort(&arr[0],10);
    cout<<"Printing the sorted array by Bubble sort algorithm :"<<endl;
    for (int  i = 0; i < MAX; i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0; 
}
