
#include "Operating System.h"

int main()
{
	Graphics ob1;
    ob1.Welcome();
	OperatingSystem *ob2 = new OperatingSystem;
    ob2 -> Database_Operator();
    delete ob2;

	return 0;
}
