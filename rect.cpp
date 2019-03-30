#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,d,ans[t];
    for(int i=0;i<t;++i)
    {
        cin>>a>>b>>c>>d;
        if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
        {
            ans[i]=1;
        }
        else
            ans[i]=0;
    }
    for(int i=0;i<t;++i)
    {
        if(ans[i]==0)
            cout<<"\nNO";
        else
            cout<<"\nYES";
    }
    return 0;
}
