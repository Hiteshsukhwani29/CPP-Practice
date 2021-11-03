#include <bits/stdc++.h>
using namespace std;

void rabinkarp(string str, string p, int x)
{
	int M = p.length();
	int N = str.length();
	int i, j, s=0, t=0, h=1, d=256;

	for (i = 0; i < M - 1; i++){
		h = (h * d) % x;
	}
	for (i = 0; i < M; i++)
	{
		s = (d * s + p[i]) % x;
		t = (d * t + str[i]) % x;
	}
	for (i = 0; i <= N - M; i++)
	{
		if ( s == t )
		{
			bool flag = true;
			for (j = 0; j < M; j++)
			{
				if (str[i+j] != p[j])
				{
				flag = false;
				break;
				}
			}
			if (j == M)
				cout<<"pattern found at index : "<< i<<endl;
		}
		if ( i < N-M )
		{
			t = (d*(t - str[i]*h) + str[i+M])%x;
			if (t < 0)
			t = (t + x);
		}
	}
}

int main()
{
	string str = "AAAABABABCDS";
	string p = "BCD";
	int x = 101;
	rabinkarp(str,p,x);
	return 0;
}
