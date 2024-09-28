#include <iostream>
#include <vector>
#include<string>
using namespace std;

void keyPadMapping(string digits, string output, int index, vector<string>& ans,string mapping[])
{
    // base case:
    if (index >= digits.length())
    {
      ans.push_back(output);
        return; // Added return after pushing output to ans
    }
     int number = digits[index]-'0'; // number will be out from corresponds to the current index of digits   
    string mappedValue = mapping[number];  //corresponding mapping of text will stored in mappedValue string
    for (int i = 0; i < mappedValue.length(); i++) 
    {
        output.push_back(mappedValue[i]); 
        keyPadMapping(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
    
}

int main()
{
    string digits = "36";
    string output = "";
    vector<string> ans;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    keyPadMapping(digits, output, 0, ans, &mapping[0]);

    // Printing the subsequence :
    for (int i = 0; i < ans.size(); i++)
    {
      cout<<ans[i]<<endl;
    }
    cout<<"The total number of superSet : " << ans.size() << endl;

    return 0;
}
