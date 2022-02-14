#include <stdio.h>
int main() {
    int a,aa,b,bb,i;
    char c;
    scanf("%d/%d%c%d/%d",&a,&aa,&c,&b,&bb);
	
	if (c=='+'){
		a*=bb;
		b*=aa;
		a+=b;
		
		aa*=bb;
		i=aa; 
	}	
	
	else if (c=='-'){
		a*=bb;
		b*=aa;
		a-=b;
		
		aa*=bb;
		i=aa; 
	}
	
	else if (c=='*'){
		a*=b;
		aa*=bb;
		i=aa;
	}
	
	else if (c=='/'){
		a*=bb;
		aa*=b;
		i=aa;
	}
	
	while(1){
		if (aa%i==0 && a%i==0) break;
		i--;
	}
	
	if (a/i==0) printf("0");
	else printf("%d/%d",a/i,aa/i);
}
