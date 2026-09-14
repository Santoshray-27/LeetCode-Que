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

//  Basic solution with two iterations...I will fix it using two pointers
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp = head;
        // int count = 0;
        // while (temp != nullptr) {
        //     count++;
        //     temp = temp->next;
        // }

        // int middle = count / 2;
        // ListNode* temp2 = head;
        // while (middle != 0) {
        //     middle--;
        //     temp2 = temp2->next;
        // }
        // return temp2;

        //----OPTIMIZED SOLUTION-------//

        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};