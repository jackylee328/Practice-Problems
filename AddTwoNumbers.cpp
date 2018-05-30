// You are given two non-empty linked lists representing two non-negative integers. 
// The digits are stored in reverse order and each of their nodes contain a single digit. 
// Add the two numbers and return it as a linked list.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <cstddef>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int left, right;
        int greaterThan10 = 0;
        ListNode head(0);
        ListNode *current = &head;
        while (l1 || l2 || greaterThan10 != 0){
            left = l1 ? l1->val : 0;
            right = l2 ? l2->val : 0;
            int sum = left + right + greaterThan10;
            greaterThan10 = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return head.next;
    }
};
