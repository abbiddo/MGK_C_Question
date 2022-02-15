#include <stdio.h>
#include <string.h>
int main(){
	char n[21];
	int i=0,j;
	scanf("%s",n);

	if (strlen(n)%3!=0 && strlen(n)>3) {
		i=strlen(n)%3;
		for (j=0;j<i;j++) printf("%d",n[j]-48);
		printf(",");
	}	

	if (strlen(n)<4){
		printf("%s",n);
		return 0;
	}

	for (i;i<strlen(n)-3;i+=3) printf("%d%d%d,",n[i]-48,n[i+1]-48,n[i+2]-48);
	printf("%d%d%d",n[i]-48,n[i+1]-48,n[i+2]-48);
}
