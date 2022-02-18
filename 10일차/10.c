#include <stdio.h>
int main(){
    int A,B,V,i;
    float k;
    scanf("%d %d %d",&A,&B,&V);
    
    i=(V-A)/(A-B);
    k=(V-A)*1.0/(A-B)-i;
    
    if (k==0) printf("%d",i+1);
    else printf("%d",i+2);
}
