/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 7

int main(){
    int L[N]={6,1,8,10,15,4,2};
    int i,j,pos_menor;
    for(i=0;i<N;i++){
        pos_menor=i;
        for(j=i+1;j<N;j++){
            if(L[j]<L[pos_menor]) pos_menor=j;
        }
        int temp=L[i];
        L[i]=L[pos_menor];
        L[pos_menor]=temp;
    }
    for(i=0;i<N;i++)printf("%d ",L[i]); 
    
}
