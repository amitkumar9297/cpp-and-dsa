/*
you have 15 rupees in your wallet.you want to chocolates
you go to shop and buy a chocolate

shopkeeper said you 
1 chocolates= 1 rupees
and 
3 chocolates rapees  buy a chocolates 
so  how many chocolates are you buy
*/

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int chocolates,rupees,wraper,reminder;
    cout<<"how many rupees you have to buy a chocolates";
    cin>>rupees;
    chocolates=rupees;
    wraper=chocolates;
    while(wraper>2)
    {
        reminder=wraper%3;
        wraper=wraper/3;

        chocolates+=wraper;
        wraper+=reminder;

    }

    cout<<"YOU BUY TOTAL  "<<chocolates<<"  CHOCOLATES"<<endl;
    cout<<"YOU have  "<<wraper<<"  REMAINING WRAPERS ";
}