#include <stdio.h>
int main(){
	char ox[100];
	int i=0,cnt=0,sum=0;
	printf("OX퀴즈의 결과를 입력해주세요(ex.OXXOO) ");
	scanf("%[^\n]s",&ox);
	
	while (ox[i]!=' '){
		if (ox[i]=='O') cnt+=1;
		else cnt=0;
		sum+=cnt;
		i++;
	}
	printf("%d",sum);
}
