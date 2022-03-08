#ifndef GRAPHICS_H_INCLUDED
#define GRAPHICS_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

class Graphics{

public:

	ifstream we1;    // For First Page
	ifstream we2;    // For Welcome Page of the Project
	ifstream SMp;    // For Sign up or Sign in
	ifstream AOS;    // For About OS
	string w1;
	string w2;
	string smp;
	string aos;

	Graphics();
	~Graphics();
	void Welcome();
	void Welcome1();
	void Welcome2 ();
	void SignMemu ();
	void AboutOS();

};

#endif // GRAPHICS_H_INCLUDED
