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
    void reverse(ListNode*& head) {
        if (!head || !head->next) return;

        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        //  Find middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* NewList = slow->next;
        slow->next = NULL;
        reverse(NewList);

        ListNode* first = head;
        ListNode* second = NewList;

        while (second) {
            ListNode* t1 = first->next;
            ListNode* t2 = second->next;

            first->next = second;
            second->next = t1;

            first = t1;
            second = t2;
        }
    }
};