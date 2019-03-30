#include <iostream>

using namespace std;

int main()
{
    int n,k,ctr=0;
    cin>>n>>k;
    long t[n];
    for(int i=0;i<n;++i)
        cin>>t[i];
    for(int i=0;i<n;++i)
    {

        if(t[i]%k==0)
        {

            ++ctr;
        }
    }
    cout<<"\n"<<ctr;
    return 0;
}
