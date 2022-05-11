#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N,X,K;
        cin>>N>>X>>K;
       
        if (N*X>K)
        {
            cout<<"NO";
           
        }
            else if(N*X<=K)
            {
                cout<<"YES";
            }
    }
    return 0;
}