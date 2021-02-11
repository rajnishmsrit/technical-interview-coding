# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
	int product=1, sum=0, num;
	while (n>0){
		num = n%10;
		product *= num;
		sum += num;
		n = n/10;	
	}
	return (product-sum);
    }
};

int main(){
	Solution s;
	cout<<s.subtractProductAndSum(4421);
    return 0;
}