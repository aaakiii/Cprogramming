#include<stdio.h>
// Ex.1
void swap(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2  = temp;
}
// Ex.2
void passArray(int *arr){
    printf("%i\n", sizeof(*arr));
}

// Ex.3
void passArray3(int *arr, int x){
    
    for(int i= 0; i < x; i++){
        printf("Value of arr[%d] is: %d\n", i, *(arr+i));
    }
}

// Ex.4
void print_addr(int z){

    printf("The address is :%p\n", &z);
}

// Ex.5
int *new_integer(){
    int a = 10;
    return &a;
}

// Ex.6
void print_array(int *arr, int x){
    for(int i= 0; i < x; i++){
        printf("Value of arr[%d] is: %d\n", i, *arr);
        arr++;
    }
}


int main(){

int x = 10;
int y = 20;

swap(&x,&y);
printf("x: %d, y: %d\n", x,y);

int arr[]= {1,2,3,4,5};
passArray(&arr);

passArray3(&arr, sizeof(arr)/sizeof(arr[0]));
int z = 15;
print_addr(z);
printf("The address is :%p\n", &z);

printf("%d\n", *new_integer());
print_array(&arr, sizeof(arr)/sizeof(arr[0]));
return 0;
}
