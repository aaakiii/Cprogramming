#include<stdio.h>

int bunnies(int n);
int main(){
    int n;
    scanf("%d", &n);
    printf("Bunny ears are :");
    printf("%d\n", bunnies(n));
}

int bunnies(int n){
    if(n == 0){
        return 0;
    }else if((n % 2) == 0){
        return (3 + bunnies(n-1));
    }else if((n %2) != 0){
        return (2 + bunnies(n-1));
    }
    return 0;
}
