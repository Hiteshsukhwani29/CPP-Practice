/*

You are given a table with n rows and m columns. Each cell is colored with white or black. Considering the shapes created by black cells, what is the maximum border of these shapes?

A shape is a set of connected cells. Two cells are connected if they share an edge. Note that no shape has a hole in it.

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 1e3 + 14;
char c[maxn][maxn];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			cin>>(c[i]+1);
		int ans =0;
		for(int i=1;i<=n;i++)
			for(int j=1,ptr=1;j<=m;j=ptr)
			if(c[i][j]!='#'||c[i-1][j]=='#')
				ptr++;
			else{
				while(c[i][ptr]=='#'&&c[i-1][ptr]!='#')
					ptr++;
				ans=max(ans,ptr-j);
				}
		for(int i=1;i<=n;i++)
			for(int j=1,ptr=1;j<=m;j=ptr)
			if(c[i][j]!='#'||c[i+1][ptr]=='#')
					ptr++;
			else{
				while(c[i][ptr]=='#'&&c[i+1][ptr]!='#')
					ptr++;
			ans=max(ans,ptr-j);
			}
		for(int i=1;i<=m;i++)
			for(int j=1,ptr=1;j<=n;j=ptr)
				if(c[j][i]!='#'||c[j][i-1]=='#')
					ptr++;
				else{
					while(c[ptr][i]=='#'&&c[ptr][i-1]!='#')
						ptr++;
					ans=max(ans,ptr-j);
				}
		for(int i=1;i<=m;i++)
			for(int j=1,ptr=1;j<=n;j=ptr)
		if(c[j][i]!='#'||c[j][i+1]=='#')
					ptr++;
				else{
					while(c[ptr][i]=='#'&&c[ptr][i+1]!='#')
						ptr++;
					ans=max(ans,ptr-j);
				}
		cout<<ans<<'\n';
	}
}
