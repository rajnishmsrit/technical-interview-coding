/**
 * Given two strings s and t , write a function to determine if t is an anagram of s.
 */
# include <iostream>
# include <bits/stdc++.h>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t) return true;
        return false;
    }
};

void test(){

    string s = "alpha";
    string t = "aphla";
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << endl;
}

int main(){
    test();
    return 0;
}