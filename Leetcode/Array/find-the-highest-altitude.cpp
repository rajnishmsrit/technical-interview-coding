# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAltitude = 0;
        int maxAltitude = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            currentAltitude+=gain[i];
            maxAltitude = max (maxAltitude, currentAltitude);
        }
        return maxAltitude;
    }
};

void test(){
    vector<int> v{-4,-3,-2,-1,4,3,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.largestAltitude(v) << endl;
}

int main(){
    test();
    return 0;
}