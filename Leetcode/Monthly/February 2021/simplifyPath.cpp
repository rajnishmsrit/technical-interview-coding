# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        // Vector of string to save tokens 
        vector <string> tokens;
        stringstream check1(path);
        string intermediate;
        stack<string> cleanHierarchy;
        while(getline(check1, intermediate, '/')) 
        { 
            tokens.push_back(intermediate); 
        }
        for (int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] == "." || tokens[i] == ""){
                // don't do anything
            }else if(tokens[i] == ".."){
                // pop out
                if(!cleanHierarchy.empty()){
                    cleanHierarchy.pop();
                }
            }else{
                // push
                cleanHierarchy.push(tokens[i]);
            }
        }
        string fullString = "";
        if(cleanHierarchy.empty()){
            return "/";
        }else{
            while(!cleanHierarchy.empty()){
                string tempString = "";
                tempString = "/" + cleanHierarchy.top();
                fullString = tempString+fullString;
                cleanHierarchy.pop();
            }
            return fullString;
        }
        
    }
};

void test(){
    string str ="/home//foo/";
    cout << "Program starts \n";
    Solution s;
    cout << "The path is: " << s.simplifyPath(str) << endl;
}

int main(){
    test();
    return 0;
}
