#include<iostream>
#define SQ(x) x*x
using namespace std;
int main()
{
	long px,py,pz,qx,qy,qz,dx,dy,dz,cx,cy,cz,r;
	int t;
	cin>>t;
	double op[t];
	for(int i=0;i<t;++i)
	{
		op[i]=0;
		cin>>px>>py>>pz>>qx>>qy>>qz>>dx>>dy>>dz>>cx>>cy>>cz>>r;
		long C=SQ(r)-SQ(qx)-SQ(px)-SQ(cx)-SQ(qy)-SQ(py)-SQ(cy)-SQ(qz)-SQ(pz)-SQ(cz)-2*(px*cx+py*cy+pz*cz)+2*(qx*px+qx*cx+qy*py+qy*cy+qz*pz+qz*cz);
		long A=SQ(dx)+SQ(dy)+SQ(dz);
		long B=2*dx*(qx-px-cx)+2*dy*(qy-py-cy)+2*dz*(qz-pz-cz);
		long D=SQ(B)-4*A*C;
		op[i]=(-B+D)/(2*A);
	}
	for(int i=0;i<t;++i)
	{
		cout<<endl<<op[i];
	}
	return 0;
}
