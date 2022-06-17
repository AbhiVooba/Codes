#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int end)
{
    int x=mid-start+1;
    int y=end-mid;
    int p[x];
    int q[y];
       for(int i=0;i<x;i++)
      {
        p[i]=a[start+i];
      }
      for(int j=0;j<y;j++)
      {
         q[j]=a[mid+1+j];
      }
    int i=0;
    int j=0;
    int k=start;
    while(i<x && j<y)
    {
      if(p[i]<q[j])
      {
        a[k]=p[i];
         k++;
         i++;
      }  
      else 
      {
        a[k]=q[j];
        k++;
        j++;
      }
    }
    while(i<x)
    {
      a[k]=p[i];
      k++;
      i++;
    }
    while(j<y)
    {
      a[k]=q[j];
      k++;
      j++;
    }

}
void mergesort(int a[],int start,int end)
{
    //base case
    if(start<end)
    {
    int mid=(start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);\
    }
}
int main()
{
   
   int n,start,end;
   
   int a[1000];
   cout<<"Enter the size of array : ";
   cin>>n;
   cout<<"Enter the elements of the array : "<<endl;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   cout<<"Enter the Start Index : ";
   cin>>start;
   cout<<"Enter the End Index : ";
   cin>>end;
   mergesort(a,start,end-1);
   cout<<"The sorted Array through Merge sort method is :";
   cout<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
   return 0;
}