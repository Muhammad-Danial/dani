#include <iostream>

using namespace std;

int main()
{
int cost;
double rate;
int hour;
int minutes;
char days;
char days2;
int duration;
cout<<"enter  the hour at which you  started the call "<<endl;
cin>>hour;
cout<<"also enter the minutes at which you started the call"<<endl;
cin>>minutes;
cout<<"you started call at "<<hour<<" : " <<minutes<<endl;
cout<<"also enter the day on which you call "<<endl;
cin>>days;
cin>>days2;
cout<<"also enter the duration 0f the call"<<endl;
cin>>duration;

if((hour>=8 && hour<=18)||(days=='m' && days2=='o') || (days=='t' && days2=='u') || (days=='t' && days2=='h') || (days=='f' && days2=='r')|| (days=='w' && days2=='e')){
rate=0.40;
cost =rate*duration;
cout<<"cost of your call is "<<cost<<" $"<<endl;
}
else if((hour>=1 && hour<8 && hour>18 && hour<=24) ||(days=='m' && days2=='o') || (days=='t' && days2=='u') || (days=='t' && days2=='h') || (days=='f' && days2=='r')|| (days=='w' && days2=='e')){
    rate = 0.25;
    cost = rate*duration;
    cout<<"cost of your call is "<<cost<<" $"<<endl;
}
else if((days=='s' && days2=='u') || (days=='s'&& days2=='a')){
    rate = 0.15;
    cost =rate*duration;
cout<<"cost of your call is "<<cost<<" $"<<endl;
}
else
cout<<"error something went wrong"<<endl;
    return 0;
}
