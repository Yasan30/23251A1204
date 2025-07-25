#include<stdio.h>
#include "header.h"
void main(){
printf("I am in main");
printf("Calling hello");
hello();
printf("Calling add");
add(2,3);

printf("back in main");
}
