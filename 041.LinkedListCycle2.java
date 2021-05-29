/**
 *
 * Input: head = [3,2,0,-4], pos = 1
 * Output: tail connects to node index 1
 * Explanation: There is a cycle in the linked list, where tail connects to the second node.
 *
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    
    public ListNode intersection(ListNode head){
        if(head == null){
            return null;
        }
        ListNode walker = head;
        ListNode runner = head;
        
        while(runner.next != null && runner.next.next != null){
            runner = runner.next.next;
            walker = walker.next;
            
            if(runner == walker){
                return walker;
            }
        }
        return null;
    }
    
    
    public ListNode detectCycle(ListNode head) {
        if(head == null){
            return null;
        }
        ListNode intersect = intersection(head);
        if(intersect == null){
            return null;
        }
        ListNode start = head;
        while(start != intersect){
            start = start.next;
            intersect = intersect.next;
        }
        return start;
    }
}