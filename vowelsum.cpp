#include <iostream>
#include<string>

using namespace std;

int main()
{
   int t;
   cin>>t;
   long sum[t]={};
   for(int p=0;p<t;++p){
    string a;
    cin>>a;
    int l=a.length();
    bool vow[l];
    for(int i=0;i<l;++i)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            vow[i]=1;
        else
            vow[i]=0;
    }


    for(int i=0;i<l;++i)
    {
        for(int j=i;j<l;++j)
        {
            for(int k=i;k<=j;++k)
            {
                sum[p]+=vow[k];


            }

        }
    }
   }
   for(int p=0;p<t;++p)
    cout<<"\n"<<sum[p];
    return 0;
}
