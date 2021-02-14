/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. 
 */

# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> countValues;
        for (int i=0; i< nums.size(); i++){
            if(countValues.find(nums[i])!=countValues.end()){
                if(countValues[nums[i]]==1){
                    return true;
                }
            }
            countValues[nums[i]]++;
        }
        return false;
    }
};

void test(){

    vector<int> v{1,1,2};
    cout << "Program starts \n";
    
    Solution s;
    cout << "The no is: " << s.containsDuplicate(v) << endl;
}

int main(){
    test();
    return 0;
}
