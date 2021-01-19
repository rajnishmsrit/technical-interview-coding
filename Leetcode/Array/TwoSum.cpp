/**
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
 * 
 * @problem: https://leetcode.com/problems/two-sum/
 * @solution: https://leetcode.com/problems/two-sum/solution/
 * 
 * Approach 1: Brute Force
 * Approach 2: Two-pass Hash Table
 * Approach 3: One-pass Hash Table
 * 
 */

# include <iostream>
# include <vector>
using namespace std;

class Solution {
    public: 
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> v;
            for (unsigned int i = 0; i < nums.size(); i++)
            {
                for (unsigned int j = i+1; j < nums.size(); j++)
                {
                   if (nums.at(i) + nums.at(j) == target){
                       v.push_back(i);
                       v.push_back(j);
                       return v;
                   }
                }
            }
            return v;
        }
};

void test(){
    vector<int> v{3,1,4,7,7};
    cout<<"Program starts \n";
    
    Solution s;
    vector<int> result = s.twoSum(v, 14);
    cout<< "i=" <<result.at(0)<< ", j="<<result.at(1)<<endl;
}
int main(){
    test();
    return 0;
}