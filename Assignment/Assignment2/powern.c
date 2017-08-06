#include<stdio.h>

int powern(int x, int y);
int main(){
    int x, y;
    scanf("%d, %d", &x, &y);  
    printf("%d", powern(x, y));
}

int powern(int x, int y){    
    if(y == 0){
        return 1;    
    }else{
        return (x * powern(x, y-1));
    }

}
