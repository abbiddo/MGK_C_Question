#include <stdio.h>
#include <stdlib.h>
typedef struct time{
	int s,f;
}time;

int cmp(const void *a, const void *b){
	time *x=(time *)a;
	time *y=(time *)b;
	if (x->f==y->f) return x->s > y->s;
	return x->f > y->f;
}

int main() {
	int n,m=0,ff=0,i;
	scanf("%d",&n);
	time*t=(time *)calloc(n,sizeof(time));
  	
	for (i=0;i<n;i++) scanf("%d %d",&t[i].s,&t[i].f);
	
	qsort(t,n,sizeof(time),cmp);

    for(i=0;i<n;i++)
	    if(t[i].s>=ff){
	        ff=t[i].f;
			m++;
	    }
	    
    printf("%d",m);
}
