#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int multbytwo(int);
int factrial(int);
void printchars(int,int);
double celsius(double);
int randrange(int);

int main(){

    //Excercise 1
    int a[] = {1,2,3,4,5,6};
    int i, sum;
    sum = 0;
    int n = sizeof(a)/ sizeof(a[0]);
    for(i = 0; i < n; i++){
        sum = sum + a[i];
    }
    printf("%d\n", sum);

    // Excercise 2
    for(i = 1; i <= 10; i++){
        printf("%d\n", multbytwo(i));
    }

    // Excercise 3
    for(i = 1; i <= 10; i++){
        printf("%d  %d\n", i, i*i);
    }
    
    // Excercise 4
     printchars('x', 5);
        
    
    // Excercise 5
    for(i = 1; i <= 10; i++){
        printf("%d %ld\n", i, factrial(i));
    }

    // Excercise 6
    double f;
    for(f = -40; f <= 220; f = f +10){
        printf("%f\t%f\n", f, celsius(f));
    }

    // Excercise 7
    int b1, b2;
    int c[13];
    double sumb = 0;
    double sumsq = 0;
    int y = 0;
    double mean;
    double stdev;
    for(i = 2; i <= 12; i++){
        c[i] = 0;
    }
    for(i = 0; i < 100; i++){
        b1 = rand() % 6 + 1;
        b2 = rand() % 6 + 1;
        c[b1 + b2] = c[b1 + b2]+1;
        sumb = sumb + b1 + b2;
        sumsq = sumsq+(b1 + b2)*(b1 + b2);
        y++;
    }

    for(i = 2; i <= 12; i++){
        printf("%d: %d\n", i, c[i]);
   }
    printf("\n");
    mean = sumb/y;
    stdev = sqrt((sumsq - sumb * sumb / y)/(y-1));
    printf("average: %f\n", mean);
    printf("std.dev.:%f\n", stdev);

    
    // Excercise 8
    int x = 10;
    printf("%d\n", randrange(x));

    // Excercise 9
    int d1, d2;
    int b[13];
    for(i = 2; i <= 12; i++){
        b[i] = 0;
    }

    for(i = 0; i < 100; i++){
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;
        b[d1 + d2] = b[d1 + d2]+1;
    }

    for(i = 2; i <= 12; i++){
        printf("\n%d: %d\n", i, b[i]);
        printchars('*', b[i]);
    
    }

}
int multbytwo(int i){
    return i*2;
}

void printchars(int ch, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%c\n", ch);
    }
}

int factrial(int n){
    int i;
    int fact = 1;
    for(i = 2; i <= n; i++){
        fact = fact*i;
    }
    return fact;
}
double celsius(double f){
    return 5.0/9.0*(f -32);
}

int randrange(int n){
    return rand()%n +1;
}
