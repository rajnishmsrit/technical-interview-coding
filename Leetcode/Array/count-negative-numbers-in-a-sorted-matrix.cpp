/**
 * You are given an array prices where prices[i] is the price of a given stock on the ith day.
 * You want to maximize your profit by choosing a single day to buy one stock and 
 * choosing a different day in the future to sell that stock.
 */

# include <iostream>
# include <bits/stdc++.h>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cols = grid[0].size();  
        int rows = grid.size();
        int result=0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = cols-1; j >=0 ;j--)
            {
                if (grid[i][j]<0){
                    result +=1 ;
                } else{
                    break;
                }
            }
        }
        return result;
    }
};

void test(){

    vector<vector<int>> v{{2, 1, -1},{2, -1, -2}};
    cout << "Program starts \n";
    
    Solution s;
    cout << "The no is: " << s.countNegatives(v) << endl;
}

int main(){
    test();
    return 0;
}