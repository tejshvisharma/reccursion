#include<iostream>
#include<array>
#define MAX 10
using namespace std;
void selectionSort(int *arr,int n, int i=0){
         if (n==0 || n ==1 || i == n-1)
         {
            return;
         }
         else
         {
           int Min_Index = i;
        
        for (int  j = i+1; j <= n-1; j++)
        {
            if (arr[j]<arr[Min_Index])
            {
                Min_Index = j;
            }
        }
        swap(arr[i],arr[Min_Index]); 
        selectionSort(arr,n, ++i);
        }
}
int main(){
      array<int,MAX> arr;
    cout<<"Enter the element of the array one by one :";
    for (int  i = 0; i < MAX; i++)
    {
        cin>>arr[i];
    }
    selectionSort(&arr[0],10);
    cout<<"Printing the sorted array by selection sort algorithm :"<<endl;
    for (int  i = 0; i < MAX; i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0; 
}