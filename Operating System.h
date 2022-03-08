#ifndef OPERATING_SYSTEM_H_INCLUDED
#define OPERATING_SYSTEM_H_INCLUDED


#include "Members Account.h"
#define Size 1000
#define SIZE 5

class OperatingSystem {

protected:

    MembersAccount Database[Size];
    int top;

public:

    OperatingSystem ();
    ~OperatingSystem ();

    ifstream SMp;   // For Sign up or Sign in
    ifstream MMp;   // For Main Menu
    ifstream Op;    // For Option
    ifstream SSp;   // For Screen Size
    ifstream SCp;   // For Screen Color
    ifstream TYp;   // For Thank you
    ifstream SUP;   // For Sign Up Page
    ifstream SIP;   // For Sign In Page
    ifstream Ex;    // For Extra Page
    ifstream DE;    // For Delete
    ifstream IV;    // For Invalid User
    ifstream ED;    // For Editing Profile
    ifstream IFO;   // For Info Page
    ifstream GS;    // For Games page
    ifstream MT;    // For Math Tricks
    ifstream Sum;   // For Summation
    ifstream Sub;   // For Subtraction
    ifstream L;     // For Line bar
    ifstream GO;    // For Game Over
    ifstream HFC;   // For Headers File Code
    ifstream SFC;   // For Sources File Code
    ifstream CDM;   // For Codes Menu

    string smp;
    string mmp;
    string op;
    string ssp;
    string scp;
    string typ;
    string sup;
    string sip;
    string ex;
    string de;
    string iv;
    string ed;
    string ifo;
    string gs;
    string mt;
    string sum;
    string sub;
    string l;
    string go;
    string hfc;
    string sfc;
    string cdm;

    void SignMemu ();
    void SignInMenu();
    void SignUpMenu();
    void ThankYou();
    void Delete();
    void Invalid();
    void Editing();
    void Info();
    void LineBar();
    void GameOver();
    void Headers();
    void Sources();


    int Searching (string s);
    void Account ();
    void Delete_Account ();
    void Edit_Members_Profile ();
    void Information_Of_A_Member ();
    void Database_Operator ();
	void Checking();
	void MainMenu();
	void Option();
	void Extra();
	void ScreenSize();
	void ScreenColor();
	void Admin();
	void Codes();


	void Games();

    void MathTricks();

    void Summation();
    void SimpleSum();
    void MediumSum();
    void ComplexSum();

    void Subtraction();
    void SimpleSub();
    void MediumSub();
    void ComplexSub();



};



#endif // OPERATING_SYSTEM_H_INCLUDED
