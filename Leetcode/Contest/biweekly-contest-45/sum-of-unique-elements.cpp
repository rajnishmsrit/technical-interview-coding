# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mapper;
        int sum=0;
        for (int i = 0; i < nums.size(); i++)
        {
            mapper[nums[i]]++;
        }
        for (auto i : mapper){ 
            if(i.second==1){
                sum+=i.first;
            }            
        }
        return sum;
    }
};

void test(){
    vector<int> v{1,2,3,4,5};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.sumOfUnique(v) << endl;
}

int main(){
    test();
    return 0;
}