#include<iostream>
#include<vector>
using namespace std;

void powerSet(vector<int>& v, vector<int> output, int index, vector<vector<int>>& ans) {
    // base case:
    if(index >= v.size()) {
        ans.push_back(output);
        return; // Added return after pushing output to ans
    }

    // exclude the current element:
    powerSet(v, output, index + 1, ans); // Corrected: index + 1 instead of ++index

    // include the current element:
    int element = v[index];
    output.push_back(element);
    powerSet(v, output, index + 1, ans); // Corrected: index + 1 instead of ++index
}

int main() {
    vector<int> v = {1, 2, 3,4};
    vector<int> output;
    vector<vector<int>> ans; 
    powerSet(v, output, 0, ans);

    // Printing the power set:
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << ",";
        }
        cout << endl;
    }
    cout<<"The total number of superSet : "<<ans.size()<<endl;

    return 0;
}
