#include <stdio.h>
int main(void) {
	int n=0;
	while (n!=1) {
		printf("2부터 9사이 숫자를 입력해주세요 (1을 누르면 프로그램 종료) : ");
		scanf("%d",&n);
		
		if (n<1 || n>9) printf("범위 외의 숫자입니다.\n");
		else for (int i=1;i<=9;i++) printf("%d X %d = %d\n",n,i,n*i);
		printf("\n");
	}
	printf("프로그램 종료");		
}
