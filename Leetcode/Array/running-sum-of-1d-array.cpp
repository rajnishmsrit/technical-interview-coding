# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int currentSum=0;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];
            result.push_back(currentSum);
        }
        return result;
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.runningSum(v).at(1) << endl;
}

int main(){
    test();
    return 0;
}