#include <iostream>

using namespace std;

int main()
{
    int t,p;
    cin>>t;
    int a[t];
    for(int i=0;i<t;++i)
    {
        cin>>p;
        a[i]=0;
        for(int j=2048;j>=1;j=j/2)
        {
            while(p>=j)
            {
                p=p-j;
                ++a[i];
            }
        }
    }
    for(int i=0;i<t;++i)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}

