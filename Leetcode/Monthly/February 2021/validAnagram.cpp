# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mapper;
        if(s.size()==t.size())
        {
            for(int i=0; i< s.size(); i++){
                mapper[s[i]]++;
            }
            for(int i=0; i< s.size(); i++){
                mapper[t[i]]--;
            }
            for(int i=0; i <mapper.size(); i++){
                if(mapper[i]!=0){
                    return false;		
                }
            }
            return true;
        }
        return false;
    }
};

int main(){
	Solution s;
	cout<<s.isAnagram("anagram", "nagaram");
}