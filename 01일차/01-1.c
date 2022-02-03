#include <stdio.h>
int main(){
	int i=1;
	printf("\t<3월 달력>\n\n");
	printf("일  월  화  수  목  금  토\n    "); 

	for (i;i<32;i++){
		if (i<10) printf("%d   ",i);
		else printf("%d  ",i);
		if (i%7==6) printf("\n");
	}
}
