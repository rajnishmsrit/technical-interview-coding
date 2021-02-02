# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bitCount=0;
        while(n>0){
            if(n%2==1) bitCount++;
            n=n/2;
        }
        return bitCount;
    }
};

void test(){
    //vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.hammingWeight(33) << endl;
}

int main(){
    test();
    return 0;
}