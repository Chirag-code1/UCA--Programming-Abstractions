#include <iostream>
using namespace std;

int main()
{
int x = 2, n = 13;

int arr[32];
int i = 0;

while (n > 0)
{
arr[i] = n % 2;
n = n / 2; 
i++;
}

int ans = 1;
i--;
while (i >= 0)
{
ans = ans * ans;
if (arr[i] == 1)
ans = ans * x;   // ans * ans * x
i--;
}

cout << ans;

return 0;
}
