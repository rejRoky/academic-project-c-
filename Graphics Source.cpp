
#include "Graphics.h"

Graphics :: Graphics()
{
	we1.open("Welcome1.txt");
	we2.open("Welcome2.txt");
	SMp.open("Sign Menu.txt");
	AOS.open("About.txt");
}

Graphics :: ~Graphics()
{
	we1.close();
	we2.close();
	SMp.close();
	AOS.close();
}

void Graphics :: Welcome1()
{
	system("mode 200");
	if (we1.is_open())
	{
		cout << "\n\n\n\n\n\n\n\n" << endl;
		while (getline(we1 , w1))
		{
			system("COLOR 0A");
			cout << "\t\t\t\t\t" << w1 << endl;
		}

		cout << "\n\t\t\t\t\t.................. Press Enter For Continue ..................";
		getch ();
	}
}

void Graphics :: Welcome2 ()
{
	system("cls");
	if (we2.is_open())
	{
	    cout << "\n\n\n\n";
		while (getline(we2 , w2))
		{
			system("COLOR 0C");
			cout << "\t\t\t\t" << w2 << endl;
		}
	}

	cout << "\n\n\n\t\t\t\t\t.........................Press Enter For Continue........................";
	getch ();
}


void Graphics :: AboutOS()
{
	system("cls");
	if (AOS.is_open())
		cout << "\n\n\n\n";
	{
		while (getline(AOS , aos))
		{
		    system("COLOR 78");
			cout << "\t\t" << aos << endl;
		}
	}
    cout << "\n\t\t\t\t\t\t\t.............Press Your Choose Option.............." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t";
	getch ();
}


void Graphics :: SignMemu ()
{
	system("cls");
	if (SMp.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(SMp , smp))
		{
			system("COLOR F5");
			cout << "\t\t" << smp << endl;
		}
	}

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
}


void Graphics :: Welcome()
{

    Welcome1();
    Welcome2();
	AboutOS();
	SignMemu();
}
