/**
 * Given a column title as appear in an Excel sheet, return its corresponding column number.
 */

# include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int columnCount = 0;
        for(int i=0;i<s.size();i++){
            columnCount = columnCount*26 + (s[i] - 'A' + 1);
        }
        cout << "The value is "<< columnCount <<endl;
        return columnCount;
    }
};

void test(){
    cout<<"Program starts \n";
    string str ("ABC");
    //cout<<str[0];
    Solution s;
    s.titleToNumber(str);
    //for (int i = A; i <= Z; i++)
    //cout << i << " ";
}

int main(){
    test();
    return 0;
}