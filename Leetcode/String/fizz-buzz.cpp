/**
 * Write a program that outputs the string representation of numbers from 1 to n.
 * But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. 
 * For numbers which are multiples of both three and five output “FizzBuzz”.
 */
# include <iostream>
# include <bits/stdc++.h>
# include <vector>
# include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(auto i=1; i<=n; i++){
            if(i%15==0){
                result.push_back("FizzBuzz");
            } else if (i%3==0){
                result.push_back("Fizz");
            } else if (i%5==0){
                result.push_back("Buzz");
            } else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};

void test(){
    cout << "Program starts \n";
    Solution s;
    vector<string> result = s.fizzBuzz(20);
    cout << "The array is : " << endl;
    for(int i=0; i < result.size(); i++)
    std::cout << result.at(i) << ' '<<endl;
}

int main(){
    test();
    return 0;
}