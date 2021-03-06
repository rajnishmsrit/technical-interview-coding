# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end());
        string result;
        // Add the first word
        result += words[0] + "#";
        for(int i = 1; i < orderedStrings.size(); i++) {
            bool isSubstring = false;
            string prevString = words[i-1];
            for(int j=0; j<=prevString.length(); j++) {
                if(prevString.substr (j) == words[i]){
                    isSubstring = true;
                }
            }
            if (!isSubstring){
                result += words[i] + "#";
            }
        }
        return result.length();
    }
};

void test(){
    vector<string> v{"meaa", "e"};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.minimumLengthEncoding(v)<< endl;
}

int main(){
    test();
    return 0;
}
