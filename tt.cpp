#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int p1,p2,k;
    bool sol[t];
    for(int i=0; i<t;++i)
    {
        cin>>p1>>p2>>k;
        long int p=p1+p2;
        sol[i]=(p/k)%2;
    }
     for(int i=0; i<t;++i)
     {
         if(sol[i]==0)
            cout<<"\nCHEF";
         else
            cout<<"\nCOOK";
     }
    return 0;
}
