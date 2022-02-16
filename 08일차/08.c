#include <stdio.h>

int reverse(int n){
	int a=0;
	while(n){
		a*=10;
		a+=(n%10);
		n/=10;
	}
	return a;
}

int prime(int n){
	int i;
	for (i=2;i<n;i++)
		if (n%i==0) return 1;
		
	return 0;
}

int main(){
	int n,i,a,k;
	printf("입력받을 숫자의 개수를 입력해주세요: "); 
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf("각 %d번째 숫자를 입력해주세요: ",i);
		scanf("%d",&a);
		
		k=reverse(a);
		k=prime(k);
		
		if (k==0) printf("%d ",a);
	}
}
