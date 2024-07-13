class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        len = len - n;

        if(len == 0){
            head = head->next;
        }
        else{
            temp = head;
            int ben = 0;
            while(temp != NULL){
                if(ben < len - 1){
                    ben++;
                    temp = temp->next;
                }
                else{
                    temp->next = temp->next->next;
                    break;
                }
            }
        }
        return head;
    }
};