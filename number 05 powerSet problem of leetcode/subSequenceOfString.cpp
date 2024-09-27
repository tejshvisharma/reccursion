#include <iostream>
#include <vector>
using namespace std;

void powerSet(string str, string output, int index, vector<string> &ans)
{
    // base case:
    if (index >= str.length())
    {
       if((output.length())>0) ans.push_back(output);
        return; // Added return after pushing output to ans
    }

    // exclude the current element:
    powerSet(str, output, index + 1, ans); // Corrected: index + 1 instead of ++index

    // include the current element:
    char element = str[index];
    output.push_back(element);
    powerSet(str, output, index + 1, ans); // Corrected: index + 1 instead of ++index
}

int main()
{
    string str = "abcdef";
    string output = "";
    vector<string> ans;
    powerSet(str, output, 0, ans);

    // Printing the subsequence :
    for (int i = 0; i < ans.size(); i++)
    {
      cout<<ans[i]<<endl;
    }
    cout<<"The total number of superSet : " << ans.size() << endl;

    return 0;
}
