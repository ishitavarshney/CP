#include <iostream>

using namespace std;
void f1()
{
      int t;
    cin>>t;
    try{
        if(t==0)
            throw t;
    }
    catch(int c)
    {
        throw c;

    }
}
int main()
{
  try{
      f1();
  }
  catch(int)
  {
      cout<<"abc";
  }
    return 0;
}
