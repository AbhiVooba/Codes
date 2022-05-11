#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int A,B,M,N=0;
        cin>>A>>B>>M;
        abs(A-B)>N;
        N=abs(A-B);
        if (N>M/2)
        {
            N=M-N;
        }
        
        cout<<N;
    }
    return 0;
}