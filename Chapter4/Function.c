#include<stdio.h>


 
int g; //global variable
extern int e;//extern other file can use it
static int s;//A static global variable or a function is "seen" only in the file it's declared in

void foo(){
    int a = 10;
    static int sa = 10;// A static variable inside function keeps its value between function calls(invocations)
    a += 5;
    sa += 5;
    printf("a = %d, sa = %d\n", a, sa);
}
int main(){
    int a; //local variable
   for(int i = 0; i < 10; i++){
    foo();
   }
    
    return 0;
}
