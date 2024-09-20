#include<iostream>
using namespace std;
#define MAX 10
int arraySum(int arr[],int n){
    if(n==0)
     return arr[0];

    int sum=arr[n]+arraySum(arr,n-1);
     return sum;

    }

int main (){
    int array[MAX]={1,122,33,41,145,246,247,258,269,290};
    int  sum=arraySum(array,MAX-1);
    cout<<"sum of the array is "<<sum;
}