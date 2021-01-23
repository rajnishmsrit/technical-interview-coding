/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
 * 
 * @problem: https://leetcode.com/problems/single-number/
 * @solution: https://leetcode.com/problems/single-number/solution/
 * 
 * Approach 1: Brute Force
 * Approach 2: Two-pass Hash Table
 * Approach 3: One-pass Hash Table
 * 
 */

# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> counter;
        for (auto i = 0; i < nums.size(); i++)
        {
            counter[nums[i]]++;
        }
        for (auto j : counter){
            if(j.second == 1){
                return j.first;
            }
        }
        
    }
};

void test(){
    vector<int> v{1,1,4,7,7};
    cout << "Program starts \n";
    
    Solution s;
    cout<< "The no is: "<<s.singleNumber(v)<<endl;
}

int main(){
    test();
    return 0;
}