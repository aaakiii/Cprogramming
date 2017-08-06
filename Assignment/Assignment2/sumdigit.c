#include<stdio.h>

int sumdigit(int i);
int main(){
    int i;
    scanf("%d", &i);
    printf("%d\n", sumdigit(i));
}
int sumdigit(int i){
    if(i < 10){
        return i;
    }else{
        return i%10 + sumdigit(i/10);
    }
}
