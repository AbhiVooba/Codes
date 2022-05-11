#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(A>B+C||B>C+A||C>A+B)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}