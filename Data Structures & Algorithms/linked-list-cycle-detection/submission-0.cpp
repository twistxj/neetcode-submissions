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
    bool hasCycle(ListNode* head) {
        int index=0;

        ListNode* curr = head;
        ListNode* temp;
        unordered_set<ListNode*> repeat;

        while(curr!=nullptr){
            if(repeat.find(curr)!=repeat.end()){
                return true;
            }
            repeat.insert(curr);
            curr = curr->next;
        }

        return false;
        
    }
};
