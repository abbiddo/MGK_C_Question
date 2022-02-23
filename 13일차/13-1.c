#include <stdio.h>
int n,arr[100][100];
int main(){	
	scanf("%d",&n); 
	
	int i,j,k;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf("%d",&arr[i][j]);
		
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			for (k=0;k<n;k++)
				if (arr[i][k]+arr[k][j]==2){
					arr[i][j]=1;
					break;
				}
				
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			for (k=0;k<n;k++)
				if (arr[i][k]+arr[k][j]==2){
					arr[i][j]=1;
					break;
				}
				
	for (i=0;i<n;i++){
		for (j=0;j<n;j++) printf("%d ",arr[i][j]);
		printf("\n"); 
	}
}
