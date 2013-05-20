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


int main()
{ 
	int N;
	while((N=getColumn())!=0)
	{
		int rs = N*(N+1)*(2*N+1)/6;
		printf("%d\n", rs);
	}
	return 0;
}

