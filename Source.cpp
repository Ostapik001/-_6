//#include <stdio.h>
//#include <iostream>
///using namespace std;

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 1)
			S += a[i];
	return S;
}


#include <bits/stdc++.h>
using namespace std;

// Function to find sum
// of array excluding the
// range which has [a, b]
void sumexcludingrange(vector<int> li, int a, int b)
{
	int sum = 0;
	bool add = true;

	// loop in li
	int n = li.size();
	for (int i = 0; i < n; i++) {

		// if no != a then add
		if (li[i] != a && add == true)
			sum = sum + li[i];

		// mark when a
		// and b are found
		else if (li[i] == a)
			add = false;
		else if (li[i] == b)
			add = true;
	}

	// print sum
	cout << (sum);
}

// Driver Code
int main()
{
	vector<int> lis{ 1, 2, 4, 5, 6 };
	int a = 2;
	int b = 5;

	sumexcludingrange(lis, a, b);
}