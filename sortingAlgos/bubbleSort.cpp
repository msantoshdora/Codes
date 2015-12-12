#include<iostream>
using namespace std;

void bubbleSort(int *a,int length)
{
 int temp;
 for(int i=0;i<length;i++)
 {
  for(int j=0;j<length-1;j++)
  {
   if(a[j]<a[j+1])
   {
     temp=a[j+1];
     a[j+1]=a[j];
     a[j]=temp;
   }
  }
  
 }
}

int main()
{
  int length;
  cout<<"Total numbers od elements to sort\n";
  cin>>length;
  int a[length];

  for(int i=0;i<length;i++)
   cin>>a[i];

  bubbleSort(a,length);
 for(int i=0;i<length;i++)
  cout<<a[i]<<"->";

 cout<<"!!"<<endl;
 return 0;
}
