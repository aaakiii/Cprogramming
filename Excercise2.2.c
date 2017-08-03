#include<stdio.h>

int main(){

//2-2
int MAXLINE = 1000;

char line[MAXLINE];
int c, i;
i = 0;
while(i < MAXLINE -1){
if((c=getchar()) == EOF)
	break;
line[i++] = c;
if(c == '\n')
	break;
}

line[i] = '\0';

printf("%s\n", line);

return 0;

}

