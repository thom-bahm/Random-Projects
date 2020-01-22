#include "LinkSorter.h"

LinkSorter::LinkSorter()
{
	
}

//Separate a signle element in list into two elements,
//one surrounded by [], and one surrounded by ().
vector<string> LinkSorter::ParseList(string input)
{
	vector<string> retList;

	int firstBracketIndex = -1;
	int secondBracketIndex = -1;
	int firstParenIndex = -1;
	int secondParenIndex = -1;

	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (input.substr(i, 1) == "[")
		{
			firstBracketIndex = i;
		}
		if (input.substr(i, 1) == "]")
		{
			secondBracketIndex = i;
		}
		if (input.substr(i, 1) == "(" && secondBracketIndex != -1)
		{
			firstParenIndex = i;
		}
		if (input.substr(i, 1) == ")" && firstParenIndex != -1)
		{
			secondParenIndex = i;
		}
		
		//Error handling (kind of)
		if (firstBracketIndex == -1 || secondBracketIndex == -1 || firstParenIndex == -1 || secondParenIndex == -1)
		{
			//
		}
		else
		{
			string pushBackBracket = input.substr(firstBracketIndex, secondBracketIndex+1 - firstBracketIndex);
			retList.push_back(pushBackBracket);
			string pushBackParenthesis = input.substr(firstParenIndex, secondParenIndex+1 - firstParenIndex);
			retList.push_back(pushBackParenthesis);
			//Debug: cout << "pushBP: " << firstParenIndex << secondParenIndex << secondParenIndex + 1 - firstParenIndex << endl;
			i += secondParenIndex+1;
		}
	}

	return retList;
}

vector<string> LinkSorter::SortMdLinks(vector<string> list)
{
	return list;
}

void LinkSorter::DisplayList(vector<string> list)
{

	for (unsigned int i = 1; i < list.size(); i+=2)
	{
		cout << list[i-1] + list[i] << endl;
	}
	//[linkfirst](linkfirst.url)[linksecond](linksecond.url)
}
