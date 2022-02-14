#include <stdio.h>
int reverse(int n){
	int a=0;
	while(n){
		a*=10;
		a+=(n%10);
		n/=10;
	}
	return a;
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    
    x=reverse(x);
    y=reverse(y);
    
    printf("%d",reverse(x+y));
}
