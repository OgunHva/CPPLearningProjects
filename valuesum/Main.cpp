#include <iostream>
using namespace std;

int alphabetArrayCalculator(string word)
{
	string alphabetArray [] = {"a", "b", "c", "d", "e", "f", "g", "h",
		"i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u",
		"v", "w", "x", "y", "z"};
	
	int value;
	for (int i = 0; i < 26; i++)
	{
		if (word == alphabetArray[i])
		{
			value = i + 1;
		}
	}
	return value;
}

int main()
{
	int totalValue = 0;
	string inputString;
	cout << "Please type a string word:\n";
	cin >> inputString;
	string s(inputString);
	for (char& c : s)
	{
		string b(1, c);
		totalValue += alphabetArrayCalculator(b);
	}
	cout << "The letter value sum is: "  << totalValue;
	return 0;
}
