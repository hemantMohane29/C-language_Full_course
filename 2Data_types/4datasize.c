// Data type size in c language 
// int = 4
// char = 1
// float = 4
// double = 8 
// long = 4



#include<stdio.h>

int main(){

printf("int = %lu",sizeof(int));
printf("\nchar = %lu",sizeof(char));
printf("\nfloat = %lu",sizeof(float));
printf("\ndouble = %lu",sizeof(double));
printf("\nlong = %lu",sizeof(long));


int a;
char b;
float c;
double d;
long e;

printf("\nint = %lu",sizeof(a));
printf("\nchar = %lu",sizeof(b));
printf("\nfloat = %lu",sizeof(c));
printf("\ndouble = %lu",sizeof(d));
printf("\nlong = %lu",sizeof(e));
return 0;

}

