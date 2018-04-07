
#include "stdafx.h"
#include <fstream>
#include <vector>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

//************************************************************************************
//Data consists of three items, an ID value, an amount of money for the account balance 
//and a percent for the interest rate.

class BankAccount
{
public:
    BankAccount(double balance, double rate);
    //Initializes balance and rate according to arguments.

    BankAccount(int dollars, int cents, double rate);
    //Initializes the account balance to $dollars.cents. For a negative balance both
    //dollars and cents must be negative. Initializes the interest rate to rate percent.

    BankAccount(int dollars, double rate);
    //Initializes the account balance to $dollars.00 and
    //initializes the interest rate to rate percent.

    BankAccount(const BankAccount& ba);
    //Copy constructor

    BankAccount( );
    //Initializes the account balance to $0.00 and the interest rate to 0.0%.

    void output( );
    double getBalance( );
    int getDollars( );
    int getCents( );
    double getRate( );//Returns interest rate as a percent.
	int getID( );
	void setID ( int newID);
   
    void setBalance(double balance);
    void setBalance(int dollars, int cents);
    //checks that arguments are both nonnegative or both nonpositive

    void setRate(double newRate);
    //If newRate is nonnegative, it becomes the new rate. Otherwise abort program.
    


	// overload operators 
	 const bool operator > ( const BankAccount acc )const;
	 const bool operator < ( const BankAccount acc )const;
	 const bool operator== ( const BankAccount acc ) const;
     BankAccount operator= (   BankAccount ba ); 
     friend ostream& operator<< (ostream& out, BankAccount BA);
 
 private:
    void nextID ( );
    //A negative amount is represented as negative dollars and negative cents.
    //For example, negative $4.50 sets accountDollars to -4 and accountCents to -50.
    static int newID;
	int ID;
	int accountDollars; //of balance
    int accountCents; //of balance
    double rate;//as a percent

    int dollarsPart(double amount);
    int centsPart(double amount);
    int round(double number);

};  // end of class BankAccount 

  int BankAccount::newID=123456;


BankAccount::BankAccount(double balance, double rate)
 : accountDollars(dollarsPart(balance)), accountCents(centsPart(balance))
{
    setRate(rate);
	nextID ( );
}

BankAccount::BankAccount(int dollars, int cents, double rate)
{
    setBalance(dollars, cents);
    setRate(rate);
	nextID ( );
}

BankAccount::BankAccount(int dollars, double rate)
                              : accountDollars(dollars), accountCents(0)
{
    setRate(rate);
	nextID ( );
}
  
  BankAccount:: BankAccount(const BankAccount& ba)
  {
	 setRate (ba.rate) ;
	 setBalance(ba.accountDollars, ba.accountCents);
	 setID(ba.ID);
  }
    //Copy constructor

BankAccount::BankAccount( ): accountDollars(0), accountCents(0), rate(0.0) 
{/*Body intentionally empty.*/
  nextID ( );
 }

  
//Uses iostream and cstdlib:
void BankAccount::output( )
{
    int absDollars = abs(accountDollars);
    int absCents = abs(accountCents);

	cout << "\nID: "<< ID<< "  Account balance: $";
    if (accountDollars < 0)
        cout << "-";
    cout << absDollars;
    if (absCents >= 10)
        cout << "." << absCents ;
    else
        cout << "." << '0' << absCents ;

    cout << "\tRate: " << rate << "%\n";
}

double BankAccount::getBalance( )
{
    return (accountDollars + accountCents*0.01);
}

int BankAccount::getDollars( )
{
    return accountDollars;
}

int BankAccount::getCents( )
{
    return accountCents;
}

double BankAccount::getRate( )
{
    return rate;
}
int BankAccount::getID( )
{
    return ID;
}

void BankAccount::setID ( int newID)
{
   ID = newID;
}


void BankAccount::setBalance(double balance)
{
    accountDollars = dollarsPart(balance);
    accountCents = centsPart(balance);
}

//Uses cstdlib:
void BankAccount::setBalance(int dollars, int cents)
{
    if ((dollars < 0 && cents > 0) || (dollars > 0 && cents < 0))
    {
        cout << "Inconsistent account data.\n";
        exit(1);
    }
    accountDollars = dollars;
    accountCents = cents;
}

//Uses cstdlib:
void BankAccount::setRate(double newRate)
{
    if (newRate >= 0.0)
        rate = newRate;
    else
    {
        cout << "Cannot have a negative interest rate.\n";
        exit(1);
    }
}

int BankAccount::dollarsPart(double amount)
{
    return static_cast<int>(amount);
}
 
//Uses cmath:
int BankAccount::centsPart(double amount)
{
    double doubleCents = amount*100;
    int intCents = (round(fabs(doubleCents)))%100;//% can misbehave on negatives
    if (amount < 0)
        intCents = -intCents;
    return intCents;
}

//Uses cmath:
int BankAccount::round(double number)
{
    return static_cast<int>(floor(number + 0.5));
}

   void BankAccount::nextID ( )
    {
     ID = newID++;
    }

  
 BankAccount  BankAccount::operator = ( BankAccount ba)
	{   // use copy constructor
		setRate (ba.getRate( ) );
        setBalance(ba.getBalance() );
        setID (ba.getID() );
		return *this;	    
	};
const bool BankAccount::operator == ( const BankAccount acc ) const
	{
	    if (ID == acc.ID)
			return true;
		else
			return false;
	};


   // Operload operators < and assignment
 const bool BankAccount::operator > ( const BankAccount acc )const
	{
	    if (ID > acc.ID)
			return true;
		else
			return false;
	};
 const bool BankAccount::operator < ( const BankAccount acc )const
	{
	    if (ID < acc.ID)
			return true;
		else
			return false;
	};

 ostream&  operator<<(ostream& out,BankAccount BA)
 {  
    BA.output();
    return out;
 } 