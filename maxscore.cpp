#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int sum[t];
    for(int i=0;i<t;++i)
    {
        int n;
        sum[i]=0;
        cin>>n;
        int a[n][n],e[n];
        for(int j=0;j<n;++j)
        {
            for(int k=0;k<n;++k)
                cin>>a[j][k];
        }
        for(int j=n-1;j>=0;--j)
        {
            e[j]=-1;
            for(int k=0;k<n;++k)
            {
                if(a[j][k]>=e[j])
                {
                    if(j!=n-1)
                    {
                        if(a[j][k]<e[j+1])
                        {
                            e[j]=a[j][k];
                        }

                    }
                    else
                    {
                        e[j]=a[j][k];
                    }
                }
            }
            if(j!=n-1)
            {
                if(e[j]==-1)
                    sum[i]=-1;
                else
                    sum[i]+=e[j];
            }
            else
                sum[i]+=e[j];
        }

    }
    for(int i=0;i<t;++i)
    {
        cout<<"\n"<<sum[i];
    }
    return 0;
}
