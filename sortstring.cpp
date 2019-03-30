#include <iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string a[5];
    getline(cin,a[0]);
    getline(cin,a[1]);
    cin>>a[2]>>a[3]>>a[4];
    for(int i=0; i<4;++i)
    {
        string t;

        {
            t=a[i];
            a[i]=a[i+1];
            a[i+i]=t;
        }
    }

    return 0;
}
