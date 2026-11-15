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
    ListNode* reverseList(ListNode* head) {
        ListNode* rev= nullptr;
        ListNode* curr = head;
        ListNode* temp;

        while(curr!=nullptr){
            temp = curr->next;
            curr->next = rev; // change pointer 
            rev = curr; // change value
            curr = temp; // move to next
            // std::cout<< rev << endl;
        }
        return rev;
    }
};
