/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. 
 */

# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        for (auto i=0;i < nums.size(); i++){
            counter++;
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                // reset the current iterator position, if we found any 0 as the current iterator position is ahead of initial one.
                i-=1;                
            }
            // Since the max iteration cannot run beyond the initial size
            // Falsely situation of a run of 0 0 0 will break the code.
            if(counter == nums.size()){
                return;
            }
        }
    }
};

void test(){
    vector<int> v{2,0,0,1};
    cout << "Program starts \n";
    
    Solution s;
    s.moveZeroes(v);
    // vector<int> result = ;
    std::cout << "The vector elements are : ";
    for(int i=0; i < v.size(); i++)
    std::cout << v.at(i) << ' ';
}

int main(){
    test();
    return 0;
}