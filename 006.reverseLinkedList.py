# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head == None or head.next == None:
            return head
        
        currNode = head
        prevNode = None
        nextNode = None
        
        while currNode != None:
            nextNode = currNode.next
            currNode.next = prevNode
            prevNode= currNode
            currNode=nextNode
        
        return prevNode
