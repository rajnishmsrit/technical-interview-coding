# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string resultSet[30] = {};  
    string stringExpander(int n){
        string lastKnownString;
        if(n==1){
            resultSet[0]="0";
            return "0";
        } 
        else{
            // Make a string from last number.
            lastKnownString = stringExpander(n-1);
            for (int i = 0; i < lastKnownString.length(); i++){
                //cout << "string present at this location is " << lastKnownString[i] << endl;
                if (lastKnownString[i] == '0')
                    resultSet[n]+="01";
                else
                    resultSet[n]+="10";
            }
            return resultSet[n];            
        }

    }

    int kthGrammar(int N, int K) {
        string currentString = stringExpander(N);
        return currentString[K-1]-48;
    }
};

void test(){
    vector<int> v{1,1,2};
    //cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.kthGrammar(3,4) << endl;
}

int main(){
    test();
    return 0;
}