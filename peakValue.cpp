#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int peakValue(int arr[], int start, int end){
    int mid = (start + (end-start)/2);
    if (start>=end)
       return start;
    
    if (arr[mid]<arr[mid+1])
       {
        return peakValue(arr,mid+1,end);
       }
       else
       {
        return peakValue(arr,start,mid);
       }
 }
    
int main(){
    int odd[5]={1,99,100,99,35};
   int even[17]={24,69,100,1000,1002,1003,1001,99,79,67,55,46,39,37,36,26,19};

    int index = peakValue(even,0,16);
    cout<<"index of Peak Value is "<<index<<endl;
    
}