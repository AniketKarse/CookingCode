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
    ListNode* middleNode(ListNode* head) {
        int midCount = 1;
        ListNode* x = head;
        while(x->next != NULL){
            x = x->next;
            midCount++;
        }
        midCount = (midCount/2);
        while(midCount--){
            head = head->next;
        }
        return head;
    }
};
