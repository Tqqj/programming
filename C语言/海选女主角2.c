#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,t,a,r;
	while(scanf("%d %d",&n,&m) != EOF){
		t=0;
		for(int i=0;i<n*m;i++){
				scanf("%d",&a);
				if(abs(t)<abs(a)){
					t=a;
					r=i;
				}
		}
		printf("%d %d %d\n",r/m+1, r%m+1, t);
	}
	return 0;
}
