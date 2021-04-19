Node* findIntersection(Node* head1, Node* head2)
{
if(head1==NULL&&head2==NULL)
return head1;

Node* head=NULL;
Node* temp,*curr;
while(head1&&head2)
{
if(head1->data==head2->data)
{ 
    curr=new Node(head1->data);
if(head==NULL)
{
head=curr;
temp=curr;
}
else
{
temp->next=curr;
temp=curr;
}
head1=head1->next;
head2=head2->next;

}
else if(head1->data>head2->data)
head2=head2->next;
else
head1=head1->next;
}
return head;
}