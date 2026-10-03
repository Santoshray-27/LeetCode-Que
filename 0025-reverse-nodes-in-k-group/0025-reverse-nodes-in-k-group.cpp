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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1)
            return head;

        ListNode* prevGroupTail = nullptr;
        ListNode* originalHead = head;

        while (true) {
            ListNode* temp = originalHead;

            for (int i = 0; i < k; i++) {
                if (temp == nullptr)
                    return head;
                temp = temp->next;
            }

            ListNode* pre = nullptr;
            ListNode* curr = originalHead;

            for (int i = 0; i < k; i++) {
                ListNode* next = curr->next;
                curr->next = pre;
                pre = curr;
                curr = next;
            }

            if (prevGroupTail != nullptr)
                prevGroupTail->next = pre;
            else
                head = pre;

            originalHead->next = curr;

            prevGroupTail = originalHead;
            originalHead = curr;
        }
    }
};