#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
void RLL(LinkedListNode<int> *&head,LinkedListNode<int> *curr,LinkedListNode<int> *prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode<int> *pointeraage = curr->next;
    RLL(head,pointeraage,curr);
    curr->next=prev;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *prev=NULL;
    RLL(head,curr,prev);
    return head;
}
