# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> st;
        int c=0;
        for(int i = 0 ; i< S.size(); i++){
            if  (!st.empty() && S[i] == ')' && st.top() == '('){
                st.pop();
                c--;
            }
            else{
                st.push(S[i]);
                c++;
            }
        }
        return c;
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.minAddToMakeValid("()))((")<< endl;
}

int main(){
    test();
    return 0;
}
