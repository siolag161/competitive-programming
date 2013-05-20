
#include <queue>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <stdio.h>

using namespace std;

char  primes[1000000002];

int main()
{
	int N;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		unsigned long l,r;
		scanf("%lu %lu", &l,&r);
		printf("%c\n", primes[i]);
	}

	return 0;
}
