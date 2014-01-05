#pragma once

#include <vector>
#include <string>

using namespace std;
class Collection {
public:
	Collection(string name);
	~Collection(void);
	
	string name;
	vector<int> list, oddList;

	bool addValue(int value);
	void sortBubble();
	void updateOdd();
	void addCollection(Collection *collection);
	void eraseRepetitions();

	static void getInput(Collection *collection);
	static void printList(vector<int> whatList);
};

