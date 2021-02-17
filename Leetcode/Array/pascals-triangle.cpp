# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; ++i)
        {
        	vector<int> row(i + 1, 1);
			for (int j = 1; j < i; j++) {
				row[j] = result[i - 1][j] + result[i - 1][j - 1];
			}
			result.push_back(row);
        }
        return result;
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