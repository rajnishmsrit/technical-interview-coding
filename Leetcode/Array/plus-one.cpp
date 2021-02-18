# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size()-1 ; i>=0; i--){
        	if (digits[i]==9){
        		digits[i]=0;
        	} else {
        		digits[i]+=1;
        		return digits;
        	}
        }
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};

void test(){
    vector<int> v{9,9};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: ";
    for (int n : s.plusOne(v))   
        std::cout << n << ' ';
    cout << '\n';
}

int main(){
    test();
    return 0;
}