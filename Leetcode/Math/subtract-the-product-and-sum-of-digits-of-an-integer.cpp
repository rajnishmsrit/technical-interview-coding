# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
	int product=1, sum=0, num;
	while (n>0){
		num = n%10;
        cout << num << endl;
		product *= num;
        //cout << product << endl;
		sum += num;
		n = n/10;	
	}
    //cout << product << " " << sum;
	return (product-sum);
    }
};

int main(){
	Solution s;
	cout<<s.subtractProductAndSum(4421);
    return 0;
}