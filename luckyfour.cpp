#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int p,a[t];
    for(int i=0;i<t;++i)
    {
        cin>>p;
        a[i]=0;
        while(p)
        {
            if(p%10==4)
                a[i]++;
            p=p/10;
        }
    }
    for(int i=0;i<t;++i)
        cout<<"\n"<<a[i];
    return 0;
}
