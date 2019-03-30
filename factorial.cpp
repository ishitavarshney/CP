#include <iostream>

using namespace std;
int fac(int*,int,int);
int main()
{
    int t,a,d;
    cin>>t;
    if(t>=1&&t<=100)
    {
        int fact[t][200],c[t];
        for(int i=0;i<t;++i)
        {
            cin>>a;
            if(a>=1&&a<=100)
            {   int j=0;
                d=a;
                while(a)
                {
                    fact[i][j]=a%10;
                    ++j;
                    a=a/10;
                }
                c[i]=fac(fact[i],j,d);

            }

        }
        for(int i=0;i<t;++i)
        {
            for(int k=c[i]-1;k>=0;--k)
                cout<<fact[i][k];
            cout<<"\n";
        }

    }
    return 0;
}

int fac(int* a,int n,int d)
{
    int temp,x,k,j=0;
    for(int i=d-1;i>=2;--i)
    {
        temp=0;k=0;
        for( j=0;j<n;++j)
       {
           x=a[j]*i+temp;
           a[j]=x%10;
           temp=x/10;

       }
       while(temp)
       {
           a[j]=temp%10;
           temp=temp/10;
           ++k;++j;
       }
       n+=k;
    }
   return n;
}
