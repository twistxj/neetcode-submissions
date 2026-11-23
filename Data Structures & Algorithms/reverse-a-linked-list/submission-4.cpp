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
        ListNode* temp;
        ListNode* reversed = nullptr;
        ListNode* curr = head;

        if (curr == nullptr)
        {
            return curr;
        }
        while(curr!=nullptr)
        {
            temp = curr->next;
            curr->next = reversed;
            reversed = curr;
            curr = temp;   
        }
        return reversed;
    }
};
