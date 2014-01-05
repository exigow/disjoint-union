#include "stdafx.h"
#include "Collection.h"
#include <stdio.h>
#include <cstdlib>
#include <algorithm>

Collection::Collection(string name) {
	this->name = name;
}

Collection::~Collection(void) {
}

// Adding value to the list.
bool Collection::addValue(int value) {
	printf("adding value %d - ", value);
	
	// Checking reps (linear).
	bool checked = true;
	for (size_t i = 0; i < list.size(); i++) {
		if (list[i] == value) {
			checked = false;
		}
	}

	if (checked) {
		list.push_back(value); // Adding.
		printf("success\n");
	} else {
		printf("failure\n");
	}

	return checked;
}

/// Static.
// Writing out list.
void Collection::printList(vector<int> whatList) {
	int size = whatList.size();
	printf("values (size: %d): ", size);
	for (int i = 0; i < size - 1; i++) {
		printf("%d, ", whatList[i]);
	}
	printf("%d\n", whatList[size - 1]);
	return;
}

// Bubble sorting.
void Collection::sortBubble() {
	int step = 0;
	size_t i, j;
	printf("sorting (bubble) list from '%s' with %d elements... ", &name, list.size());
	for (i = 0; i < list.size() - 1; i++) {
		for (j = 0; j < list.size() - i - 1; j++) {
			step++;
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);
			}
		}
	}
	printf("done (%d steps)\n", step);
	return;
}

// Updating odd list.
void Collection::updateOdd() {
	printf("updating odd-list from '%s'... ", &name);
	oddList.clear();
	for (size_t i = 0; i < list.size(); i++) {
		if (list[i]%2 != 0) {
			oddList.push_back(list[i]);
		}
	}
	printf("done\n");
	return;
}

void Collection::getInput(Collection *collection) {
	int size, value = 0;
	printf("size %s: ", &(collection->name));
	scanf_s("%d", &size);
	for (int i = 0; i < size; i++) {
		printf("value %d: ", i);
		scanf_s("%d", &value);
		//collection->list.push_back(value);
		collection->addValue(value);
	}
	return;
}

void Collection::addCollection(Collection *collection) {
	printf("adding '%s' list (%d elements) to '%s' list (%d elements)\n", 
		&(collection->name), collection->list.size(), 
		&(this->name), this->list.size());
	size_t iter;
	for (iter = 0; iter < collection->list.size(); iter++) {
		list.push_back(collection->list[iter]);
	}
}

void Collection::eraseRepetitions() {
	printf("erasing repetitions\n");
	for (size_t i = list.size() - 1; i > 0; i--) {
		if (list[i] == list[i + 1]) {
			list.erase(list.begin() + i);
			list.erase(list.begin() + i);
		}
	}
}
