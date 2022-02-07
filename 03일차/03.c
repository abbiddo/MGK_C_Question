#include <stdio.h>
int main(){
	int n,i;
	printf("숫자 입력 : ");
	scanf("%d",&n); 
	
	while (n>1)
		for (i=2;i<=n;i++)
			if (n%i==0){
				printf("%d\n",i);
				n/=i;
				break;
			}
}
