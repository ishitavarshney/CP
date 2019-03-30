#include<iostream>
#include<math.h>
using namespace std;
int size;

int *dec2bin(int a)
{
	int z[60],i=0;
	while(a)
	{
		z[i]=a%2;
		a=a/2;
		++i;
	}
	size=i;
	return z;
}

int ctr1(int* a, int syz)
{
	int x=0;
	for(int i=0;i<syz;++i)
	{
		if(a[i]==1)
			++x;

	}
	return x;

}

int main()
{
	int t;
	cin>>t;
	int op[t];
	for(int i=0;i<t;++i)
	{
		int a,b;
		cin>>a>>b;
		int *A;
		A=dec2bin(a);
		int p=ctr1(A,size);
		if(a!=0&&b<2)
			op[i]=-1;
        else{
             b=b-1;
            int *B;
            B=dec2bin(b);
            int ctr=1;
            while(ctr1(B,size)!=p)
			{
				++ctr;
				--b;
				B=dec2bin(b);


			}
			op[i]=ctr;
		}




	}
	for(int i=0;i<t;++i)
            cout<<endl<<op[i];
	return 0;

}
