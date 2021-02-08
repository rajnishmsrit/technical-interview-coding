# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(int i = 0 ; i < address.length(); i++){
            if (address[i]=='.'){
                result+="[.]";
            }else{
                result+=address[i];
            }
        }
        return result;
    }
};

void test(){
    //vector<int> v{1,1};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.defangIPaddr("1.2.4") << endl;
}

int main(){
    test();
    return 0;
}