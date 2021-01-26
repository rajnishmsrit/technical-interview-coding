/**
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 */

# include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string result;
        while(n>0){
            result = char('A' + (n-1)%26) + result;
            n = (n-1)/26;
        }
        return result;
    }
};

void test(){
    cout<<"Program starts \n";
    int number = 28;
    //cout<<str[0];
    Solution s;
    cout<<s.convertToTitle(number);
    //for (int i = A; i <= Z; i++)
    //cout << i << " ";
}

int main(){
    test();
    return 0;
}