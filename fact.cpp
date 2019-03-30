#include <iostream>

using namespace std;

int main()
{
    int t,p;
    cin>>t;
    long n[t],z[t];
    for(int i=0;i<t;++i)
    {
        z[i]=0;
        cin>>n[i];
        if(n[i]>=1&&n[i]<=1000000000)
        {

          for(int j=5;j<=n[i];j=j*5)
          {
              p=n[i]/j;
              z[i]+=p;
          }
        }
    }
    for(int i=0;i<t;++i)
    {
        cout<<"\n"<<z[i];
    }
    return 0;
}
