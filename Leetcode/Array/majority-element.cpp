/**
 * Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. 
 */

# include <iostream>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mapper;
        for (int i = 0; i<nums.size(); i++){
            mapper[nums[i]]++;
            cout << "mapper value for this " << nums[i] << " is " << mapper[nums[i]]<<endl; 
            if(nums.size()%2==0){
                cout << "size is even" << endl;
                if ( mapper[nums[i]] > nums.size()/2 ){
                    
                    return nums[i];
                } 
            }else{
                 cout << "size is odd" << endl;
                if ( mapper[nums[i]] > (int) nums.size()/2 ){
                    return nums[i];
                }
            }
        }
        return 0;
    }
};

void test(){
    vector<int> v{2,2,1,1,1,2,2};
    cout << "Program starts \n";
    
    Solution s;
    cout<< "The no is: "<<s.majorityElement(v)<<endl;
}

int main(){
    test();
    return 0;
}