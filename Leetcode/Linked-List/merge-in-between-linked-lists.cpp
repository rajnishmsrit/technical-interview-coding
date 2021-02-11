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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
	ListNode* temp = list2;
	ListNode* listBend = list1;
    ListNode* listAend = list1;
	while(--a){
		listAend = listAend->next;
	}
	b+=2;
	while(--b){
		listBend = listBend->next;
	}
	while(list2->next!=NULL){
		list2 = list2->next;	
	}
	
	listAend->next = temp;
	list2->next = listBend;
	return list1;
        
    }
};