#include<iostream>
#include<fstream>
using namespace std;

#include<string>

int main()
{

    ifstream fin;
    string c;
    fin.open("demo.dat");
    while(!fin.eof())
    {
    getline(fin,c);
    cout<<c<<endl;
    }
    
    return 0;
}