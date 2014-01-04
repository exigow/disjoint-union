// SumRoz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Collection.h"

#include <cstdlib>
#include <stdio.h>

using namespace std;
 
int _tmain(int argc, _TCHAR* argv[]) {
	Collection *red, *blue;

	red = new Collection();
	red->addValue(5);
	red->addValue(8);
	red->addValue(11);
	red->addValue(64);
	red->addValue(3);
	red->addValue(128);
	red->printMe();

	red->sortMe();
	red->printMe();



	system("pause");
	return 0;
}
