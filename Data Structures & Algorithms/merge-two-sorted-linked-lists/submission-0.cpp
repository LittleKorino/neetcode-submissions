class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // A dummy node gives us a solid starting point so we don't 
        // have to write special edge-case logic for the very first node.
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // "Keeping two pointers and increment one based on comparison"
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;     // Add to the tail of the resultant list
                list1 = list1->next;    // Increment the list1 pointer
            } else {
                tail->next = list2;     // Add to the tail of the resultant list
                list2 = list2->next;    // Increment the list2 pointer
            }
            tail = tail->next;          // Move the tail forward
        }

        // Once one list is exhausted, simply attach the remainder of the other list.
        // Because they are already sorted, we don't need to traverse them.
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // Return the actual head of the new list, skipping the dummy node
        return dummy.next;
    }
};