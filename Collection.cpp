#include "stdafx.h"
#include "Collection.h"
#include <stdio.h>
#include <algorithm>

Collection::Collection(void) {
}

Collection::~Collection(void) {
}

// Dodawanie wartosci do listy.
bool Collection::addValue(int value) {
	printf("adding value %d - ", value);
	
	// Sprawdzanie czy wartosc sie powtarza.
	bool checked = true;
	for (int i = 0; i < list.size(); i++) {
		if (list[i] == value) {
			checked = false;
		}
	}

	if (checked) {
		list.push_back(value); // Dodawanie elementu.
		printf("success\n");
	} else {
		printf("failure\n");
	}

	return checked;
}

// Wypisywanie listy.
void Collection::printList() {
	int size = list.size();
	printf("values (size: %d): ", size);
	for (int i = 0; i < size - 1; i++) {
		printf("%d, ", list[i]);
	}
	printf("%d\n", list[size - 1]);
	return;
}

// Sortowanie listy.
void Collection::sortList() {
	printf("sorting... ");
	int n = list.size(), step;
	for (int passes = 0; passes < n - 1; passes++) {
		for (int j = 0; j < n - passes - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);
				step++;
			}
		}
	}
	printf("done (steps: %d)\n", step);
	return;
}

// Aktualizacja ilosci liczb nieparzystych.
void Collection::updateOddCount() {
	int n = list.size();
	oddCount = 0; // Reset.
	for (int i = 0; i < n; i++) {
		if (list[i]%2 != 0) {
			oddCount++;
		}
	}
	return;
}

// Wypisywanie ilosci liczb nieparzystych.
void Collection::printOddCount() {
	printf("odd count: %d\n", this->oddCount);
	return;
}

void Collection::addCollection(Collection *collection) {
	size_t iter;
	for (iter = 0; iter < collection->list.size(); iter++) {
		list.push_back(collection->list[iter]);
	}
}

void Collection::eraseRepetitions() {
	for (int i = list.size(); i > 0; i--) {
		if (list[i] == list[i + 1]) {
			list.erase(list.begin() + i);
			list.erase(list.begin() + i);
		}
	}
}
