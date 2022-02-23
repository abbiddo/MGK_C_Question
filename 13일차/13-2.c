#include <stdio.h>
int main(){
	
	int n,cnt=0,i;
	unsigned long long re=1;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		re*=i;
		while(re%10==0){
			cnt++;
			re/=10;
		}
		if (re>99999) re%=100000; 
	}
	printf("%d",cnt);
}
