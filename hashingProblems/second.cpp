#include<iostream>
#include<cstring>
using namespace std;

struct node
{
 int val;
 struct node* next;
};

int main()
{
 struct node* ar[20];
 int arr[20];
 for(int i=0;i<20;i++)
   arr[i]=0;
 int a;
 cout<<"Enter 20 numbers\n";
 for(int i=0;i<20;i++){
   cin>>a;
   struct node*t,*v;
   v->val=a;
   v->next=NULL;
   t=ar[a%10];
   if(arr[a%10]!=0){
   while(t->next!=NULL)
   {
     t=t->next;
   }
   }
   else
     { arr[a%10]++;
      t->val=-1;
      t->next=NULL;
     }

   t->next=v;
 
}
 int element;
 cout<<"Enter the element you are searching\n";
 cin>>element;

 struct node* temp;
 temp=ar[element%10];
 if(arr[element%10]!=0){
 while(temp->next!=NULL)
 {
   temp=temp->next;
   if(temp->val==element)
   {  cout<<"Present\n";
      break;
   }
 }
 cout<<"Element not present\n";
}
else
  cout<<"Element not present\n";
 
 return 0;
}
