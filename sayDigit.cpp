#include<iostream>
using namespace std;

string digits[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

int  sayDigits(int n) {

    if (n == 0)
        return 0;
    
    // processing
    int digit = n % 10;
        
    // Recursive case: 

    sayDigits(n/10);
      
    cout<<digits[digit]<<" ";
    
    
}

// int reverseNumber(int n) {
//     int reversed = 0;
    
//     while (n > 0) {
//         int lastDigit = n % 10;  // Get the last digit
//         reversed = reversed * 10 + lastDigit;  // Append last digit to reversed
//         n = n / 10;  // Remove the last digit from the original number
//     }
    
//     return reversed;
// }

int main() {
    int n;
    cout << "Enter the number to print in word: ";
    cin >> n;
    // int reversedNum=reverseNumber(n);
    int result = sayDigits(n);

    return 0;
}
