# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int maxAllowedCandies = candyType.size()/2;
        unordered_map<int, int> uniqueCandies;

        while (uniqueCandies.size()<maxAllowedCandies && candyType.size()>0){
            uniqueCandies[candyType.back()]++;
            candyType.pop_back();
        }

        if (uniqueCandies.size() > maxAllowedCandies){
            return maxAllowedCandies;
        }

        //int minValue = 
        return min(maxAllowedCandies, (int)uniqueCandies.size());;
    }
};

void test(){
    vector<int> v{6,6,6,6};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.distributeCandies(v)<< endl;
}

int main(){
    test();
    return 0;
}