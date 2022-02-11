#include <stdio.h>
#include <string.h>
int main(){
	int i,answer=0;
	char word[100];
	scanf("%[^\n]s",&word);

	for (i=0;i<strlen(word);i++)
		if (word[i]!=word[strlen(word)-i-1]){
			answer=-1;
			break;
		}

	if (answer==0) printf("%s(은)는 회문입니다.",word);
	else printf("%s(은)는 회문이 아닙니다.",word);
}
