#include<iostream>
using namespace std;
int main()
{
    int a[500][500];
    int row,col;
    cout<<"Enter the number of rows :\n";
    cin>>row;
    cout<<"Enter the number of cols :\n";
    cin>>col;
    cout<<"Enter the elements of "<<row<<"*"<<col<<" array :\n";
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            
            cin>>a[i][j];
        }
    }
    cout<<"The Resultant array is :\n";
    for(int i=0; i<row; i++)
        {
                for(int j=0; j<col; j++)
                {
                        cout<<" "<<a[i][j]<<" ";
                }
                cout<<"\n";
        }
    cout<<"The tranversal array is :\n";
    for (int j=0;j<col;j++)
    {
        if (j%2==0)
        {
         for (int i=0;i<row;i++)
        {
           cout<<a[i][j]<<" ";
        }
        }
        else
        { 
         for(int i=row-1;i>=0;i--)
          {
          cout<<a[i][j]<<" ";
          }
       }
    }
    return 0;
    
}
