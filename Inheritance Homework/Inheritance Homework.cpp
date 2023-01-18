#include <iostream>

using namespace std;
class account
{
    private  double accountBalance;
    private int    accountNumber;
    private  string accountName;
public:

    public void setbal(double B)
    {
        accountBalance = B;
    };

    public double getbal()
    {
        return  accountBalance;
    }

    public void setNum(int N)
    {
        accountNumber = N;
    }

    public int getNum()
    {
        return  accountNumber;
    }

    public void setNm(String M)
    {
        accountName = M;
    }

    public string getNm()
    {
        return accountName;
    }



    account()
    {
        accountNumber = 0; accountName = "no name"; accountBalance = 0;
    }


    account(int N, string M, double B)
    {
        accountNumber = N; accountName = M; accountBalance = B;
    }


    void deposit(double amount)
    {
        accountBalance += amount;
    }


    void withdraw(double amount)
    {
        if (amount <= accountBalance)
            accountBalance -= amount;
        else
            cout << "balance not ength .." << endl;

    }
    virtual void displayAccountInfo()
    {
        cout << "account Number : " << accountNumber << endl;
        cout << "account Name :" << accountName << endl;
        cout << "accountBalance :" << accountBalance << endl;
    }

};

class  SavingsAccount : public account
{
private:
    double interestRate;


public:

    public setRate(double R)
    {
        interestRate = R;
    }

    public double getRate()
    {
        return  interestRate;
    }
    SavingsAccount(int N, string M, double B, double i) : account(N, M, B)
    {

        interestRate = i;

    }

    double calculateInterest()
    {
        double interest = accountBalance * interestRate;
        return interest;
    }

    void displayAccountInfo()
    {
        account::displayAccountInfo();
        cout << "interest Rate : " << interestRate << endl;
        cout << "Interest : " << calculateInterest() << endl;


    }

};



int main()
{

    SavingsAccount S = new SavingsAccount(95874, "ali", 14258.214, double 0.12);

    S.setNum(65478);
    S.setNm("saad");
    S.setbal(98745021);
    S.setRate(0.15);

    S.displayAccountInfo();

    S.deposit(9876);
    S.withdraw(2000);

    S.displayAccountInfo();



}