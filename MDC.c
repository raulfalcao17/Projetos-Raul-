/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int a,b,p=2,mdc=1; 
    scanf("%d %d",&a, &b);
    int x=a,y=b; 
    while(a!=1 || b!=1){ //atenção para o "OU"!!!
        if(a%p==0 || b%p==0){
            if(a%p==0 && b%p==0)mdc=mdc*p; 
            if(a%p==0)a=a/p;
            if(b%p==0)b=b/p; 
        }else p++; 
    }
    printf("O MDC de %d e %d é %d",x,y,mdc);
    
} 
    


