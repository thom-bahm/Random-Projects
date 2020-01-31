#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <list>
using namespace std;

vector<string> ParseList(string input);

vector<string> SortMdLinks(vector<string> list);

vector<string> SortRawLinks(vector<string> list);

void DisplayList(vector<string> list);