#include<iostream>
using namespace std;

struct linkedListNode{
  int data;
  struct linkedListNode * next;
};
class linkedList{
 struct linkedListNode *head,*chead;
 public:
        linkedList()
        {
           head=NULL;
           chead=NULL;
        }
   
};


int main(void)
{
 linkedList sl;
 return 0;
}
