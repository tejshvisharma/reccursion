#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
#define MAX 17
int peakValue(int arr[], int start, int end){
    int mid = (start + (end-start)/2);
    if (start>=end)
       return start;
    
    if (arr[0]<arr[mid+1])
       {
        return peakValue(arr,mid+1,end);
       }
       else
       {
        return peakValue(arr,start,mid);
       }
 }
int binarySearch(int arr[], int s, int e, int key){
    int mid = s +(e-s)/2;
    if( arr[mid] == key) 
        return mid;  // If the key is found, return the index 
    else if(s>e)
        return -1;  
    else if(arr[mid] < key) 
        return binarySearch(arr, mid+1,e, key);  
    else if(arr[mid] > key)
        return binarySearch(arr, s,mid-1, key);  // Make sure to return the result of the recursive call

    
}
int main(){
    // int odd[5]={1,99,100,99,35};
    int even[MAX]={24,69,100,1000,1002,1003,1004,1,9,10,11,14,19,20,21,22,23};
    int indexOfPivot = peakValue(even,0,16);
    int key = 22;
     int keyIndex;
    if ((even[indexOfPivot] >= key) && key >= even[0])
    {
        keyIndex = binarySearch(even, 0, indexOfPivot, key);
    }
    else
    {
        keyIndex = binarySearch(even, indexOfPivot+1,MAX-1, key);

    }
  
  

    cout << ((keyIndex != -1) ? "Key is present" : "Key is not present") << endl;
    
    if(keyIndex != -1) {
        cout << "The index of the array where key is available is " << keyIndex;
    }
    return 0;
    
    
}