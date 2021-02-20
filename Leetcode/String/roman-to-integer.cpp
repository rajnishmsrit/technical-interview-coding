# include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int biggerIndex=s[0];
        int length = s.size()-1;
        if(biggerIndex>=s[length]){
            biggerIndex=s[length];
        }
        cout << biggerIndex << endl;
        //for(auto i:s)

        return 1;
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.romanToInt("XIIIIIII")<< endl;
}

int main(){
    test();
    return 0;
}