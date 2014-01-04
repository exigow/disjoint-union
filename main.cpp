// SumRoz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Collection.h"

#include <cstdlib>
#include <stdio.h>

using namespace std;
 
int _tmain(int argc, _TCHAR* argv[]) {
	Collection 
		*red = new Collection(), 
		*blue = new Collection(),
		*sum = new Collection();

	/*for (int i = 0; i < 5; i++) {
		int get;
		scanf("%d", &get);
		red->addValue(get);
	}*/

	red->addValue(3);
	red->addValue(4);
	red->addValue(5);
	red->addValue(6);
	red->addValue(7);
	red->addValue(8);
	red->sortList();
	red->printList();

	blue->addValue(5);
	blue->addValue(6);
	blue->addValue(7);
	blue->addValue(8);
	blue->addValue(9);
	blue->addValue(10);
	blue->sortList();
	blue->printList();

	// Liczenie rozmicy.
	sum->addCollection(red);
	sum->addCollection(blue);
	sum->sortList();
	sum->eraseRepetitions();
	sum->printList();

	system("pause");
	return 0;
}
