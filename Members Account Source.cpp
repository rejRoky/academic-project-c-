
#include "Members Account.h"

void MembersAccount :: Set_First_Name (string &x)
{
    First_Name = x;
}
string MembersAccount :: Get_First_Name ()
{
    return First_Name;
}


void MembersAccount :: Set_Last_Name (string &x)
{
    Last_Name = x;
}
string MembersAccount :: Get_Last_Name ()
{
    return Last_Name;
}


void MembersAccount :: Set_UserID (string &x)
{
    UID = x;
}
string MembersAccount :: Get_UserID ()
{
    return UID;
}


void MembersAccount :: Set_DOB (string &x)
{
    DOB = x;
}
string MembersAccount :: Get_DOB ()
{
    return DOB;
}


void MembersAccount :: Set_Ads (string &x)
{
    Ads = x;
}
string MembersAccount :: Get_Ads ()
{
    return Ads;
}


void MembersAccount :: Display ()
{

    cout << "\n\n\t\t\t\t\t\t\t\t  First Name    : " << Get_First_Name() << endl;
    cout << "\n\t\t\t\t\t\t\t\t  Last Name     : " << Get_Last_Name() << endl;
    cout << "\n\t\t\t\t\t\t\t\t  ID Number     : " << Get_UserID() << endl;
    cout << "\n\t\t\t\t\t\t\t\t  Data of Birth : " << Get_DOB() << endl;
    cout << "\n\t\t\t\t\t\t\t\t  Address       : " << Get_Ads() << endl;

}
