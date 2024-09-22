#include<iostream>
using namespace std;

int lastOccurence(int arr[], int s, int e, int key, int answer = -1) {
    // Check if the search space is still valid
    if (s > e) {
        return answer;
    }

    // Calculate mid
    int mid = s + (e - s) / 2;
    
    // Debugging outputs to visualize the process
    cout << endl << "start = " << s << " end = " << e << endl;
    cout << "mid value = " << arr[mid] << endl;
    cout << "array = ";
    for (int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Current answer: " << answer << endl;
    
    // If we found the key, update the answer and continue searching in the right half
    if (arr[mid] == key) {
        answer = mid;  // Record the last found position of the key
        return lastOccurence(arr, mid + 1, e, key, answer);  // Search the right half for further occurrences
    } 
    // If the middle element is greater than the key, search in the left half
    else if (arr[mid] > key) {
        return lastOccurence(arr, s, mid - 1, key, answer);  // Search the left half
    } 
    // Otherwise, search in the right half
    else {
        return lastOccurence(arr, mid + 1, e, key, answer);  // Search the right half
    }
}

int main () {
    int odd[11] = {2, 2, 2, 3, 3, 5, 5, 5, 5, 9, 9};

    // Searching for the last occurrence of 5
    int index = lastOccurence(odd, 0, 10, 5);
    
    cout << endl << "Index of last occurrence: " << index << endl;

    return 0;
}
