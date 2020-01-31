#include "LinkSorter.h"

vector<string> ParseList(string input)
{
	vector<string> retList;

	int firstBracketIndex = -1;
	int secondBracketIndex = -1;
	int firstParenIndex = -1;
	int secondParenIndex = -1;
	int count = 0;
	int addCount = 1;

	for (unsigned int i = 0; i < input.size(); i++)
	{
		if (input.substr(i, 1).compare("[") == 0)
		{
			firstBracketIndex = i;
		}
		if (input.substr(i, 1).compare("]") == 0)
		{
			secondBracketIndex = i;
		}
		if (input.substr(i, 1).compare("(") == 0)
		{
			firstParenIndex = i;
		}
		if (input.substr(i, 1).compare(")") == 0)
		{
			secondParenIndex = i;
			count += 1;
		}
		
		//Error handling (kind of)
		if ((firstBracketIndex != -1 && secondBracketIndex != -1  
			&& firstParenIndex != -1 && secondParenIndex != -1) 
			&& addCount <= count)
		{
			string pushBackBracket = input.substr(firstBracketIndex, secondBracketIndex + 1 - firstBracketIndex);
			retList.push_back(pushBackBracket);
			string pushBackParenthesis = input.substr(firstParenIndex, secondParenIndex + 1 - firstParenIndex);
			retList.push_back(pushBackParenthesis);

			cout << count << endl;
			addCount += 1;
		}
	}

	return retList;
}

vector<string> SortMdLinks(vector<string> list)
{
	return list;
}

void DisplayList(vector<string> list)
{

	for (unsigned int i = 1; i < list.size(); i += 2)
	{
		cout << list[i - 1] + list[i] << endl;
		cout << "" << endl;
	}
	//
}
