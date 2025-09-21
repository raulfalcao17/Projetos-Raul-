/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//função que conta digitos
int conta_digitos(int N){
    int D=0; 
    while(N>=10){
        N=N/10; 
        D++; 
    }
    D++; 
    return D; 
    
}
int main(){
    int n; 
    scanf("%d",&n);
    int resultado=conta_digitos(n);
    printf("%d tem %d digitos",n,resultado); 
    
}
