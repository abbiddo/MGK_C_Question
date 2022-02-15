#include <stdio.h>
#include <string.h>       

void push(int a);           
int pop();
int top();
int bottom();

int S[10000];
int i = 0;

int main() {
	int n,pn,j;
	char a[10] = { 0, }, num[10000] = { 0, };

	scanf("%d", &n);          

	for (j = 0; j < n; j++) {
		scanf("%s", a);        
	
		if (!(strcmp(a,"push"))) {                                  
			scanf("%d", &pn);                                       
			push(pn);                                              
		}
		else if (!(strcmp(a, "pop"))) printf("%d\n", pop());    
		else if (!(strcmp(a, "top"))) printf("%d\n", top());     
		else if (!(strcmp(a, "bottom"))) printf("%d\n", bottom());     
	}
}

void push(int a) {                                                   
	S[i++] = a;                         
}

int pop() {           
	if (i == 0) return -1;              
	return S[--i];                      
}

int bottom(){
	return S[0];
}

int top() {
	if (i == 0) return -1;       
	return S[i-1];                     
}
