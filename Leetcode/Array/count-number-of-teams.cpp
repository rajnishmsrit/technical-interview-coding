# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int smaller=0,larger=0;
        int frequency=0;
        // small|med|large or large|med|small
        for (int i = 0; i < rating.size(); i++)
        {
            int smaller=0,larger=0;
            for (int j = 0; j < i; j++)
            {
                if(rating[j]<rating[i]){
                    smaller++;
                }else if(rating[j]>rating[i]){
                    larger++;
                }
            }
            frequency = smaller*larger;
        }
        return frequency;
    }
};

void test(){
    vector<int> v{1,2,3,4};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.numTeams(v) << endl;
}

int main(){
    test();
    return 0;
}