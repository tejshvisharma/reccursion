#include<iostream>
using namespace std;
#define MAX 10
bool isSorted(int arr[],int n){
    if(n==0)
     return true;
    else{
        if(arr[n]>arr[n-1]){
           return isSorted(arr,n-1);
        }
        else
        return false;
    }
}
int main (){
    int array[MAX]={1,22,33,41,1145,246,247,258,269,290};
    bool isSortedArr=isSorted(array,MAX-1);
    cout<<(isSortedArr?("Array is Sorted"):("Array is not Sorted"));
}