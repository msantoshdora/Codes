#include<iostream>
using namespace std;

void insertionSort(int *a,int length)
{
  int temp,k;
 for(int i=0;i<length;i++)
 {
  temp = a[i];
  k=i;
  while(a[k]<a[k-1] && k>0)
  {
   
    a[k]=a[k-1];
    a[k-1]=temp;
    k--;
  }
 }
}
int main()
{
 int length;
 cout<<"Enter the number of elements\n";
 cin>>length;
 int a[length];
 for(int i=0;i<length;i++)
 {
  cin>>a[i];
 }

 insertionSort(a,length);

  for(int i=0;i<length;i++)
  {
   cout<<a[i]<<"->";
  }
  cout<<"!!"<<endl;
 return 0;
}

