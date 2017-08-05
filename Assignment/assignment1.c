#include<stdio.h>

int main(){

//Ex.1
printf("Hello, World\n");

//Ex.2
for(int i = 0; i < 10; i = i+2){
printf("%d\n", i);
}
//0,2,4,6,8


for(int i= 100; i>=0;i=i-7){
    printf("%d\n", i);
}
//100,93,86,79,72,65,58,51,44,37,30,23,16,9,2


for(int i = 1; i <= 10; i = i+1){
    printf("%d\n", i);
}
//1,2,3,4,5,6,7,8,9,10


for(int i = 2; i < 100; i = i*2){
    printf("%d\n", i);
}
//2,4,8,16,32,64

//Ex.3

for(int i =1; i <= 10; i++){
    int a = i*i;
    printf("%d\t, %d\n", i, a);
}

//Ex.4
for(int i = 1; i <= 10; i++){
    for(int j=1; j <= i; j++){
        printf("* ");
    }
    printf("\n");
}

return 0;
}
