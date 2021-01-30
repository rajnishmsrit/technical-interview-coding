# include <iostream>
# include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int individualMoney = 0;
        for (int customer = 0; customer < accounts.size(); customer++)
        {
            individualMoney = 0;
            for (int bank = 0; bank < accounts[0].size(); bank++)
            {
                individualMoney+=accounts[customer][bank];
            }
            maxWealth = max(maxWealth, individualMoney);            
        }
        return maxWealth;
    }
};

void test(){
    vector<vector <int>> v{{1,1}, {1,2}};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.maximumWealth(v) << endl;
}

int main(){
    test();
    return 0;
}