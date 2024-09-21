#include<iostream>
using namespace std;
#define MAX 10

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
    int array[MAX] = {1, 22, 33, 41, 145, 246, 247, 258, 269, 290};
    int keyIndex = binarySearch(array, 0, MAX-1, 1);  // Searching for key 269
    
    cout << ((keyIndex != -1) ? "Key is present" : "Key is not present") << endl;
    
    if(keyIndex != -1) {
        cout << "The index of the array where key is available is " << keyIndex;
    }

    return 0;
}