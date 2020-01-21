#include "LinkSorter.h"
#include <iostream>

int main()
{
	
	string input;
	cout << "Enter Contents Of Array" << endl;
	cin >> input;
	
	LinkSorter linkSorter;
	linkSorter.SortLinks(input);
	
	return 0;
}