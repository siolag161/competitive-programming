#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <stack>
#include <stdio.h>
#include <string.h>
using namespace std;

int reverse(int k)
{
	int r = 0;
	while (k>0)
	{
		r = r*10+k%10;
		k /= 10;
	}
	return r;
}

int main()
{
	int N;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		int l,r;
		scanf("%d %d", &l,&r);
		int n = reverse(reverse(l)+reverse(r));
		printf("%d\n", n);
	}

	return 0;
}
