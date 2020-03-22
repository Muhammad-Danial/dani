#include <iostream>

using namespace std;

int main()
{
long double account_balance;
double interest_rate;
long double total_amount_due;
long double minimum_payment;
cout<<"enter your current account balance"<<endl;
cin>>account_balance;
if(account_balance<=1000)
{

    interest_rate = (1.5*(account_balance/100));
    total_amount_due = (account_balance+interest_rate);
    cout<<"total amount due is "<<total_amount_due<<"$"<<endl;
}
else if(account_balance>1000)
{
    long double interest_on_first_thousand;
    account_balance = account_balance-1000;
    interest_rate = account_balance/100;
    interest_on_first_thousand = (1.5*(1000/100));
    account_balance = account_balance+1000;
    total_amount_due = (account_balance+interest_rate+interest_on_first_thousand);
    cout<<"total amount due is "<<interest_on_first_thousand<<"$"<<endl;
}

if(total_amount_due>=10)
{
    minimum_payment = (10*(total_amount_due/100));
    if(minimum_payment>10)
    cout<<"minimum payment on your current balance will be "<<minimum_payment<<"$"<<endl;
    else
    cout<<"minimum payment on your current balance will be : 10$"<<endl;

}
else if(total_amount_due<10)
{
     minimum_payment = total_amount_due;
    cout<<"minimum payment on your current balance will be "<<minimum_payment<<"$"<<endl;
}

    return 0;

}
