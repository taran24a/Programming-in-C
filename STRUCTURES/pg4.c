// type def
#include <stdio.h>

typedef float realnumber; // typedef is used to create an alias for a data type. In this case, realnumber is an alias for float.
typedef int integer; // integer is an alias for int. This means that you can use realnumber and integer in place of float and int respectively in your code.
int main(){
    integer x;
    realnumber y = 2.142; // realnumber is used as an alias for float, so y is a float variable.

printf("%.2f\n",y);
    return 0;
}