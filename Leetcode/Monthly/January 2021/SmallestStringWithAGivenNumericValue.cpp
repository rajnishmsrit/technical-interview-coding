/**
 * Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate 
 * the number of 1's in their binary representation and return them as an array.
 */

# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    string getSmallestString(int n, int k) {
        string result = string(n, 'a');
        k-=n;
        while (k>0){
            int expectedNumber = min(25,k);
            result[--n]+=expectedNumber;
            k-=expectedNumber;

        }
        return result;
    }
};

void test(){
    cout<<"Program starts \n";
    //int number = 28;
    //cout<<str[0];
    Solution s;
    //cout<<countIndividualBits(4);
    cout<<s.getSmallestString(5,73);
    //for (int i = A; i <= Z; i++)
    //cout << i << " ";
}

int main(){
    test();
    return 0;
}