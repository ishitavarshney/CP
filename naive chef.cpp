#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	float op[t];
	for(int j=0;j<t;++j)
	{
		int A,B,N;
		op[j]=0;
		float ctra=0,ctrb=0;
		cin>>A>>B>>N;
		int num[N];
		for(int i=0;i<N;++i)
			{
				cin>>num[i];
				if(num[i]==A)
					ctra++;
				if(num[i]==B)
					ctrb++;
			}

		op[j]=(ctra/N)*(ctrb/N);

	} 
	for(int j=0;j<t;++j)
		cout<<"\n"<<op[j];
	return 0;
}