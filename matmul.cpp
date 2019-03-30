#include <iostream>
#include<cstring>

using namespace std;
class password{
    char username[20];
    char pass[20];
public:
    void getdata()
    {
        cin>>username;
        cin>>pass;
    }
    void check()
    {
        int a=0;
        if((strlen(pass)<6))
        {
            throw pass;
        }
        for(int i=0;i<strlen(pass);++i)
        {
            if(pass[i]>='0'&&pass[i]<='9')
            {
                a=1;
                break;
            }
        }
        if(!a)
            throw pass;
    }
};

int main()
{
  password A;
  A.getdata();
  try{
    A.check();

  }
  catch(char*)
  {
      cout<<"\nthe password did not match the criteria!";
  }

    return 0;
}
