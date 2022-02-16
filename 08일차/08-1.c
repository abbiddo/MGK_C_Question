#include <stdio.h>

int main(){
	int sec=0,d,h,m;
	printf("초 단위의 시간을 입력해주세요 : ");
	scanf("%d",&sec);
	printf("%d초 = ",sec);
	
	d=sec/86400;
	sec%=86400;
	if (d!=0) printf("%d일",d); 
	
	h=sec/3600;
	sec%=3600;
	if (h!=0) printf("%d시간",h); 
	
	m=sec/60;
	sec%=60;
	if (m!=0) printf("%d분",m);
	if (sec!=0) printf("%d초",sec);  
}
