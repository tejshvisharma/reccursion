#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
double powerof(int a, int b){
    // base case handling :
    if (b==0)
        return 1;
    if(b==1)
        return a;

    // recursive case handling :
    double ans = powerof(a,b/2);
    if (b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
    
}
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"The value of the a ^ b : "<<powerof(a,b);

     return 0;
     
}