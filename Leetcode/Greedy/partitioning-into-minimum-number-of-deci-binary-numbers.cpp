# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        return *max_element(begin(n), end(n))-'0';
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.minPartitions("112345")<< endl;
}

int main(){
    test();
    return 0;
}