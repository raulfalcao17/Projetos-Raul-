/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
//descobrindo e^x 
//método 1 
int main(){
    int x; 
    scanf("%d",&x); 
    int N=100;
    double pot1=1;
    double num1=1; 
    double den1=1; //colocar variavel do tipo "double" para não estourar os termos no for
    //double(por incrível que pareça) "armazena" mais que o long long int!
    for(int i=1;i<N;i++){
        num1=num1*x;
        den1=den1*i;
        double termo=(double)num1/den1; 
        pot1=pot1+termo; 
        
    }
    printf("%.15f\n",pot1); 
//método 2
   int y; 
   scanf("%d",&y);
   double pot_anterior=1.0; 
   double num2=y; 
   double den2=1; 
   int j=2; 
   double pot_atual=pot_anterior+(double)num2/den2; 
   double erro=1e-10; 
   while(fabs(pot_atual-pot_anterior)>erro){
       pot_anterior=pot_atual; 
       num2=num2*y; 
       den2=den2*j; 
       pot_atual=pot_atual+(double)num2/den2;
       j++; 
   }
   printf("%.15f\n",pot_atual);
    
}
