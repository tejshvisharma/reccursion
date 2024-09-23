#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
void reverseStr(string& str, int s){
    if (s>(str.length()/2-1))
    {
        return;
    }
    else{
       swap(str[s],str[str.length()-s-1]);
      return reverseStr(str, ++s);

    }
    

}
int main(){
     string str;
     cout<<"Enter the string to reverse :";
     cin>>str;
     int len = str.length();
     cout<<"length of the string is :"<<len<<endl;
    reverseStr(str,0);
     cout<<str;
     return 0;
     
}