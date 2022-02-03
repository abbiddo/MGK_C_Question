#include <stdio.h>

void change(int *pa, int *pb);

int main(){
	int a,b;
	printf("숫자를 입력해주세요 : ");
	scanf("%d %d",&a,&b);
	change(&a,&b);
	printf("%d %d",a,b);
}

void change(int *pa, int *pb){
	int num;
	num=*pa;
	*pa=*pb;
	*pb=num;
}
