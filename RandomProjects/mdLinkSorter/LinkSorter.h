#pragma once
#include <string>
#include <list>
#include <iostream>

using namespace std;

class LinkSorter
{
private:
public:
	LinkSorter();
	 
	list<string> ParseList(string input);

	void SortAndDisplayLinks(string nameAndLink);
	void DisplayList(list<string> list);
};