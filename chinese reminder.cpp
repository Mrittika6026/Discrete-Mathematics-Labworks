#include<bits/stdc++.h>
using namespace std;

int findMinX(int num[], int rem[], int k)
{
	int x = 1;
	while (true)
	{
		int j;
		for (j=0; j<k; j++ )
			if (x%num[j] != rem[j])
			break;

		if (j == k)
			return x;

		x++;
	}

	return x;
}

int main(void)
{
	int num[] = {5, 7, 9,11};
	int rem[] = {3, 5, 8, 10};
	int k = sizeof(num)/sizeof(num[0]);
	cout << "x is " << findMinX(num, rem, k);
	return 0;
}
