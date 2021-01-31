# include <iostream>
# include <vector>
# include <unordered_map>
using namespace std;

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> result;
        int maxFrequency=0;
        for (int i = lowLimit; i <= highLimit; i++)
        {
            int sum=0;
            int number=i;
            while (number>0){
                sum+=(number%10);
                number = (int)(number/10);
            }
            result[sum]++;
            maxFrequency = max(maxFrequency, result[sum]);
        }
        return maxFrequency;        
    }
};

void test(){
    vector<int> v{1,1,2};
    cout << "Program starts \n";
    Solution s;
    cout << "The no is: " << s.countBalls(19,28) << endl;
}

int main(){
    test();
    return 0;
}