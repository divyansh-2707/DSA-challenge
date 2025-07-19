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
private:
    int count(ListNode* head)
    {
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int sum = count(head);
        int count = 0;
        sum = sum - n;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(count != sum)
        {
           prev = curr;
           curr=curr->next;
           count++;
        }
        if(prev==NULL)
        {
            ListNode* temp = curr->next;
            delete(curr);
            return temp;
        }

        prev->next = curr->next;
        delete(curr);
        return head;
    }
};
