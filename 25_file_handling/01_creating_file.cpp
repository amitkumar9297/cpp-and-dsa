#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("demo.dat");
    fout<<"welcome guys!";
    fout.close();
    return 0;
}