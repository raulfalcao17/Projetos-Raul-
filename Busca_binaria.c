/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 9

int main(){
    int L[N]={7,9,11,12,23,24,28,30,31};
int i=0;
int achei=0;
int k=28;
int inicio=0;
int fim=N-1;
int meio;
while(inicio<=fim){
    meio = (inicio+fim)/ 2;
    if(L[meio]==k){
        achei = 1;
        break; 
    }else if(L[meio]<k){
        inicio=meio+1; 
    }else {
        fim = meio - 1; 
    }
}
   printf("%d ",achei); 
}
