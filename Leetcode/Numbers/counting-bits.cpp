/**
 * Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate 
 * the number of 1's in their binary representation and return them as an array.
 */

# include <iostream>
# include <vector>
using namespace std;

int countIndividualBits (int num){
    int bitcount=0;
    while(num>0){
       if(num%2==1){
           bitcount++;
       }
       num = (int)num/2;
    }
    return bitcount;    
}

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for(int i=0; i<num; i++){
            
        }
        return result;
    }
};

void test(){
    cout<<"Program starts \n";
    //int number = 28;
    //cout<<str[0];
    Solution s;
    cout<<countIndividualBits(4);
    //cout<<s.countBits(3);
    //for (int i = A; i <= Z; i++)
    //cout << i << " ";
}

int main(){
    test();
    return 0;
}