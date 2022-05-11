
#include <iostream>

using namespace std;

int main()
{
    int T,X;
    cin>>T;
    for(int i=0;i<T;i++)
    {
      cin>>X;
      if(X>30)
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