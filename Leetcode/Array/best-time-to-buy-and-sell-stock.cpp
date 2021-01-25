/**
 * You are given an array prices where prices[i] is the price of a given stock on the ith day.
 * You want to maximize your profit by choosing a single day to buy one stock and 
 * choosing a different day in the future to sell that stock.
 */

# include <iostream>
# include <bits/stdc++.h>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(auto i=0; i<prices.size(); i++){
            minPrice = min(minPrice,prices[i]);
            if(prices[i]>minPrice){
                maxProfit = max(maxProfit,prices[i]-minPrice);
            }
        }
        return maxProfit;
    }
};

void test(){

    vector<int> v{1,1,7};
    cout << "Program starts \n";
    
    Solution s;
    cout << "The no is: " << s.maxProfit(v) << endl;
}

int main(){
    test();
    return 0;
}