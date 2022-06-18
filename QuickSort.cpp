#include<iostream>
using namespace std;
void swap(int a[],int i,int j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
int partition(int a[],int start,int end)
{
    int p=a[end];
    int i=start-1;
    for(int j=start;j<end;j++)
    {
        if(a[j]<p)
        {
        i++;
        swap(a,i,j);
        }
    }
    swap(a,i+1,end);
    return i+1;
}
void quicksort(int a[],int start,int end)
{
    if(start<end)
    {
        int p=partition(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);
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
   quicksort(a,start,end-1);
   cout<<"The sorted Array through Quick sort method is :";
   cout<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
   return 0;
}