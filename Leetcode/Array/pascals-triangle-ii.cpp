# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        vector<int> finalResult;
        for (int i = 0; i <= rowIndex; ++i)
        {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = result[i - 1][j] + result[i - 1][j - 1];
            }
            result.push_back(row);
            finalResult = row;
        }
        return finalResult;
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.generate(5)<< endl;
}

int main(){
    test();
    return 0;
}