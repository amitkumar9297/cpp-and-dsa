#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1="abc";
    string s2="xyz";
    string s3="abc";
    cout<<s1.compare(s2);      // s1 compare with s2,,,,if output will be (-1) ,that means s1 is less than s2

    cout<<s2.compare(s1);      // s2 compare with s1,,,,if output will be (+1) ,that means s1 is greater than s2

    cout<<s3.compare(s1);      // s3 compare with s1,,,,if output will be (0) ,that means s1 equal to s2

}