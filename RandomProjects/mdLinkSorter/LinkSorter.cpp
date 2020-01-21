#include "LinkSorter.h"

LinkSorter::LinkSorter()
{
}

//Separate a signle element in list into two elements,
//one surrounded by [], and one surrounded by ().
list<string> LinkSorter::ParseList(string input)
{
	list<string> retList;

	for (int i = 0; i < input.size(); i++)
	{
		//fill retList.
	}
	return retList;
}

void LinkSorter::SortAndDisplayLinks(string nameAndLink)
{
	list<string> parsedList = ParseList(nameAndLink);

	DisplayList(parsedList);
}

void LinkSorter::DisplayList(std::list<std::string> list)
{
	std::string first;
	std::string second;

	for (int i = 0; i < list.size(); i+=2)
	{
		if (i % 2 == 0)
		{
			//Assign first to i.
		}
		else 
		{
			//Assign second to i.
		}
		std::string line = first + second;

		std::cout << line << std::endl;
	}
}
