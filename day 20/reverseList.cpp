class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            // if (!head || !head->next) {
            //     return head;
            // }
    
            // ListNode* newHead = reverseList(head->next);
            // head->next->next = head;
            // head->next = nullptr;
            // return newHead;     
    
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* fwd ; 
    
    while(curr != nullptr){
    fwd = curr ->next;
    curr ->next = prev;
    prev = curr;
    curr = fwd;
    }
    //     ListNode* reverseList(ListNode* head) {
    //     ListNode* prev = nullptr;
    //     ListNode* current = head;
        
    //     while (current) {
    //         ListNode* nextNode = current->next; 
    //         current->next = prev; 
    //         prev = current; 
    //         current = nextNode; 
    //     }
        
    //     return prev; 
    // }
    
            return prev;
        }
    };