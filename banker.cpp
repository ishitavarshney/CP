#include<iostream>
using namespace std;
int main()
{
    int np,nr;
    cout<<"\nno. of processes:";
    cin>>np;
    cout<<"\nno. of types of resources:";
    cin>>nr;
    int total[nr];
    cout<<"no. of resources of each type:";
    for(int i=0;i<nr;++i)
    {
        cin>>total[i];
    }
    int allocation[np][nr],maxneed[np][nr],requirement[np][nr],available[nr],seq[np];
    bool flag[np]={};
    cout<<"\nallocated resources for:";
    for(int i=0;i<np;++i)
    {

        cout<<"\nP"<<i;
        for(int j=0;j<nr;++j)
           {
               cin>>allocation[i][j];
               }
    }
    int sum[nr]={};
    for(int i=0;i<nr;++i)
    {
        for(int j=0;j<np;++j)
        {
            sum[i]+=allocation[j][i];
        }
    }
    for(int i=0;i<nr;++i)
    {
        available[i]=total[i]-sum[i];
    }
     cout<<"\nmax need of resources for:";
    for(int i=0;i<np;++i)
    {
        cout<<"\nP"<<i;
        for(int j=0;j<nr;++j)
           {
               cin>>maxneed[i][j];
               requirement[i][j]=maxneed[i][j]-allocation[i][j];
           }


    }

    for(int i=0;i<np;++i)
        seq[i]=-1;
    for(int i=0;i<np;++i)
    {
        for(int j=0;j<np;++j)
        {
            if(flag[j]==0)
            {
                for(int k=0;k<nr;++k)
                {
                    if(requirement[j][k]<=available[k])
                    {
                        flag[j]=1;
                    }
                    else
                    {
                        flag[j]=0;
                        break;
                    }
                }
                if(flag[j]==1)
                {
                    for(int k=0;k<nr;++k)
                    {
                        available[k]+=allocation[j][k];
                    }
                    seq[i]=j;
                    break;
                }
            }

        }
    }
    cout<<"\nsafe sequence is:";
    for(int i=0;i<np;++i)
    {
        if(seq[i]==-1)
        {
            cout<<"safe seq doesnt exist!";
            break;
        }
        else
            cout<<"\t"<<seq[i];
    }

    return 0;
}
