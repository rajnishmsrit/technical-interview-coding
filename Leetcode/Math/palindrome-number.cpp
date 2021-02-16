# include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || (x%10==0 && x!=0)){
            return false;
        }
        int reverse = 0;
        while(x>reverse){
            reverse = reverse*10 + x%10;
            x/=10;
        }
        cout << reverse<<endl<<endl;
        return (x==reverse || x==reverse/10);
    }
};

void test(){
    Solution s;
    cout<<s.isPalindrome(0)<<endl;

}

int main(){
    test();
    return 0;
}