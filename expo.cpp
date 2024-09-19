#include<iostream>
using namespace std;
int expo(int n){
    // base case 
    int ans = 1;
    if( n==1 )
    return 2;
    else
    ans =2*expo(n-1);

}

int main(void){
    int n;
    cout<<"Enter the value of n to find factorial : ";
    cin>>n;
    int ans=expo(n);
    cout<<"The value of 2 ^ "<<n<<" is Equal to "<<ans<<endl;
}