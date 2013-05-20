#include<cstdio>
#include<climits>
#include<algorithm>
#include <string.h>
using namespace std;

template<size_t SIZE, class T> inline size_t array_size(T (&arr)[SIZE]) {
    return SIZE;
}


int* dot;
int* sck;

int computeDonations(int l, int r)
{	

	int key = l*50+r;
	if(dot[key]!= -1) return dot[key];
	
	if (l>r) return 0;
	
	dot[key] =  max(computeDonations(l+1,r), 
					computeDonations(l+2,r)+sck[l]);
	
	return dot[key];
}


int maxDonations(int _dot[], int len)
{
	sck = _dot;
	printf("len = %d\n", len);
	dot = new int[10000];
	dot = new int[10000];
	memset(dot, -1, 10000);

	return max(computeDonations(0, len-2), computeDonations(1,len-1));
}

int main()
{

	int t1[] = { 10, 3, 2};
	int t2[]  = { 7, 7, 7, 7, 7, 7, 7 };
	int t3[] = { 94, 40, 49, 65, 21, 21, 106, 80, 92, 81, 679, 4, 61,  
				 6, 237, 12, 72, 74, 29, 95, 265, 35, 47, 1, 61, 397,
				 52, 72, 37, 51, 1, 81, 45, 435, 7, 36, 57, 86, 81, 72 };
		

	printf("%d = %d\n", maxDonations(t1,array_size(t1)), 19);
	printf("%d = %d\n", maxDonations(t2, array_size(t2)), 21);
		   printf("%d = %d\n", maxDonations(t3, array_size(t3)), 2926);
	return 0;
}
