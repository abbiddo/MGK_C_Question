#include <stdio.h>
int arr[100],k;
int search(int right){
	int left=0,middle;
	while(left<=right){
		middle=(left+right)/2;
		if (arr[middle]<k) left=middle+1;
		else if (arr[middle]>k) right=middle-1;
		else return 1;
	}
	return 0;
}
int main(){
    int n,i;
    scanf("%d",&n);
    
    for (i=0;i<n;i++) scanf("%d",&arr[i]);
    
    scanf("%d",&k);
    printf("%d",search(k));
}
