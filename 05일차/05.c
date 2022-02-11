#include <stdio.h>
int main() {
    int a[5],i,max=0,n,num,re;
    
    for (i=0;i<5;i++) {
    	scanf("%d",&a[i]);
    	n=0;
    	num=a[i];
    	
    	while(num){
    		n+=(num%10);
    		num/=10;
    	}
    	if (max<n) {
    		max=n;
    		re=a[i];
        }
    }
    printf("%d",re);
}
