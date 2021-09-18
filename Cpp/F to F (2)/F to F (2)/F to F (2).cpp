#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test)
{
	return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*function)(string))
{
	int tally = 0;
	for (unsigned int i = 0; i < texts.size(); i++)
	{
		if (function(texts[i]))
		{
			tally++;
		}
	}
	return tally;
}



int main()
{
	vector<string> texts = { "one", "two","three","two", "four","two","three" };

	cout << match("one") << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << countStrings(texts, match) << endl;
	return 0;
}
 