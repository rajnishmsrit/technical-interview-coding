# include <bits/stdc++.h>
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* mergedList = new ListNode();
	while(l1!=NULL){
		while(l1->val <= l2->val){
			mergedList->val = l1->val;
			l1 = l1->next;				
		}
		while(l1->val > l2->val){
			
		}
	}        
    }
};  