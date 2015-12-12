// Given an string literal find the first repeating character

#include<iostream>
#include<cstring>

using namespace std;

char firstRepeat(string &str){
       int ar[256];   //256 ASCII characters are available
       for(int i=0;i<256;i++)
            ar[i]=0;
       for(int i=0;i<str.length();i++)
       {
          if(ar[str[i]]==1)
            return str[i];
          else{
            ar[str[i]]++;
          }
         if(i==str.length()-1)
          cout<<"No character is repeated\n";
       }
    return -1;
}

int main()
{
  string str;
  cout<<"Enter the string\n";
  cin>>str;
  
  cout<<"The first repeated character is "<<firstRepeat(str)<<endl;   //-1 for none
 return 0;
}
