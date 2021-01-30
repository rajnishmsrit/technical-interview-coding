# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[(n+i)]);
        }
        return result;        
    }
};

void test(){
    vector<int> v{1,1,2,4};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.shuffle(v,2)[2] << endl;
}

int main(){
    test();
    return 0;
}