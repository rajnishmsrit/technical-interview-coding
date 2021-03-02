# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        sort(begin(nums), end(nums));
        for(int i=0; i<nums.size(); i++){
            if(nums[nums[i]-1]>0){
                nums[nums[i]-1] = -nums[nums[i]-1];
            } else {
                // found the no which is repeated since it already negative
                result.push_back(abs(nums[i]));
            }
        }
        for(int i=0; i<nums.size(); i++){
            cout << nums[i] << " ";
            if (nums[i]>0){
                result.push_back(i+1);
            }
        }
        cout << " EOL " << endl;
            cout << result[0] << " " << result[1]; 
        return result;
    }
};

void test(){
    vector<int> v{2, 2, 3, 4};
    cout << "Program starts \n";
    Solution s;
    s.findErrorNums(v);
    //cout << "The no is: " << s.findErrorNums(v)[0] << " " << s.findErrorNums(v)[1] << endl;
}

int main(){
    test();
    return 0;
}
