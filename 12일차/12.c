#include <stdio.h>
int main(){
    int a,mo=1,ja=1,b=1;
    scanf("%d",&a);
    if (a==1){
    	printf("1/1");
    	return 0;
	}
    while(1){
    	if (ja==1){
    		mo+=1;
    		b++;
    		if(b==a){
    			printf("%d/%d",ja,mo);
    			break;
			}
			while (mo!=1){
				ja+=1;
				mo-=1;
				b++;
				if (b==a){
					printf("%d/%d",ja,mo);
					return 0;
				}
			}
		}
		else if (mo==1){
			ja+=1;
			b++;
			if(b==a){
				printf("%d/%d",ja,mo);
    			break;
			}
			while(ja!=1){
				mo+=1;
				ja-=1;
				b++;
				if (b==a){
					printf("%d/%d",ja,mo);
					return 0;
				}
			}
		}
	}
}
