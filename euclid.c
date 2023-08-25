#include <stdio.h>
#include <time.h>
int main(){
    int a, b, r;
    printf("\nEnter the first number:");
    scanf("%d", &a);
    printf("\nEnter the second number:");
    scanf("%d", &b);
    clock_t t;
    t = clock();

    if(a<b){
      int temp = a;
        a= b;
        b= temp;
    }
  while(b!=0){
  r = a%b;
  a=b;
  b=r;
  }
  printf("GCD is %d\n", a);
t = clock-t;
printf("\n execution time in seconds: %f\n", ((double)t)/CLOCKS_PER_SEC);

}

//https://docs.google.com/spreadsheets/d/1kN8Ld-QHlB4Hy420_5VU6AFx5QTzSENmDzFVmwt1W7I/edit?usp=sharing