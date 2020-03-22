#include <iostream>

using namespace std;

int main()
{
    int a[100];
    for(int i=1; i<=100; i++){
        a[i]=i;
    }
    for(int i=1;i<=100;i++){
    int prime = i%3;
    int prime2 = i%2;
    int prime3 = i%5;
    int prime4 = i%7;
    if( prime!=0 && prime2!=0 && prime3!=0 && prime4!=0 ||i==2 ||i==3 ||i==7 ||i==5)
    cout<<"prime number between 1 and 100 are "<<i<<endl;
    }
    return 0;
}
