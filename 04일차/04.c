#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	int i=0,len=0;
	scanf("%[^\n]s",&word);
	len=strlen(word);
	
	if (len%2==0) printf("%c%c",word[len/2-1],word[len/2]);
	else printf("%c",word[len/2]);
}
