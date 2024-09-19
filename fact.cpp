#include<iostream>
using namespace std;
int fact(int n){
    // base case 
    int factorial= 1;
    if(n==1)
    return 1;
    else
    factorial =n*fact(n-1);

}

int main(void){
    int n;
    cout<<"Enter the value of n to find factorial : ";
    cin>>n;
    int ans=fact(n);
    cout<<"The factorial of "<<n<<" is Equal to "<<ans<<endl;
}