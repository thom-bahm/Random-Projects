#include "LinkSorter.h"

LinkSorter::LinkSorter()
{
	
}

//Separate a signle element in list into two elements,
//one surrounded by [], and one surrounded by ().
vector<string> LinkSorter::ParseList(string input)
{
	vector<string> retList;

	int firstBracketIndex;
	int secondBracketIndex;
	int firstParenIndex;
	int secondParenIndex;

	for (int i = 0; i < input.size(); i++)
	{
		//fill retList.
		if (input.substr(i, 1) == "[")
		{
			firstBracketIndex = i;
		}
		if (input.substr(i, 1) == "]")
		{
			secondBracketIndex = i;
		}
		if (input.substr(i, 1) == "(")
		{
			firstParenIndex = i;
		}
		if (input.substr(i, 1) == ")")
		{
			secondParenIndex = i;
		}

		//Error handling (kind of)
		if (firstBracketIndex == NULL || secondBracketIndex == NULL || firstParenIndex == NULL || secondParenIndex == NULL)
		{
			throw runtime_error("Error: One of the elements was missing a bracket [] or parenthesis()");
		}

	}
	return retList;
}

vector<string> LinkSorter::SortMdLinks(vector<string> list)
{
	
}

void LinkSorter::DisplayList(vector<string> list)
{
	string first;
	string second;

	for (int i = 0; i < list.size(); i+=2)
	{
		if (i % 2 == 0)
		{
			//Assign first to i.
			first = list[i];
		}
		else 
		{
			//Assign second to i.
			second = list[i];
		}
		string line = first + second;

		cout << line << endl;
	}
}
