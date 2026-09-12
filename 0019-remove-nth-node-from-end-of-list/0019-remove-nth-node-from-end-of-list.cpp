class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // Count the number of nodes
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // If we need to delete the head
        if (n == count) {
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }

        // Find the node before the node to delete
        int steps = count - n - 1;
        ListNode* temp2 = head;

        while (steps > 0) {
            temp2 = temp2->next;
            steps--;
        }

        // Delete the node
        ListNode* deleteNode = temp2->next;
        temp2->next = temp2->next->next;
        delete deleteNode;

        return head;
    }
};