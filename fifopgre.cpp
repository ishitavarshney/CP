#include <iostream>

using namespace std;

int main()
{

    int np,fs,n;
    cout<<"total no. of pages in reference string:";
    cin>>np;
    cout<<"maximum page no:";
    cin>>n;
    cout<<"frame size:";
    cin>>fs;
    int pages[np],frame[fs],hits=0,faults=0,ctr[n]={};
    cout<<"page seq. (space separated):";
    for(int i=0;i<np;++i)
    {
        cin>>pages[i];
    }
    for(int i=0;i<fs;++i)
    {
        frame[i]=-1;
    }
    cout<<"\nPage replacement process:\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nPage no.\tframe";
    for(int i=0;i<fs;++i)  //fill the frame initially
    {
        frame[i]=pages[i];
        ctr[frame[i]-1]++;
        cout<<"\n"<<pages[i]<<"\t";
        for(int j=0;j<fs;++j)
        {
            cout<<frame[j]<<" ";

        }
    }
    for(int i=fs;i<np;++i)
    {
         cout<<"\n"<<pages[i-1]<<"\t";
         for(int j=0;j<fs;++j)
        {
            cout<<frame[j]<<" ";

        }
        int flag=0;
        for(int j=0;j<fs;++j)
        {
            if(frame[j]==pages[i])
            {
                ++hits;
                flag=1;

                break;
            }

        }
        if(flag==1)
            continue;
        int big=ctr[0],pos=0;
        for(int j=0;j<n;++j) //find page no with largest count
        {
            if(ctr[j]>big)
            {
                big=ctr[j];
                pos=j;
            }
        }
        for(int j=0;j<fs;++j)
        {
            if(frame[j]==pos+1)
            {
                frame[j]=pages[i];
                ctr[pos]=0;

            }
        }
        for(int j=0;j<fs;++j)
        {
            ++ctr[frame[j]-1];
        }


    }
    faults=np-hits;
    cout<<"\n"<<pages[np-1]<<"\t";
         for(int j=0;j<fs;++j)
        {
            cout<<frame[j]<<" ";

        }
    cout<<"\ntotal page hits="<<hits<<"\ntotal page faults="<<faults;
    return 0;
}
