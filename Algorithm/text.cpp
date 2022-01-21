#include<iostream>
using namespace std;
const int N=1000;
char map[N][N];
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,r,c;
		int k=0;
		int g=0;
		cin>>n>>m>>r>>c;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				cin>>map[i][j];
				if(map[i][j]=='B') k++;
			}
			if(map[r-1][c-1]=='B'){
				cout<<0<<endl;
				continue;
			}
		if(k==0){
			cout<<-1<<endl;
			continue;
		}
		for(int i=0;i<m;i++) if(map[r-1][i]=='B') g++;
		for(int i=0;i<n;i++) if(map[i][c-1]=='B') g++;
		if(g>0) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}