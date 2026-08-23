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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return head;

        // int n = head.length();
        // int off = 0;
        // int u = 1;
        // int cm = 1;
        // while(cm<n){
        //     if(head[cm]!=head[cm-1]){
        //         head[++off] = head[cm];
        //         u++;cm++;
        //     }else{
        //         cm++;
        //         continue;
        //     }
        // }
        // return head;
    }
};