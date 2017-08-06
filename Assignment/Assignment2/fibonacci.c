#include<stdio.h>

int fibonacci(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("Fibonacci series\n");
    printf("%d\n", fibonacci(n-1));       
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
