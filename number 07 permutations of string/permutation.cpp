#include <iostream>
#include <vector>
using namespace std;

void allPermutations(string str, int index, vector<string> &ans)
{
    //   base case :
    if (index >= str.length())
    {
        ans.push_back(str);
        return;
    }
    for (int i = index; i < str.length(); i++)
    {
        swap(str[index], str[i]);
        allPermutations(str, index + 1, ans);
        swap(str[index], str[i]);
    }
}

int main()
{
    string str = "abcd";
    vector<string> ans;
    allPermutations(str, 0, ans);

    // Printing the subsequence :
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    cout << "The total number of subsequence : " << ans.size() << endl;

    return 0;
}
