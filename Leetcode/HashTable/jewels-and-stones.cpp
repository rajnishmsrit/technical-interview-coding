# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0; i<stones.length();i++){
            for(int j=0; j<jewels.length(); j++){
                if(stones[i]==jewels[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.numJewelsInStones("aA", "aAAbbbb") << endl;
}

int main(){
    test();
    return 0;
}