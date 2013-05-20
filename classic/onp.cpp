#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <queue>
#include <stack>
#include <stdio.h>
#include <string.h>
using namespace std;

char exp[1000];
string transform();

int main()
{
	int N;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		gets(exp);
		string st = transform();
		printf("%s\n", st.c_str());
	}

	return 0;
}

string transform()
{
	int len = strlen(exp);
	stack<char>opt;
	queue<char>opd;
	string str="";
	for (int i = 0; i < len; i++)
	{
		char chr = exp[i];

		if(isalpha(chr))
		{
			opd.push(chr);
		}
		else if(chr=='+'||chr=='-'||chr=='*'||chr=='/'||chr=='^'||chr=='(')
		{
			opt.push(chr);

		}
		
		else if (chr==')')
		{
			while(!opd.empty())
			{
				str += opd.front();
				opd.pop();
			}
			while(!opt.empty() && opt.top()!='(')
			{
				str += opt.top();
				opt.pop();
				if (opt.top()=='(')
				{
					opt.pop();
					break;
				}
			}
		}
	}
	return str;
}
