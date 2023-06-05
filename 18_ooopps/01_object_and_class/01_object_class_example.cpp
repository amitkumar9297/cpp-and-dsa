#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    // variable of class known as insstance variable
    float marks;        // instance variable
    string name;
    int roll_no;
};
int32_t main()
{
    student s1;     // object of classs student 
    student s2;
    student s3;

    s1.roll_no=620;     // initilize the value to the object;
    s1.name="Amit";
    s1.marks=8.09;

    s2.roll_no=672;
    s2.name="jatin";
    s2.marks=9.09;

    s3.roll_no=604;
    s3.name="Jaskeert";
    s3.marks=8.63;

    int *p=&s3.roll_no;
    *p=602;

    cout<<s1.roll_no<<"\t"<<s1.name<<"\t\t"<<s1.marks<<endl;
    cout<<s2.roll_no<<"\t"<<s2.name<<"\t\t"<<s2.marks<<endl;
    cout<<s3.roll_no<<"\t"<<s3.name<<"\t"<<s3.marks<<endl;
    
    cout<<&s3.roll_no;
    
    return 0;
}