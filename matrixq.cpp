#include <iostream>

using namespace std;

int main()
{
    int r;
    cin>>r;
    int m[r][r];
    int c=r;
    for(int i=0;i<r;++i)//input matrix
    {
        for(int j=0;j<c;++j)
            cin>>m[i][j];
    }

    unsigned long int sum1=0,sum2=0;
    short s1[r*c],s2[r*c],a=0;
    for(int j=0;j<c;j++ )//calculation of bit string 1
    {
        if(j%2==0)
        {
            for(int i=0;i<r;i++)
            {

                s1[a]=(m[i][j]%2);

                a++;
            }
        }
        else
        {
            for(int i=r-1;i>=0;i--)
            {

                s1[a]=m[i][j]%2;

                a++;
            }
        }
    }

    a=0;
    for(int i=0;i<r;i++)//calculation of bit string 2
    {
       if(i%2==0)
       {
           for(int j=0;j<c;j++)
           {

               s2[a]=m[i][j]%2;

               ++a;

           }
       }
       else
       {
            for(int j=c-1;j>=0;j--)
            {

                s2[a]=m[i][j]%2;

                ++a;
            }
       }
    }

    for(int i=r*c-1,j=1;i>=0;--i,j*=2)//calculation of decimal value of bit strings
    {
        if(s1[i]==1)
            sum1+=j;
        if(s2[i]==1)
            sum2+=j;
    }
    cout<<sum1<<" "<<sum2;
    return 0;
}
