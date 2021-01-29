# include <iostream>
# include <vector>
# include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i]==nums[j]){
                    count++;
                }
            }
            
        }
        return count;
    }
};

void test(){
    cout<<"Program starts \n";
    int number = 28;
    vector <int> v = {1,1,1,1};
    Solution s;
    cout<<s.numIdenticalPairs(v);
}

int main(){
    test();
    return 0;
}