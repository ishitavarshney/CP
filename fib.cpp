#include <iostream>

using namespace std;

int fib(int n, int *arr)
{
    if(n==0)
        return 0;
    if (n==1)
        return 1;
    int ans1,ans2;
    if(arr[n-1]==-1){
        ans1=fib(n-1,arr);
        }

    else
        ans1=arr[n-1];
    if(arr[n-2]==-1)
       {
          ans2=fib(n-2,arr);
       }
    else
        ans2=arr[n-2];
    arr[n]=ans1+ans2;
    return arr[n];
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        a[i]=-1;
    cout<<fib(n,a);
    return 0;
}
