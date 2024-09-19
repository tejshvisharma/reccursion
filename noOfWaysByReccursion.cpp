#include<iostream>
using namespace std;

// Function to calculate the number of ways to reach the nth stair
int countWays(int n) {
    // Base case: If there are no stairs or one stair
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: Sum of ways to reach (n-1) and (n-2) stairs
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    
    int result = countWays(n);
    cout << "Number of ways to reach the " << n << "th stair: " << result << endl;

    return 0;
}
