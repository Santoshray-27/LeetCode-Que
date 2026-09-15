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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummyHead = new ListNode(7, head);
        ListNode* slow = dummyHead;
        ListNode* fast = head;

        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* middleNode = slow->next;
        slow->next = slow->next->next;
        delete middleNode;

        ListNode* newHead = dummyHead->next;

        return newHead;
    }
};