class MyLinkedList {
    
    class Node {
        int val;
        Node next;
        Node(int val){
            this.val = val;
        }
    }
    
    Node head;
    int size;

    /** Initialize your data structure here. */
    public MyLinkedList() {
        head = null;
        size = 0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    public int get(int index) {
        if(index >= size){
            return -1;
        }
        Node curr = head;
        for(int i=0;i<index;i++){
            curr = curr.next;
        }
        return curr.val;
        
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int val) {
        Node prev = head;
        head = new Node(val);
        head.next = prev;
        size++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {
        Node curr = head;
        size++;
        if(curr == null){
            curr = new Node(val);
            head = curr;
            return;
        }
        
        while(curr.next != null){
            curr = curr.next;
        }
        curr.next = new Node(val);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    public void addAtIndex(int index, int val) {
       if(index > size){
           return;
       }
       if(index == 0){
           addAtHead(val);
       } else {
           size++;
           Node curr = head;
           for(int i = 0; i < index - 1; i++){
               curr = curr.next;
           }
           Node nodeToInsert = new Node(val);
           nodeToInsert.next = curr.next;
           curr.next = nodeToInsert;
       }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        if(index >= size){return;}
        size--;
        if(size == 0){
            head = null;
            return;
        }
        
        Node curr = head;
        
        if(index == 0){
            head = head.next;
            return;
        }
        for(int i=0; i < index - 1; i++){
            curr = curr.next;
        }
        curr.next = curr.next.next;
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */