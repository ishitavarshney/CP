#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout("notes.dat",ios::binary);
    fout<<"def";
    fout.close();
    ifstream fin("notes.dat",ios::binary);
    char a;
    fin>>a;
    cout<<a;
    return 0;
}
