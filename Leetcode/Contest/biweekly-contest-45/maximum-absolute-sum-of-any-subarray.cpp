# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currentPositionFront=0;
        int curentPositionBack=nums.size()-1;
        int currentMaxSum = nums[currentPositionFront] + nums[curentPositionBack];
        
        for (int i = 0; i < nums.size()-1; i++)
        {
            // sum > 0
            if(currentMaxSum>0){
                // Add a positive number
                if(nums[i]>0)
            }else if(currentMaxSum<0){
                // Add a negative number
            }else {
                // anything works
            }
            
        }
    }
};

void test(){
    vector<int> v{2,-5,1,-4,3,-2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.maxAbsoluteSum(v)<< endl;
}

int main(){
    test();
    return 0;
}