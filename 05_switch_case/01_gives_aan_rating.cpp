#include<iostream>
using namespace std;

int main()
{
    int rating;
    cout<<"please give an rating out of 5"<<endl;
    cin>>rating;


    switch(rating)
    {
        case 1:
        cout<<"you gave the rating 1, thanks for your rating"<<endl;
        break;

        case 2:
        cout<<"you gave the rating 2, thanks for your rating"<<endl;
        break;

        case 3:
        cout<<"you gave the rating 3, thanks for your rating"<<endl;
        break;

        case 4:
        cout<<"you gave the rating 4, thanks for your rating"<<endl;
        break;

        case 5:
        cout<<"you gave the rating 5, thanks for your rating"<<endl;
        break;

        default:
        cout<<"please enter a valid rating"<<endl;
    }

    return 0;
}