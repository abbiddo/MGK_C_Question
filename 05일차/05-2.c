#include <stdio.h>
int div(int, int);

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d",div(n,m));
}

int div(int n,int m){
	int i,j,cnt=0,re=0;

	for (i=n;i<=m;i++){
		cnt=0;
		for (j=1;j<=i;j++) if(i%j==0) cnt+=1;
		if (cnt%2==0) re+=1;
	}
	return re;
}
