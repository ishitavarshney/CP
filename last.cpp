#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,sum[t];
    for(int i=0;i<t;++i)
    {
        sum[i]=0;
        int p=0;
        cin>>n;
        sum[i]+=n%10;
        while(n)
        {
            p=n%10;
            n=n/10;
        }
        sum[i]+=p;

    }
    for(int i=0;i<t;++i)
        cout<<"\n"<<sum[i];
    return 0;
}
