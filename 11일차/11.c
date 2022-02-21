#include <stdio.h>
#include <string.h>
int main(){
	int n,i,cnt=0;
	char a[21],b[21];
	
	scanf("%s %s",a,b);
	for (i=0;i<strlen(a);i++)
		cnt+=abs(b[i]-a[i]);
		
	printf("%d",cnt);
}
