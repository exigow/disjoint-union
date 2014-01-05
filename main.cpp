// SumRoz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Collection.h"

#include <cstdlib>
#include <stdio.h>

using namespace std;
 
int main() {
	Collection 
		*red = new Collection("red"), 
		*blue = new Collection("blue"),
		*sum = new Collection("sum");

	Collection::getInput(red);
	red->sortBubble();
	Collection::printList(red->list);

	Collection::getInput(blue);
	blue->sortBubble();
	Collection::printList(blue->list);

	// Computing disjoint list.
	sum->addCollection(red);
	sum->addCollection(blue);
	sum->sortBubble();
	sum->eraseRepetitions();
	Collection::printList(sum->list);

	// Showing odds.
	sum->updateOdd();
	printf("odd-list: \n");
	Collection::printList(sum->oddList);

	system("pause");
	return 0;
}
