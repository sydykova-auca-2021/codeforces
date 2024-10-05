#include <bits/stdc++.h>

struct ListNode {
    int val; // curr node value
    ListNode *next; // pointer next that points to next node

    // ListNode node
    ListNode() : val(0), next(nullptr) {} // constructor

    // ListNode node(5)
    ListNode(int x) : val(x), next(nullptr) {}

    // ListNode node(20, &node2)
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head; // 1

        while (curr != nullptr) {
            ListNode* next_node = curr->next;
            curr->next = prev; // curr points to prev
            prev = curr; // curr turns into prev
            curr = next_node;
        }
        return prev; // prev new head of reversed list
    }
};

// Helper function to print the list
void printList(ListNode* node) {
    while (node != nullptr) {
        std::cout << node->val << " ";
        node = node->next;
    }
    std::cout << "\n";
}

int main() {
    // [1, 2, 3, 4, 5]
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);

    printList(reversedHead);
    return 0;
}