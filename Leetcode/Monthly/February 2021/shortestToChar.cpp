# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result;
        vector<int> positions;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]==c){
                positions.push_back(i);
            }
        }
        int k=0;
        int start = positions[k];
        int end = positions[k+1];
        int minLength=0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i==start){
                result.push_back(0);
            }else if(i==end){
                result.push_back(0);
                start = positions[++k];
                end = positions[k+1];
            }else if (i<start){
                minLength = start-i; 
            }else if (i>start && i<end){
                minLength = min(minLength, i-start, end-i);
            }else if (i>end){   
                minLength = i-end;
            }
            // i<end

        }
        
        return result;  
    }
};

void test(){
    //vector<int> v{1,1,2};
    string s = "loveleetcode";
    char c = 'c';

    cout << "Program starts \n";
    Solution solution;
    cout << "The no is: " << solution.shortestToChar(s, c).at(0) << endl;
}

int main(){
    test();
    return 0;
}