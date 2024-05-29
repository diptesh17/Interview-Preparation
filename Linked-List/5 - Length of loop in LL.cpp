int countLoopLength(Node* loopNode) {
    int count = 1;
    Node* temp = loopNode;
    while (temp->next != loopNode) {
        count++;
        temp = temp->next;
    }
    return count;
}

int countNodesinLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Detect loop using Floyd’s Cycle-Finding Algorithm
    while ( fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        // If slow and fast meet at some point then there is a loop
        if (slow == fast) {
            // Find the length of the loop
            return countLoopLength(slow);
        }
    }

    // If no loop found
    return 0;
}
