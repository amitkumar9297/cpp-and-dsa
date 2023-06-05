// let's see an another example of object and class

//we are initilize the object object and display through object

#include<bits/stdc++.h>
using namespace std;

//#include<string>

class student
{

    public:
    int roll_no;    // instance variable because these are the variable of a class
    string name;
    float cgpa;

    void getdata()    // method,,, function of classs known as method
    {
        cout<<"please enter student roll no"<<endl;
        cin>>roll_no;
        cout<<"please enter student name "<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"please enter student cgpa"<<endl;
        cin>>cgpa;
    }


    void display_data()     // method 
    {
        cout<<roll_no<<"\t"<<name<<"\t"<<cgpa<<endl;
    }


};

int32_t main()
{
    student s1;
    student s2;
    student s3;

    s1.getdata();
    s2.getdata();
    s3.getdata();

    
    s1.display_data();
    s2.display_data();
    s3.display_data();


    return 0;
}