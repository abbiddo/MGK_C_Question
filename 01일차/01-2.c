#include <stdio.h>
int main() {
    char a[10],b[10];
    int k,n,m,i;
    
    printf("숫자 두 개를 입력해주세요(ex. '3 5'): ");
    scanf("%s %s",a,b);
    
    printf("배수를 알고 싶은 숫자를 입력해주세요: ");
    scanf("%d",&k);
    
    n=atoi(a);
    m=atoi(b);
    
    for (i=n;i<=m;i++){
    	if (i%k==0) printf("%d ",i);
	}
}
