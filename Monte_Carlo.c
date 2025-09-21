/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int total=1000000; 
    int dentro=0; 
    for(int i=0;i<total;i++){
    float x = -0.5 + (float)rand()/RAND_MAX;// rand gera numeros inteiros "aleatorios"
    float y = -0.5 + (float)rand()/RAND_MAX;
        if(x*x+y*y<0.25)dentro++; 
    }
    double pi=4*(double)dentro/total;
    printf("%.15f\n",pi); 
}
