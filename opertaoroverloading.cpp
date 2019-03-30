#include <iostream>
#include<cstdlib>

using namespace std;
class num{
    int a,b;
public:
    void getdata(int i,int j)
    {
        a=i;b=j;
    }
    void showdata()
    {
        cout<<"a="<<a<<"b="<<b;
    }
    friend num operator*(num,num);
    num operator+(num);
    void operator++();
    void* operator new(size_t syz);
    void operator delete(void*);

};
num operator*(num x, num y)
{
    num p;
    p.a=x.a*y.a;
    p.b=x.b*y.b;
    return p;
}
num num::operator+(num x)
{
    num p;
    p.a=a+x.a;
    p.b=b+x.b;
    return p;
}
void num::operator++()
{
    ++a;
    ++b;
}
void num::operator delete(void *ptr)
{
    cout<<"\n over del\n";
    free(ptr);
}
void* num::operator new(size_t syz)
{
    cout<<"\nover new\n";
    void *p;
    p=malloc(syz);
    if(!p)
    {
        bad_alloc ba;
        throw ba;
    }
    return p;
}

int main()
{
    cout << "Hello world!" << endl;
    num n1,n2,r;
    n1.getdata(3,4);
    n2.getdata(5,6);
    r=n1*n2;
    r.showdata();
    r=n1+n2;
    r.showdata();
    ++n1;
    n1.showdata();
    num *ptr;
    try{
        ptr=new num;
        ptr->
        getdata(7,8);
        ptr->showdata();
        delete ptr;

    }
    catch(bad_alloc b){
    cout<<b.what()<<endl;
    }


    return 0;
}
