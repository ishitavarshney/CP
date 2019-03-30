#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0&&n<=10000)
    {


    int p1[n],p2[n],lead[n];
    cin>>p1[0]>>p2[0];
    lead[0]=p1[0]-p2[0];
    for(int i=1;i<n;++i)
    {
        cin>>p1[i]>>p2[i];
        p1[i]=p1[i]+p1[i-1];
        p2[i]=p2[i]+p2[i-1];
        lead[i]=p1[i]-p2[i];
    }
    int k,l,w;
    if(lead[0]>0)
        {k=l=lead[0]; w=1;}
    else
        {k=l=(-lead[0]);w=2;}

    for(int i=1;i<n;++i)
    {
        if((p1[i]>=1&&p1[i]<=1000)&&(p2[i]>=1&&p2[i]<=1000))
        {if(lead[i]>0)
            l=lead[i];
        else
            l=(-lead[i]);
        if(l>=k)
        {
            k=l;
            if(lead[i]>0)
                w=1;
            else
                w=2;

        }}
    }
    cout<<w<<" "<<k;
    }
    return 0;
}
