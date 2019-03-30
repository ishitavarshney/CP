#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long bit[t],nib[t],byte[t];
    for(int i=0;i<t;++i)
    {
        int n,p;
        cin>>n;
        bit[i]=1;
        nib[i]=0;
        byte[i]=0;
        if(n>26)
        {
             p=n/26;
            bit[i]=pow(2,p);
        }
       if(n%26==0)
       {
           p=n/26;
           p-=1;
           byte[i]=pow(2,p);
           bit[i]=nib[i]=0;
       }
        else {
                n=n%26;
        if(n>2)
        {
            n-=2;
            nib[i]=bit[i];
            bit[i]=0;
        }
        if(n>8)
        {
            n-=8;
            byte[i]=nib[i];
            nib[i]=0;
        } }



    }
    for(int i=0;i<t;++i)
    {
        cout<<"\n"<<bit[i]<<" "<<nib[i]<<" "<<byte[i];
    }
    return 0;
}
