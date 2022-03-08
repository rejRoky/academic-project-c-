#ifndef MEMBERS_ACCOUNT_H_INCLUDED
#define MEMBERS_ACCOUNT_H_INCLUDED


#include "Graphics.h"

class MembersAccount {

protected:

    string First_Name; // Member's First Name
    string Last_Name;  // Member's Last Name
    string UID;        // Member's User ID Number
    string DOB;        // Member's Date of birth
    string Ads;        // Member's Address

public:

	MembersAccount (){}
	~MembersAccount (){}

    void Set_First_Name (string &x);
    string Get_First_Name ();

    void Set_Last_Name (string &x);
    string Get_Last_Name ();

    void Set_UserID (string &x);
    string Get_UserID ();

    void Set_DOB (string &x);
    string Get_DOB ();

    void Set_Ads (string &x);
    string Get_Ads ();

    void Display ();
};


#endif // MEMBERS_ACCOUNT_H_INCLUDED
