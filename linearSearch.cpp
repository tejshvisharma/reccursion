#include<iostream>
using namespace std;
#define MAX 10

int isAvailable(int arr[], int n, int key){
    if(n < 0) 
        return -1;  // If the array is fully traversed and the key is not found, return -1
    
    if(arr[n] == key) 
        return n;  // If the key is found, return the index
    
    return isAvailable(arr, n - 1, key);  // Make sure to return the result of the recursive call
}

int main(){
    int array[MAX] = {1, 22, 33, 41, 145, 246, 247, 258, 269, 290};
    int keyIndex = isAvailable(array, MAX-1, 269);  // Searching for key 269
    
    cout << ((keyIndex != -1) ? "Key is present" : "Key is not present") << endl;
    
    if(keyIndex != -1) {
        cout << "The index of the array where key is available is " << keyIndex;
    }

    return 0;
}
