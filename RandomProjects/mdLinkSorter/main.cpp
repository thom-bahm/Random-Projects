#include "LinkSorter.h"
#include <iostream>

void main()
{
	string input;
	cout << "Enter Contents Of Array" << endl;
	cin >> input;
	input.c_str();
	vector<string> parsedList = ParseList(input);

	//vector<string> newList = SortMdLinks(parsedList);
	DisplayList(parsedList);
}