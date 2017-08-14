#include<stdio.h>
#include<ctype.h>

#define SIZE 1000
int getch();
void ungetch(int);


int main(){

    int n,s,array[SIZE],getint(int *);
    for(n = 0; n < SIZE && getint(&array[n]) != EOF; n++){
    
        printf("storing in n = %d, getint %d\n", n, array[n]);
    }
    printf("storing in n = %d, getint %d\n", n, array[n]);

    for(s = 0; s <= n; n++){
        printf("%d", array[s]);
    }

    return 0;

}


int getint(int *pn){
    int c, sign;
    while(isspace(c =getch()))
        ;
    if(!isdigit(c) && c != EOF && c!= '+' && c!= '-'){
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1:1;
    if(c == '+' || c == '-'){
        c = getch();
    }

    for(*pn = 0; isdigit(c); c = getch()){
        *pn = 10 * *pn + (c-'0');
    }
    *pn *= sign;
    if(c != EOF)
        ungetch(c);
    return c;
}


#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(){
    return (bufp > 0) ? buf[--bufp] : getchar();

}

void ungetch(int c){
    if(bufp >= BUFSIZE)
        printf("ungetch: toomany characters\n");
    else
        buf[bufp++] = c;
}


