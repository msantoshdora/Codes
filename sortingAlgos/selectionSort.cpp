#include<iostream>
using namespace std;

void selectionSort(int *a,int length)
{
 
 int temp,pos; 
for(int i=0;i<length-1;i++)
{
  temp=a[i];
  pos=-1;
  for(int j=i+1;j<length;j++)
  {
    if(a[j]<temp)
    {
      temp=a[j];
      pos = j;
    }
  }
  if(pos!=-1){
  temp=a[pos];
  a[pos]=a[i];
  a[i]=temp;
 }
}
  
}

int main()
{
 int length;
 cout<<"Enter the number of elements\n";
 cin>>length;
 int a[length]; 
 cout<<"Enter the elements\n";
 for(int i=0;i<length;i++)
  cin>>a[i];

 selectionSort(a,length);

for(int i=0;i<length;i++)
  cout<<a[i]<<"->";

cout<<"!!"<<endl;

 return 0;
}
