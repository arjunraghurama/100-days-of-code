/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
    
    static int get_length(ListNode* head) 
    {
      int list_length = 0;
      while(head != nullptr) {
        head = head->next;
        list_length++;
      }
      return list_length;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        // If manipulating ListData is allowed?
//         ListNode *tempA = headA;
//         while( tempA != nullptr)
//         {
//             tempA->val = -(tempA->val);
//             tempA = tempA->next;
//         }
        
//         ListNode *tempB = headB;
//         while( tempB != nullptr)
//         {
//             if(tempB->val < 0 )
//                 return tempB;
//             tempB = tempB->next;
//         }
        
//         // No intersection found
//         return nullptr;
        
        ListNode* list1node = nullptr;
        int list1length = get_length(headA);
        ListNode* list2node = nullptr;
        int list2length = get_length(headB);
        
        int length_difference = 0;
        if(list1length >= list2length) {
          length_difference = list1length - list2length;
          list1node = headA;
          list2node = headB;
        } else {
          length_difference = list2length - list1length;
          list1node = headB;
          list2node = headA;
        }
        
        while(length_difference > 0) {
        list1node = list1node->next;
        length_difference--;
        }
        
        while(list1node != nullptr) {
            if(list1node == list2node) {
              return list1node;
            }
            list1node = list1node->next;
            list2node = list2node->next;
        }
        return nullptr;

    }
};

/*
Java solution 

After first iteration of linkedlist, switch the tail to haed of second linked list.
So in second iteration both the nodes meet at a point which is the intersection point.

*/

public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA == null || headB == null){
            return null;
        }
        ListNode aWalker = headA;
        ListNode bWalker = headB;
        
        while(aWalker != bWalker){
            if(aWalker == null){
                aWalker = headB;
            } else{
                aWalker = aWalker.next;
            }
            
            if(bWalker == null){
                bWalker = headA;
            } else {
                bWalker = bWalker.next;
            }
        }
        return aWalker;     
    }
}