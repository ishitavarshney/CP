#include <iostream>

using namespace std;
class A{
public:
    static int a;
    static void dis()
    {

        cout<<a;
    }
    void ab()
    {

        cin>>a;
    }
};
int A::a;

int main()
{
    cout << "Hello world!" <<'\a'<<endl;
    A o,b;
    o.ab();
    A::dis();
    b.ab();
    A::dis();
    return 0;
}
