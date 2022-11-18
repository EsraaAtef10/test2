// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

bool ispalindrome(string s)
{
	int length = s.size();
	stack<char> st;
	int i, mid = length / 2;
	for (i = 0; i < mid; i++) {
		st.push(s[i]);
	}
	if (length % 2 != 0) {
		i++;
	}
	char ele;
	while (s[i] != '\0')
	{
		ele = st.top();
		st.pop();
		if (ele != s[i])
			return false;
		i++;
	}
	return true;
}

int main()
{
	string s = "madam";
	if (ispalindrome(s)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
