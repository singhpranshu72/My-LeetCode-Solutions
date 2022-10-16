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
//https://leetcode.com/problems/swap-nodes-in-pairs/discuss/1775033/SWAPPING-NODES-(Not-just-the-values)-oror-Visual-Explanation-oror-Well-Explained-oror-C%2B%2B
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {ListNode* temp=head;
    if (head == nullptr || head->next == nullptr)
               return head;
               
        ListNode * prev = nullptr;
        ListNode * curr = head;
        ListNode * nxt  = head->next;
        
        head = head->next;
        
        while (curr && nxt) {//swapping nodes
            if (prev)
                prev->next = nxt;//prev is basically a dummy node which will point to head->next
            curr->next = nxt->next;// 1 points to 3 as after swap LL will be 2 1 3 4
            nxt->next = curr; 
            prev = curr;//prev will come to 2
            curr = curr->next;//curr will be at 3
            if (curr)
                nxt = curr->next;
        }
        
        return head;
    }
};