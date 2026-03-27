#include <iostream>
using namespace std;

class Account
{
private:
    int acc_no;
    float balance;

public:
    int get_acc_no()
    {
        return acc_no;
    }
    void set_acc_no(int acc_no)
    {
        this->acc_no = acc_no;
    }
    int get_balance()
    {
        return balance;
    }
    void set_balance(int balance)
    {
        this->balance = balance;
    }
    void displayAccount()
    {
        cout << "Account No  ::  " << get_acc_no() << endl;
        cout << "Balance  ::  " << get_balance() << endl;
    }
    Account()
    {
        cout << "Account ban gaya" << endl;
        acc_no = 1;
        balance = 0;
    };
    Account(int, float);
};

class Saving_Account : public Account
{
private:
    float intrest;

public:
    int get_intrest() { return intrest; }
    void set_intrest(int i) { intrest = i; }
    void calculateIntrest()
    {
        cout << "Your intrest rate is  ::  " << get_intrest() << " %" << endl;
        cout << "Your intrest is  ::  " << (get_intrest() / 100) * get_balance() << "  per month" << endl;
    }
    Saving_Account() : Account()
    {
        cout << "You have created a savings account " << endl;
        intrest = 0;
    }
    Saving_Account(int a, float b, float i) : Account(a, b)
    {
        cout << "You have created a savings account " << endl;
        intrest = i;
    }
    void S_displayaccount()
    {
        displayAccount();
        cout << "Intrest  ::  " << get_intrest() << endl;
    }
};

Account::Account(int a, float b)
{
    acc_no = a;
    balance = b;
};

int main()
{
    Account A;
    cout << endl;
    A.displayAccount();
    cout << endl;
    cout << endl;
    Account B(1000, 200);
    cout << endl;
    B.displayAccount();
    cout << endl;
    cout << endl;
    Saving_Account S;
    cout << endl;
    S.displayAccount();
    cout << endl;
    cout << endl;
    Saving_Account S1(111, 222, 3);
    cout << endl;
    S1.S_displayaccount();

    return 0;
}