#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char top[4],bottom[4]; int ans[t];
	for(int i=0;i<t;++i)
	{
		cin>>top>>bottom;
		int b=0,o=0;
		for(int j=0;j<3;++j)
        {
                if(((top[i]=='b'||top[i]=='o')&&(bottom[i]!='b'&&bottom[i]!='o'))||((top[i]!='b'&&top[i]!='o')&&(bottom[i]=='b'||bottom[i]=='o')))
               {
                   if(top[i]=='b'||bottom[i]=='b')
                        ++b;
                    if(top[i]=='o'||bottom[i]=='o')
                        ++o;

               }


        }
        if(b==2&&o==1)
            ans[i]=1;
        else
            ans[i]=0;
	}
	for(int i=0;i<t;++i)
	{
		if(ans[i])
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
	return 0;
}
