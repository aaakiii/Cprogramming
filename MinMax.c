
#include <stdio.h>
#include <limits.h>
#include <float.h>

//sizeof()
//
//

int main() {
 
 printf("The max value you can store in(int) variable is %d\n", INT_MAX);
 printf("The min value you can store in(int) variable is %d\n", INT_MIN);

 printf("The min value you can store in(signed char) variable is %d\n", SCHAR_MIN);
 printf("The max value you can store in(signed char) variable is %d\n", SCHAR_MAX);
 printf("The max value you can store in(unsigned char) variable is %d\n", UCHAR_MAX);
 printf("Max value of char : %lu\n", sizeof(char));

 printf("The max value you can store in(short) variable is %d\n", SHRT_MAX);
 printf("The min value you can store in(short) variable is %d\n", SHRT_MIN);

 printf("The max value you can store in(long) variable is %ld\n", LONG_MAX);
 printf("The min value you can store in (long) variable is %ld\n", LONG_MIN);    

 printf("Hello, World\n");    
 return 0;
}

