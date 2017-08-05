#include<stdio.h>

int main(){

//1.

int count = 0;
for(int i = 1; i <= 10; i++){
    if(i > 3){
        count++;
    }
}
printf("%d\n",count);


//2.
int i;
float sum = 0;
int x = 0;

for(i = 1; i <= 10; i++){
    sum = sum + i * i;
    x++;
}
printf("The average is %f\n", sum / x);

//3.

for(i = 1; i <= 10; i++){
    if(i % 2 == 0){
        printf("%d is even\n", i);
    }else{
    
        printf("%d is odd\n", i);
    }
}


//4.
int factrial = 1;
for(i = 1; i <= 7; i++){
    factrial = factrial * i;
    printf("%d, %d\n", i, factrial);
}

return 0;
}
