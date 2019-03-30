#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    if(t>=1&&t<=300000)
    {
        int a,b,n,p,q,ans[t];
        for(int i=0;i<t;++i)
        {
            cin>>a>>b>>n;
            ans[i]=0;
            int j=1,k=1;
            int supertab,l=0;
            while(l<n)
            {
                p=a*j;
                q=b*k;
                if(p<q)
                {
                    supertab=p;
                    ++j;
                    ++l;
                }
                else if(q<p)
                {
                    supertab=q;
                    ++k;
                    ++l;
                }
                else if (q==p)
                {
                    supertab=p;
                    ++k;
                    ++j;
                    ++l;
                }
            }
            ans[i]=supertab;
        }
        for(int i=0;i<t;++i)
        {
            cout<<"\n"<<ans[i];
        }
    }
    return 0;
}
