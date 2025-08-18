#include<stdio.h> 

int main(){

int a;
int b;

printf("Enter the value of a : ");
scanf("%d" , &a);

printf("Enter the value of b : ");
scanf("%d" , &b);

if(a <= b){
printf("a is smallest.\n");
}
else{
printf("b is smallest.\n");
}

return 0;
}
