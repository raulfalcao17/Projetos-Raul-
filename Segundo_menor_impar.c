/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define N 8
int main()
{
    int L[N]={11,7,9,5,6,10,13,12};
    int mimpar=-1;
    int smimpar=-1; 
    int tmimpar=-1;
    int i;
    for(i=0;i<N;i++){
        if(L[i]%2==1){
            if(mimpar==-1||L[i]<mimpar){
                tmimpar = smimpar;
                smimpar=mimpar;
                mimpar=L[i]; 
            }
            else if(smimpar==-1||L[i]<smimpar){
                tmimpar=smimpar;
                smimpar=L[i]; 
            }
            else if(tmimpar==-1||L[i]<tmimpar){
                tmimpar = L[i]; 
            }
        }
    }
    printf("%d\n%d\n%d",mimpar,smimpar,tmimpar); 
}
