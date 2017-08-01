#include <stdio.h>

//#define identifier value
#define MAX_NUM 1024
#define NEWLINE '\n'
#define TRUE 1
#define FALSE 0


int main(){
//const prefix to declear constants with a specific type
 int i;
 i = 10 + 3 + MAX_NUM;
// const char NEWLINE = '\n';
 printf("%c", NEWLINE);
 printf("%d\n", 215u);
 printf("%ld\n", 30l);
 printf("%d\n", 011);
 printf("%lu\n", 201ul);
 printf("%d\n", 0xab);
 printf("%f\n", 3.1415);
 printf("%Lf\n", 31415E-5L);
 printf("%c\n", 'x');
 printf("%c\n", '\t');
 printf("%c\n", '\"');
 printf("%c\n", 'a');
 if(TRUE){
 	printf("this is true\n");
}
 
 return 0;
}
