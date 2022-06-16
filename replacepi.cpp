#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void replacepi(char c[],int size)
{
    int l=strlen(c);
    //base case
    if(l==0||l==1)
    {
        return ;
    }
    else
    {
      if(c[0]=='p'&&c[1]=='i')
      {
        c[0]='3';
        c[1]='.';
        for(int i=0;i<l;i++)
        {
            c[l+2-i]=c[l-i];
        }
            c[2]='1';
            c[3]='4';
      }
     
    }
    replacepi(c+1,l-1);
}
int main()
{
    char c[100];
    cin.get(c,100);
    replacepi(c,100);
     cout<<c<<endl;
    return 0;
}