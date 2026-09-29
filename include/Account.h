#include<iostream>
using namespace std;

class Account{
    string accountId;
    string name;
    double balance;
    public:
    Account(string accountId,string name,double balance){
        this->accountId = accountId;
        this->balance = balance;
        this->name = name;
    }

    Account(){

    }
    

};