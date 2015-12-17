// Problem:
// Find nth node from the end of a linked list
//
//Time Complexity: O(n)
//Space Complexity: O(1)
// The NthNode() function finds the result in only one scan.

#include<iostream>
#include<cstring>
#include<stdlib.h>   //For exit(0)
using namespace std;

struct linkedListNode{
 	int data;
 	struct linkedListNode *next;
 	struct linkedListNode *prev;
};

class linkedList{
 	struct linkedListNode *head;
 public:
         linkedList()   //Constructor
         {
          head = NULL;
         }
         struct linkedListNode* createNode();
         void insertAtBeg();
         void NthNode(int n);
         void Display();
         int loopOrnull();
         void reverse();
         void middle();
         void displayFromEnd1(struct linkedListNode*h);
         void displayFromEnd();
      //   void rearrange();
};

void linkedList:: displayFromEnd(){
 displayFromEnd1(head); 
}
void linkedList::displayFromEnd1(struct linkedListNode*h){
 if(h==NULL)
  return;

 displayFromEnd1(h->next);
 cout<<h->data<<" ";          
}
void linkedList::middle(){
               struct linkedListNode *f,*s;
              f=head->next->next;
             s=head;
           while(f!=NULL)
           {
            s=s->next;
            f=f->next;
            if(f==NULL)
              break;
           f=f->next;
           }
      cout<<"MIDDLE ELEMENT\n";
     cout<<s->data<<" "<<endl;
}
void linkedList::reverse(){
         struct linkedListNode*temp,*ptr;
         temp=NULL;
         ptr=head;
         while(ptr!=NULL){
         ptr=head->next;
         head->prev=ptr;
         head->next=temp;
         temp=head;
        if(ptr!=NULL)
          head=ptr;
         }
       Display();
}
int linkedList::loopOrnull(){
 struct linkedListNode *fast,*slow;
  if(head==NULL)
  {
   cout<<"No entries present\n";
   exit(0);
  }

 fast=head->next;
 if(fast==NULL)
 {
  return 1;
 }
 fast=fast->next;
 slow = head;
 while(fast!=slow && fast!=NULL && slow!=NULL)
 {
  fast=fast->next;
  if(fast==NULL)
   return 1;
  fast=fast->next;
  slow=slow->next;
 }
 if(fast==slow)
  return 0;
 
return 1;
}
void linkedList::Display()
{
 struct linkedListNode* ptr;
 ptr= head;
 if(ptr==NULL)
  {
    cout<<"NULL Value\n";
    return;
  }
 while(ptr!=NULL)
  {
   cout<<ptr->data<<" ";
   ptr=ptr->next;
  }
}

struct linkedListNode* linkedList:: createNode(){
 	struct linkedListNode* temp;
 	temp=(linkedListNode*)malloc(sizeof(struct linkedListNode));
 	if(!temp)
 	{
  	cout<<"NO SPACE AVAILABLE\n";
  	cout<<"TERMINATION INITIATED\n";
  	exit(0);
 	}
	cout<<"Enter the value\n";
	cin>>temp->data;
	temp->next=NULL;
	temp->prev = NULL;

return temp;
}


void linkedList:: insertAtBeg(){
 struct linkedListNode*temp,*ptr;
 ptr= head;
 temp=createNode();
 if(head==NULL){
  head=temp;
  return;
 }

  temp->next=head;
  head->prev=temp;
  head = temp;
}

void linkedList:: NthNode(int n){
 struct linkedListNode*first,*last;
  first=head;
  last = head;
 if(head == NULL)
  {
   cout<<"No entries\n";
   return;
  }
//Initial difference
  for(int i=0;i<n;i++)
   { 
    last=last->next;
    if(last==NULL)
     {
      cout<<"Number of elements is not enough to proceed the required result\n";
      return;
     }
   }

  while(last!=NULL)
  {
   first=first->next;
   last= last->next;
  }
 cout<<"Nth Node from end: "<<first->data;
 cout<<endl;
}

int main()
{
 string user;
 cout<<"***Welcome***\n";
 cout<<"Enter your name Sir\n";
 cin>>user;
 cout<<"fedora Welcomes "<<user<<"\n";
 linkedList ll;
 int choice;
 while(1){
  choice=4;
 cout<<"MENU-\n";
 cout<<"1. Insertion at beggining\n";
 cout<<"2.Nth node from end\n";
 cout<<"3.DISPLAY \n";
 cout<<"4.To exit\n";
 cout<<"5.Loop or NULL terminates\n";
 cout<<"6.Reverse\n";
 cout<<"7.Middle element\n";
 cout<<"8.Display from the end\n";
// cout<<"9.Reaarange as EVEN followed by Odd\n";
 cout<<"Enter your choice "<<user<<"\n";
 cin>>choice;

 cout<<endl;
 switch(choice){
 case 1:
        ll.insertAtBeg();
        break;
 case 2:
        int n;
       cout<<"Enter the position\n";
       cin>>n;

        ll.NthNode(n); 
        break;
 case 4: cout<<"See you soon "<<user<<endl;
        exit(0);
 case 3:ll.Display();
        break;
 case 5: if(ll.loopOrnull())
         {
          cout<<"NULL terminated\n";
         }
         else
          cout<<"Loop terminated\n";
        break;
 case 6:ll.reverse();
        break;
 case 7:ll.middle();
        break;
 case 8:ll.displayFromEnd();
        break;
 //case 9:ll.rearrange();
   //     break;
 default: cout<<"Oops!Wrong choice\n";
 }
}
 return 0;
}
