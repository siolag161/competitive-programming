



int nbrSum(int* arr, int len, int s)
{
	int Min[s+1];
	for (int i=0; i<=s; i++)
	{
		Min[i] = INT_MAX;
	}
	Min[0] = 0;

	for (int i=1; i<=s; i++)
	{
		for (int j=0; j<len;j++)
		{			
			if((arr[j]<=i) && (Min[i-arr[j]]+1 < Min[i] ))
			{
				Min[i] = Min[i-arr[j]]+1;
			}
		}
	}


	return Min[s];

}
