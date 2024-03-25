#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
using namespace std;
void create();
void deposit();
void withdraw();
void balance_enquiry();

struct bank
{
    int acno;
    int pin;
    char name[50];
    float balance;
}account[100];

int i=0;
int lb_accno=1000,ub_accno=9999;

int main()
{
    int choice;
    restart:
    cout<<"\n\n\tATM Banking Program";
    cout<<endl<<"1. Create a New Account";
    cout<<endl<<"2. Cash Deposit";
    cout<<endl<<"3. Cash Withdraw";
    cout<<endl<<"4. Balance Enquiry";
    cout<<endl<<"5. Exit";
    cout<<endl<<"Enter the Choice : ";
    cin>>choice;

    switch (choice)
    {
        case 1:
            create();
            goto restart;

        case 2:
            deposit();
            goto restart;

        case 3:
            withdraw();
            goto restart;

        case 4:
            balance_enquiry();
            goto restart;

        case 5:
            exit(0);

        default:
            cout<<endl<<"Invalid Choice!"<<endl<<endl;
            Sleep(2000);
            goto restart;
    }
}

void create()
{
    cout<<endl<<"\tNEW ACCOUNT CREATION"<<endl;
    int j,pin1,pin2;
    std::srand(time(0));
    j=(rand()%(ub_accno-lb_accno+1))+lb_accno;
    cout<<"Your Account Number is : "<<j;
    account[i].acno=j;

    cout<<endl<<"Enter Your Name : ";
    cin>>account[i].name;
    loop:
    cout<<endl<<"Enter a 4 Digit Pin, to keep Your Account Secure : ";
    cin>>pin1;
    cout<<"Please Verify, by Entering it Again : ";
    cin>>pin2;
    if(pin1!=pin2)
    {
        cout<<"Pin Doesn't Match !";
        Sleep(2000);
        cout<<"\n";
        goto loop;
    }
    else
        account[i].pin=pin2;
    cout<<endl<<"The Minimum Deposit is Rs.500"<<endl;
    cout<<"Rs.500 has been Deposited !"<<endl;
    account[i].balance=500;
    i++;
    Sleep(4000);
}

void deposit()
{
    int acc,b,m=0,pin;
    float dep_amt;
    cout<<endl<<"\tCASH DEPOSIT"<<endl;
    cout<<"Enter Your Account Number : \t";
    cin>>acc;

    for(b=0;b<i;b++)
    {
        if(account[b].acno==acc)
            m=b;
    }

    if(account[m].acno==acc)
    {
        loop:
        cout<<endl<<"Enter Your 4 Digit Pin : ";
        cin>>pin;
        if(pin!=account[m].pin)
        {
            cout<<endl<<"Incorrect Pin !";
            Sleep(2000);
            cout<<"\n";
            goto loop;
        }
        cout<<endl<<"Account Number : "<<account[m].acno;
        cout<<endl<<"Name : "<<account[m].name;
        cout<<endl<<"Current Balance : "<<account[m].balance;
        loop2:
        cout<<endl<<endl<<"Enter the Amount to Deposit : ";
        cin>>dep_amt;
        if(dep_amt<0)
        {
            cout<<endl<<"Invalid Amount Entered !";
            goto loop2;
        }
        account[m].balance = account[m].balance + dep_amt;
        cout<<endl<<"Rs."<<dep_amt<<" Successfully Deposited !";
        cout<<endl<<endl<<"Account Balance After Deposit : "<<account[m].balance;
        Sleep(4000);
    }
    else
    {
        cout<<"The Account Number is Invalid ! ";
        Sleep(4000);
    }
}


void withdraw()
{
    int acc,b,m=0,pin;
    float wit_amt;
    cout<<endl<<"\tCASH WITHDRAWAL";
    cout<<endl<<"Enter Your Account Number :\t";
    cin>>acc;

    for(b=0;b<i;b++)
    {
        if(account[b].acno==acc)
            m=b;
    }

    if(account[m].acno==acc)
    {
        loop:
        cout<<endl<<"Enter Your 4 Digit Pin : ";
        cin>>pin;
        if(pin!=account[m].pin)
        {
            cout<<endl<<"Incorrect Pin !";
            Sleep(2000);
            cout<<"\n";
            goto loop;
        }
        cout<<endl<<"Account Number : "<<account[m].acno;
        cout<<endl<<"Name : "<<account[m].name;
        cout<<endl<<"Current Balance : "<<account[m].balance;
        loop2:
        cout<<endl<<endl<<"Enter the Amount to Withdraw : ";
        cin>>wit_amt;
        if(wit_amt<0)
        {
            cout<<endl<<"Invalid Amount Entered !";
            goto loop2;
        }
        if(account[m].balance<wit_amt+500)
        {
            cout<<"Minimum Account Balance Must Be Rs.500"<<endl;
            cout<<endl<<"Insufficient Funds! Transaction Declined";
            Sleep(4000);
        }
        else
        {
            account[m].balance= account[m].balance - wit_amt;
            cout<<endl<<"Rs."<<wit_amt<<"Successfully Withdrawn !";
            cout<<endl<<endl<<"Account Balance After Withdrawal : "<<account[m].balance;
        }
    }
    else
    {
        cout<<endl<<"The Account Number is Invalid !";
        Sleep(4000);
    }
}

void balance_enquiry()
{
    int acc,b,m=0,pin;
    cout<<endl<<"\tBALANCE ENQUIRY";
    cout<<endl<<"Enter Your Account Number :\t";
    cin>>acc;

    for(b=0;b<i;b++)
    {
        if(account[b].acno==acc)
            m=b;
    }
    if(account[m].acno==acc)
    {
        loop:
        cout<<endl<<"Enter Your 4 Digit Pin : ";
        cin>>pin;
        if(pin!=account[m].pin)
        {
            cout<<endl<<"Incorrect Pin !";
            Sleep(2000);
            cout<<"\n";
            goto loop;
        }
        cout<<endl<<"Account Number : "<<account[m].acno;
        cout<<endl<<"Name : "<<account[m].name;
        cout<<endl<<"Current Balance : "<<account[m].balance;
        Sleep(4000);
    }
    else
    {
        cout<<endl<<"The Account Number is Invalid !";
        Sleep(4000);
    }
}