#include<iostream>
using namespace std;

int firstOccurence(int arr[], int s, int e, int key, int answer = -1) {
    // Base case: if the search space is invalid, return the answer
    if (s > e) {
        return answer;
    }

    // Calculate mid
    int mid = s + (e - s) / 2;

    // If the key is found, record the answer and search to the left for the first occurrence
    if (arr[mid] == key) {
        answer = mid;  // Update answer to the current mid
        return firstOccurence(arr, s, mid - 1, key, answer);  // Continue searching in the left half
    }
    // If the key is smaller than the mid value, search in the left half
    else if (arr[mid] > key) {
        return firstOccurence(arr, s, mid - 1, key, answer);
    }
    // If the key is larger than the mid value, search in the right half
    else {
        return firstOccurence(arr, mid + 1, e, key, answer);
    }
}

int main() {
    // The array where we will search for the first occurrence of the key
    int odd[11] = {2, 2, 2, 3, 3, 5, 5, 5, 5, 9, 9};

    // Searching for the first occurrence of the key 5
    int indexf = firstOccurence(odd, 0, 10, 5);
    
    // Output the result
    cout << "Index of first occurrence: " << indexf << endl;

    return 0;
}


