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
    void reorderList(ListNode* head) {
        // finding middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* curr = second;
        ListNode* pre = nullptr;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        ListNode* list1 = head;
        ListNode* list2 = pre;

        while (list1 != nullptr && list2 != nullptr) {
            ListNode* nextList1 = list1->next;
            ListNode* nextList2 = list2->next;

            list1->next = list2;
            list2->next = nextList1;
            list1 = nextList1;
            list2 = nextList2;
        }
    }
};