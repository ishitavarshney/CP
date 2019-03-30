#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t>=1&&t<=1000)
    {
        int n,a[t];
      for(int i=0;i<t;++i)
      {
          cin>>n;
          if(n>=2&&n<=100000000)
          a[i]=(n/2)+1;
      }
      for(int i=0;i<t;++i)
      {
          cout<<"\n"<<a[i];
      }

    }
    return 0;
}
