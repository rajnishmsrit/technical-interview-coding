# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector <int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int start = nums.size();
        int end = 0;
        for (int i = 0; i< nums.size(); i++){
            if(nums[i]!=sorted[i]){
                start = min (start, i);
                end = max(end, i);
            }
        }
        if(end-start > 0){
            return end-start+1;
        }
        return 0;
    }
};

void test(){
    vector<int> v{3,1,2,4};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.findUnsortedSubarray(v)<< endl;
}

int main(){
    test();
    return 0;
}