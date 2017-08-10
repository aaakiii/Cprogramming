#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXLINE 100

extern int getLine(char[], int);
extern int reverse(char[], int);

int main(){

// Excercise 1

    int c;
    c = getchar();
    while(c != EOF){
  
        putchar(c);
        c = getchar();    
    }

// Excercise 2

    char linea[] = {'a', 'b', 'c','d'};
    printf("Ex.2 %d", getLine(linea, 5));

    
// Excercise 3
    while(getLine(linea, 256) != EOF){
        printf("%s\n", linea);
    }

    while((c = getchar()) != EOF)
        printf("you typed'%c'\n", c);

// Excercise 4
    char lineB[100];
    int x, y;
    double sum, sumsq;
    double mean, stdev;

    sum = sumsq = 0.0;
    y = 0;
    while(getLine(lineB, 100) != EOF){
        x = atoi(lineB);
        sum = sum + x;
        sumsq = sumsq + x*x;
        y++;
    }
    mean = sum/y;
    stdev = sqrt((sumsq - sum*sum/y)/y-1);

    printf("mean: %f\n", mean);
    printf("std.dev. : %f\n", stdev);



// Excercise 5  
    double balance = 0.0;
    char lineC[MAXLINE], lineD[MAXLINE];
    while(getLine(lineC, MAXLINE) > 0){
        getLine(lineD, MAXLINE);
        if(strcmp(lineC, "deposit") == 0){
            balance += atof(lineD);
        }else if(strcmp(lineC, "check") == 0){
            balance -= atof(lineD);
        }else{
            printf("bad data line: not\"check\" or \"deposit\"\n");
            continue;
        }
        printf("balance: %.2f\n", balance);
    }

// Excercise 6

    int w;
    while((w = getchar())!= EOF){
        printf("character %c has value %d\n", c, c);
    }

// Excercise 7
    char lineE[100];
    int len;
    while((len = getLine(lineE, 100)) != EOF){
        reverse(lineE, len);
        printf("%s\n", lineE);
    }
    return 0;

}


int getLine(char line[], int max){

    int nch = 0;
    int c;
    max = max -1;
    while((c = getchar()) != EOF){
        if(c =='\n'){
            break;
        }
        if(nch < max){
            line[nch] = c;
            nch = nch + 1;
        }
    }

    if(c == EOF && nch == 0){
        return EOF;
    }
    line[nch] = '\0';
    return nch;
}

int reverse(char string[], int len){
    int i;
    char tmp;
    for(i = 0; i < len/2; i++){
        tmp = string[i];
        string[i] = string[len-i-1];
        string[len-i-1] = tmp;
    }
    return 0;

}
