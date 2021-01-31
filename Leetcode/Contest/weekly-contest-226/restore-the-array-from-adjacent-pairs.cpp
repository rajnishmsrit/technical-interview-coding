# include <iostream>
# include <vector>
# include <unordered_map>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,int> mapper;
        vector<int> result;
        for (int i = 0; i < adjacentPairs.size(); i++)
        {
            for (int j = 0; j < adjacentPairs[0].size(); j++)
            {
                mapper[adjacentPairs[i][j]]=0;
            }
        }
        for (auto key:mapper)
        {
            result.push_back(key.first);
        }
        sort(result.begin(), result.end());
        return result;
    }
};

void test(){
    vector<vector <int>> v{{2,1},{3,4},{3,2}};
    cout << "Program starts \n";
    Solution s;
    //cout << "The no is: " << s.restoreArray(v)[3] << endl;
    cout << "Sorted \n"; 
    for (auto x : s.restoreArray(v)) 
        cout << x << " "; 
}

int main(){
    test();
    return 0;
}