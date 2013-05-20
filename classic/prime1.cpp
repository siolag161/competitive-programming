#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
#include<cmath>

#define MAX 1000001

using namespace std;


int main()
{

	long M, N;
	int n;
	scanf("%d", &n);
	for (int l = 0; l < n; l++)
	{
		scanf("%ld %ld", &N, &M);
		int* primes = new int[M-N+1];

		for (int i =0; i < M-N+1; i++) primes[i] = 1;

		//primes[0] = 0;
		//	primes[1] = 0;
		for (long p = 2; p*p<=M; p++)
		{
			int less = N/p;
			less *= p;
			for (int j = less; j<=M; j+= p)
			{
				if (j != p && j>=N)
				{
					primes[j-N] = 0;
				}
			}
		}
		int count = 0;
		for (long i = 0; i<M-N+1; i++)
		{
			
			if (primes[i] && N+i != 1)
			{
				//	count ++;
				printf("%d\n", i+N);
			}
		}
		if (l != n-1) printf("count = %d\n", count);
		delete [] primes;
	}
}
