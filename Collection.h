#pragma once

#include <vector>

using namespace std;
class Collection {
public:
	Collection(void);
	~Collection(void);
	bool addValue(int value); // Zwraca false jesli sie powtarza, true jesli nie.
	void printMe();

	vector<int> list;

	int sortMe();
};

