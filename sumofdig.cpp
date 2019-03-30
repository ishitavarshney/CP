#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,sum[t];
    if(t>=1&&t<=1000)
    {
        for(int i=0;i<t;++i)
        {
            cin>>n;
            sum[i]=0;
            while(n)
            {
                sum[i]+=(n%10);
                n/=10;
            }
        }
        for(int i=0;i<t;++i)
        {
            cout<<"\n"<<sum[i];
        }
    }
    return 0;
}
