#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
#include<cmath>


using namespace std;


int main()
{

	long X, Y;
	int N;
	scanf("%d", &N);
	for (int l = 0; l < N; l++)
	{
		scanf("%ld %ld", &X, &Y);
		int rs = -1;
		if(X%2 == 0 && Y%2 == 0) {
			if (X-Y==2 || X==Y)
			{
				rs = Y+X;
			}		
		}
		
		if (X%2 == 1 && Y%2 == 1)
		{
			if (X-Y==2 || X==Y) {
				rs = X+Y-1;
			}
		}
		if (rs == -1) {
			printf("No Number\n");
		} 
		else {
			printf("%d\n", rs);
		}
	}
}
