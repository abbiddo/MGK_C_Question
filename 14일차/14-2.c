#include <stdio.h>
int arr[101][101];
int num[10000][2];
int num2[10000][2];
int n,m,c=1,cc=0;

int sear(int i, int j){
	int k; 
	for (k=0;k<cc;k++)
		if (num[k][0]==i && num[k][1]==j) return 0;
	return 1;
}

int change(int i, int j){
	if (i<n-1 && arr[i+1][j]!=0) {
		if (arr[i+1][j]==1) arr[i+1][j]+=arr[i][j];
		else arr[i+1][j]=arr[i+1][j]>arr[i][j]+1?arr[i][j]+1:arr[i+1][j];
		if (sear(i+1,j)){
			num[cc][0]=i+1;
			num[cc][1]=j;
			cc++;
		}
	}
	if (i>0 && arr[i-1][j]!=0) {
		if (arr[i-1][j]==1) arr[i-1][j]+=arr[i][j];
		else arr[i-1][j]=arr[i-1][j]>arr[i][j]+1?arr[i][j]+1:arr[i-1][j];
		if (sear(i-1,j)){
			num[cc][0]=i-1;
			num[cc][1]=j;
			cc++;
		}
	}
	if (j<m-1 && arr[i][j+1]!=0) {
		if (arr[i][j+1]==1) arr[i][j+1]+=arr[i][j];
		else arr[i][j+1]=arr[i][j+1]>arr[i][j]+1?arr[i][j]+1:arr[i][j+1];
		if (sear(i,j+1)){
			num[cc][0]=i;
			num[cc][1]=j+1;
			cc++;
		}
	}
	if (j>0 && arr[i][j-1]!=0) {
		if (arr[i][j-1]==1) arr[i][j-1]+=arr[i][j];
		else arr[i][j-1]=arr[i][j-1]>arr[i][j]+1?arr[i][j]+1:arr[i][j-1];
		if (sear(i,j-1)){
			num[cc][0]=i;
			num[cc][1]=j-1;
			cc++;
		}
	}
	arr[i][j]=0;
	return 0;
}

int maze(){
	int i;
	for (i=0;i<c;i++)
		change(num2[i][0],num2[i][1]);
		
	for (i=0;i<cc;i++){
		num2[i][0]=num[i][0];
		num2[i][1]=num[i][1];
	}
	
	return 0;
}

int main(){
	int i,j;
	scanf("%d %d",&n,&m);	
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&arr[i][j]);
		
	for (i=0;i<n*m;i++){
		if (arr[n-1][m-1]!=1){
			printf("%d",arr[n-1][m-1]);
			return 0;
		}
		maze();
		c=cc;
		cc=0;
	}
}
