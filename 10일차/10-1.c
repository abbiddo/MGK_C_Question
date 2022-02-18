#include <stdio.h>
#include <string.h>
int main(){
	int i,cnt=0;
	char a[51];
	
	scanf("%s",a);
	
	for (i=0;i<strlen(a);i++){
		if (a[i]=='(') cnt+=1;
		else cnt-=1;
			
		if (cnt<0) break;
	}
	if (cnt!=0) printf("false");
	else printf("true");
}
