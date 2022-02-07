#include <stdio.h>
#include <string.h>
int main() {
    char a[51];
    int i,j=0,sum=0,n;
    scanf("%s",a);
    
    for (i=0;i<=strlen(a);i++){
    	if (a[i]=='+'||i==strlen(a)){
    		sum+=j;
    		j=0;
		}
		else {
			j*=10;
			j+=(a[i]-48);
		}	
	}
	printf("%d",sum);
}
