#include <iostream>

using namespace std;

int main()
{

   int t;
   cin>>t;
   int sum[t];
   for(int j=0;j<t;++j)
   {
       int n,k,p=0;
       sum[j]=0;
   cin>>n>>k;
   int a[n],b[n*k];
   for(int i=0;i<n;++i)
        cin>>a[i];
   for(int i=0;i<n*k;++i)
   {
       if(i%n==0)
            p=0;
       b[i]=a[p];
       ++p;

   }
   int q=0;
   for(int i=0;i<n*k;++i)
   {
       if(b[i]>=0)
            q+=b[i];
       else
       {
           if(q>=sum[j])
                sum[j]=q;
            q=0;
       }
   }
   if(sum[j]==0)
        sum[j]=q;
   }
   for(int i=0;i<t;++i)
        cout<<"\n"<<sum[i];
    return 0;
}
