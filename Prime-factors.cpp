#include <iostream>
#include<cmath>
using namespace std;


void primeFactors(int n)
{
	
	while (n % 2 == 0)
	{
		cout << 2 << " ";
		n = n/2;
	}

	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n = n/i;
		}
	}

	// if it is a prime number greater than 2
	if (n > 2)
		cout << n << " ";
}

/* Driver code */
int main()
{
	int n;
	cin>>n;
	primeFactors(n);
	return 0;
}
