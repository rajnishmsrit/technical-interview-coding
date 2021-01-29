/**
 * Given head which is a reference node to a singly-linked list.
 * The value of each node in the linked list is either 0 or 1. 
 * The linked list holds the binary representation of a number.
 * Return the decimal value of the number in the linked list.
 */

# include <iostream>
# include <vector>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    // head = {1,0,1,1}
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        int decimalValue=0;
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }
        // v = {1,0,1,1}
        for(int i=0; i<v.size(); i++){
            decimalValue+=v[i]*pow(2,v.size()-1-i);
        }
        return decimalValue;
    }
};

void test(){
    cout<<"Program starts \n";
    //int number = 28;
    //cout<<str[0];
    Solution s;
    //cout<<countIndividualBits(4);
    cout<<s.getDecimalValue(5,73);
    //for (int i = A; i <= Z; i++)
    //cout << i << " ";
}

int main(){
    test();
    return 0;
}