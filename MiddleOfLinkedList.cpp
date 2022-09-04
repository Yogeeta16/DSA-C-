#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) {
    // Write your code here
    int len =getLength(head);
    int ans = (len/2);
    Node *temp=head;
    int count=0;
    while(cnt<ans){
        temp = temp ->next;
        count ++;
    }
    return temp;
}
int getLength(Node* head)
{
    int length =0;
    while(head !=NULL)
    {
        length ++;
        head=head->next;
    }
    return length;
}
