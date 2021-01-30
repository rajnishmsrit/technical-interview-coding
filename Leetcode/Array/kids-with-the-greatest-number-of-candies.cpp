# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxElement=candies[0];
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++)
        {
            if(maxElement<candies[i]){
                maxElement = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i]+extraCandies >= maxElement){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;        
    }
};

void test(){
    vector<int> v{1,1,4};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.kidsWithCandies(v,2).at(2) << endl;
}

int main(){
    test();
    return 0;
}