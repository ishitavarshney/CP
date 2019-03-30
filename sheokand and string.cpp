#include<iostream>
#include<cstring>
using namespace std;
int big(int *a, int syz)
{
    int b=a[0];
    for(int i=0;i<syz;++i)
    {
        if(a[i]>b)
            b=a[i];

    }

    return b;
}



int main()
{
    int n;
    cin>>n;
    char s[n][11];
    for(int i=0;i<n;++i)
        cin>>s[i];
    int q;
    cin>>q;
    int op[q];//to store indices of o/p strings
    for(int i=0;i<q;++i)
    {
        int r;
        char p[11];
        cin>>r>>p;
        int a[r];//to store length of common prefix of each string with p
        for(int j=0;j<r;++j)
        {
            a[j]=0;
            for(int k=0;k<strlen(p);++k)
            {
                if(s[j][k]!=p[k])
                {
                    a[j]=k;
                    break;
                }
                else
                    ++a[j];
            }
        }
        int x=big(a,r);
        char* w;
        int h=0,pos=0;
        for(int j=0;j<r;++j)
        {
            if(a[j]==x)
            {
               if(h==0)
               {w=s[j];  h=1; pos=j;}
               else
                if((strcmp(s[j],w))<0)
               {
                   w=s[j];
                   pos=j;
               }

            }
        }

      op[i]=pos;


    }

    for(int i=0;i<q;++i)
    {
        int j=op[i];
        cout<<endl<<s[j];

    }


    return 0;
}


