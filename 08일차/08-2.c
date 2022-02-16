#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b){
	if (*(int *)a<*(int *)b) return -1;
	if (*(int *)a>*(int *)b) return 1;
	return 0;
}
int main(){
	int n,a[500000]={0},i,j,temp,k,s=0,max=0;
	int sum=0;
	scanf("%d",&n);
	
	for (i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	printf("산술평균 : %f\n",(double)sum/n);
	
	qsort(a,n,4,compare);
	
	printf("중앙값 : %d\n범위 : %d",a[n/2],a[n-1]-a[0]);	
}
