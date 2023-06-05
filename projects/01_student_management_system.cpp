#include<iostream>
using namespace std;
#include<iomanip>
#include<fstream>
#include<string>

// name,roll_no,course,class,contact
class Student_data
{
    private:

        string name;
        string roll_no;
        string course;
        string standard;
        string contact;

    public:

        Student_data()
        {
            cout<<"Enter Name : ";
            cin.ignore();
            getline(cin,name);

            cout<<endl<<"Enter Roll no. : ";
            getline(cin,roll_no);

            cout<<endl<<"Enter your course name :";
            getline(cin,course);

            cout<<endl<<"Enter your Standard : ";
            getline(cin,standard);

            cout<<endl<<"enter your contact no. : ";
            getline(cin,contact);
        }
        
        string names();
        string roll_nos();
        string courses();
        string standards();
        string contacts();

        
};
string Student_data:: names()
{
    return name;
}
string Student_data:: roll_nos()
{
    return roll_no;
}
string Student_data:: courses()
{
    return course;
}
string Student_data:: standards()
{
    return standard;
}
string Student_data:: contacts()
{
    return contact;
}


class Check_records
{
    public:
        string name;
        string roll_no;
        string course;
        string standard;
        string contact;
    Check_records(const Check_records* &getdata)
    {
        //cin>>name>>roll_no>>course>>standard>>contact;
        name=getdata->name;
        roll_no=getdata->roll_no;
    }

};


void enter_data()
{
    Student_data data;
    ofstream outfile;
    outfile.open("student.dat",ios::app);
    outfile<<setw(50)<<data.names()<<setw(18)<<data.roll_nos()<<setw(14)<<data.courses()<<setw(10)<<data.standards()<<setw(15)<<data.contacts()<<endl;

}


void show_data()
{
    string record;
    ifstream fin;
    fin.open("student.dat");
    cout<<endl<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<setw(50)<<"name"<<setw(18)<<"roll_no."<<setw(14)<<"course"<<setw(10)<<"standard"<<setw(15)<<"contact"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
    while(getline(fin,record))
    {
        cout<<record<<endl;
    }
    cout<<endl<<"--------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n\n\n\n";

}


void search_data()
{
    cout<<"search according to roll no. \n enter the roll no : ";
    string roll;
    

}


void update_data()
{

}


void delete_data()
{

}


int main()
{


    int value;
    while(true)
    {
        cout<<"Press 1 for enter data"<<endl;
        cout<<"Press 2 for show data"<<endl;
        cout<<"Press 3 for search data"<<endl;
        cout<<"Press 4 for update data"<<endl;
        cout<<"Press 5 for delete data"<<endl;
        cout<<"press 6 for exit"<<endl;
        cout<<"Press the valid key";
        cin>>value;

        switch(value)
        {
            case 1:
                enter_data();
                break;
            case 2:
                show_data();
                break;
            case 3:
                search_data();
                break;
            case 4:
                update_data();
                break;
            case 5:
                delete_data();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Please, Enter a valid key : ";
                break;
        }
    }
    return 0;
}