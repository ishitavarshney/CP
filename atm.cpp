#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    float y;
    cin>>x>>y;
    if(x>0&&x<=2000&&y>=0&&y<=2000)
    {
        if(x%5==0)
        {

          if(x<=(y-0.5))
          {

              y=y-x-0.5;

          }

        }
        cout<<std::fixed;
        cout<<std::setprecision(2)<<y;
    }
    return 0;
}
