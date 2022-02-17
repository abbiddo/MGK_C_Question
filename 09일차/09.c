#include <stdio.h>
arr[1000]={0,1,2,2,2,2,2,1,2,2,1};
int main(){
	int n,i,j,k,num=0,ox=0,jj;
	scanf("%d",&n);
	printf("1");
	
	int a[100];
	for (i=7;i<=n;i++){
		k=0;
		j=i;
		ox=0;
		while(1){
			num=0;
			if (ox==1) break;
			while(j){
				num+=(j%10)*(j%10);
				j/=10;
			}
			j=num;
			if (num==1){
				printf(",%d",i);
				ox=1;
				break;
			}
			if (arr[num]==1){
				printf(",%d",i);
				ox=1;
				break;
			}
			if (arr[num]==2){
				ox=2;
				break;
			}
			for (jj=0;jj<k;jj++)
				if (a[jj]==num){
					ox=2;
					break;
				}
			if (ox==2) break;
			
			a[k++]=num;
		}
		
		for (jj=0;jj<k;jj++)
			arr[a[jj]]=ox;
	}
}
