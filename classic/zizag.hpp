int longestZigZag(int seq[], int len)
{

	//int len = array_size(seq);//sizeof(seq)/sizeof(seq[0]);
   
	int zzPos[len];
	int zzNeg[len];

	for (int i = 0; i < len; i++)
	{
		zzPos[i] = 1;
		zzNeg[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if(seq[i] > seq[j])
			{
				zzPos[i] = max(zzPos[i], zzNeg[j]+1);
			}
			else if (seq[i] < seq[j])
			{
				zzNeg[i] = max(zzNeg[i], zzPos[j]+1);
			}
		}
	}

	int mrs = 0;
	for (int i = 0; i < len; i++)
	{
		mrs = max(mrs, zzNeg[i]);
		mrs = max(mrs, zzPos[i]);
	}

	return mrs;
}
