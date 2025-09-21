/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//Função que inverte 
int inverte(int N){
    int r=0;
    while(N>=10){
        r=10*r+N%10; 
        N=N/10; 
    }
    r=10*r+N; 
    return r; 
    
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d invertido é %d",n,inverte(n)); 
}
