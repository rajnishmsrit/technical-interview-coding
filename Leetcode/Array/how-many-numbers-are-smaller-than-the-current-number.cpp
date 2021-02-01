# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        vector <int> result;
        for (int i = 0; i < nums.size(); i++)
		{
			for (int j = 0; j < nums.size(); j++)
			{
				if(nums[i]>nums[j]){
					count++;
				}	
			}
			result.push_back(count);
		}
		return result;
    }
};

int main(){
	vector<int> v = {1,6,1,4};
	Solution s;
	cout<< "Program starts" << endl << s.smallerNumbersThanCurrent(v);
}
