/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 7

int main(){
    int L[N]={6,8,1,10,14,3,2};
    int i,j;
 for(i=0;i<N-1;i++){
     int trocas=0;
     for(j=0;j<N-1-i;j++){
         if(L[j]>L[j+1]){
             int temp=L[j+1];
             L[j+1]=L[j];
             L[j]=temp; 
             trocas=trocas+1; 
            }
     }
     if(trocas==0)break; 
}
for(i=0;i<N;i++)printf("%d ",L[i]); 
} 

    

