#include<iostream>
#include<stdexcept>
using namespace std;

class InsufficientBalanceException : public std::runtime_error {
public:
    explicit InsufficientBalanceException(const std::string& msg) : std::runtime_error(msg) {}
};

class InvalidAccountException : public std::runtime_error {
public:
    explicit InvalidAccountException(const std::string& msg) : std::runtime_error(msg) {}
};

class InvalidPaymentException : public std::runtime_error {
public:
    explicit InvalidPaymentException(const std::string& msg) : std::runtime_error(msg) {}
};

class Account{
    string accountId;
    string name;
    double balance;
    public:
        Account();
        Account(const string& id, const string& name, double initialbalance);

        string getId() const;
        string getName() const;
        double getBalance() const;

        void debit(double amount);
        void credit(double amount);
    
};