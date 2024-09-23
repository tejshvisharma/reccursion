#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
bool checkPalindrome(string& str, int s){
    if (s>(str.length()/2-1))
    {
        return true;
    }
    else{
       if(str[s]!=str[str.length()-s-1]){
        return false;
       }
      return checkPalindrome(str, ++s);

    }
    

}
int main(){
     string str;
     cout<<"Enter the string to reverse :";
     cin>>str;
     int len = str.length();
     cout<<"length of the string is :"<<len<<endl;
    bool isPalindrome = checkPalindrome(str,0);
     cout<<((isPalindrome) ?("The string is a PAlINDROME STRING"):("The String is not a PALINDROME STRING"));
     return 0;
     
}