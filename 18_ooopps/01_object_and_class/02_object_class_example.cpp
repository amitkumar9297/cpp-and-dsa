// let's see an another example of object and class

//we are initilize the object object and display through object

#include<bits/stdc++.h>
using namespace std;

class student
{

    public:
    int roll_no;    // instance variable because these are the variable of a class
    string name;
    float cgpa;

    void setdata(int i,string n,float c)    // method,,, function of classs known as method
    {
        roll_no=i;
        name=n;
        cgpa=c;
    }


    void display_data()     // method 
    {
        cout<<roll_no<<"\t"<<name<<"\t"<<cgpa<<endl;
    }


};

int32_t main()
{
    student s604,s620,s671;

    s604.setdata(604,"jaskeert",8.65);
    s620.setdata(620,"amit",8.09);
    s671.setdata(671,"kavita",9.09);

    s604.display_data();
    s620.display_data();
    s671.display_data();



    return 0;
}