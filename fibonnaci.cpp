#include<iostream>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fib(int n) {
    // Base cases
    if (n == 0) {
        return 0;  // First Fibonacci number is 0
    }
    if (n == 1) {
        return 1;  // Second Fibonacci number is 1
    }
    
    // Recursive case: Sum of the previous two Fibonacci numbers
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int result = fib(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}
