/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. 
 */

# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> disappearedNumbers;
        unordered_map<int, int> mapper;
        for (auto i=0; i<nums.size(); i++) {
            // index = no at i position of nums vector
            int index = abs(nums[i])-1;
            // If the no present is positive at the index, make it negative.
            // else don't worry.
            if (nums[index]>0){
                nums[index]=-abs(nums[index]);
            }
        }
        for (int i=0; i<nums.size(); i++){
            // Find out all the positive integer in nums array to find the missing 
            // values (they are the indexes of positive number)
            if(nums[i]>0){
                disappearedNumbers.push_back(i+1);
            }
        }
        return disappearedNumbers;
    }
};

void test(){

    vector<int> v{1,1,2};
    cout << "Program starts \n";
    
    Solution s;
    cout << "The no is: " << s.findDisappearedNumbers(v).at(0) << endl;
}

int main(){
    test();
    return 0;
}