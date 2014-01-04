#pragma once

#include <vector>

using namespace std;
class Collection {
public:
	Collection(void);
	~Collection(void);
	bool addValue(int value); // Zwraca false jesli sie powtarza, true jesli nie.
	void printList();

	vector<int> list;
	int oddCount;

	void sortList();
	void updateOddCount();
	void printOddCount();
	void addCollection(Collection *collection);
	void eraseRepetitions();
};

