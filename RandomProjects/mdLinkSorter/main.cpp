#include "LinkSorter.h"
#include <iostream>

int main()
{
	
	string input;
	cout << "Enter Contents Of Array" << endl;
	cin >> input;
	
	LinkSorter linkSorter;

	vector<string> parsedList = linkSorter.ParseList(input);
	
	vector<string> newList = linkSorter.SortMdLinks(parsedList);
	
	linkSorter.DisplayList(newList);

	return 0;
}