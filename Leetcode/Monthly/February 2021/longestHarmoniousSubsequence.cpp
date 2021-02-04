# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (int i = 0; i < nums.size(); i++)
        {
            counter[nums[i]]++;
        }

        int maxLength=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(counter.find(nums[i]+1) != counter.end()){
                maxLength = max (maxLength, counter[nums[i]]+counter[nums[i]+1]);
            }
        }
        return maxLength;
    }
};

void test(){
    vector<int> v{1,1,2,5,6,2,878,33};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.findLHS(v) << endl;
}

int main(){
    test();
    return 0;
}