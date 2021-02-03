# include <iostream>
# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int arr[38]={0};
    int tribonacci(int n) {
        
        if(n==0) return 0;
        if(n==1 && n==2) return 1;
        if (arr[n]==0){
            arr[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        }
        return arr[n];
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.tribonacci(32) << endl;
}

int main(){
    test();
    return 0;
}
