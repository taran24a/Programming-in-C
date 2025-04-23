// multiple decalaring problems using pointers
#include<stdio.h>
typedef int * pointer;
int main(){
    int z =2,y =3;
    // int *x,a; // initializing x and a together doesnt mean the both are pointers
    // int* x and int a;
    // we cant declare multiple pointers in a single line

    // we can solve this using typedef


    pointer a = &z, b = &y; // a and b are pointers to int. They are initialized to the addresses of z and y respectively.
    printf("%p\n",a); // %p is used to print a pointer value. The pointer value is stored in a.
    printf("%p\n",b); // %p is used to print a pointer value. The pointer value is stored in b.

    return 0;



}