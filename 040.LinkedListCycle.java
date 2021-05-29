/**
 * Input: head = [3,2,0,-4], pos = 1
 * Output: true
 * Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
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
    public boolean hasCycle(ListNode head) {
        if(head == null){
            return false;
        }
        ListNode run = head;
        ListNode walk = head;
        
        while(run.next != null && run.next.next != null){
            walk = walk.next;
            run = run.next.next;
            if(walk == run){
                return true;
            }
        }
        return false;
    }
}