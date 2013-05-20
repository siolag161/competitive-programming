#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;


int getColumn()
{
	int n;
	scanf("%d", &n);

	return n;
}

void reverse_str(char* e, int f, int l)
{
	while(f<l)
	{
		swap(e[f++], e[l--]);
	}

}

int main()
{
	int N;
	while((N=getColumn())!=0)
	{
		char exp[1000];
		scanf("%s", exp);
		int len = strlen(exp);
		int m = len/N;
		for(int i = 0; i < m; i++)
		{
			if (i%2)
			{
				reverse_str(exp, i*N, i*N+N-1);
			}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < m; j++)
			{
				printf("%c", exp[j*N+i]);
			}
		}
		printf("\n");
	}
	return 0;
}
