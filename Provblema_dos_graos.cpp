/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
unsigned long long int potencia_de_2(int N){
if(N==0) return 1;
else return 2*potencia_de_2(N-1); 
}
int main(){
 int N;
 cin>>N;
 for(int i=0;i<N;i++){
     int x;
     cin>>x;
     unsigned long long int resultado = potencia_de_2(x) - 1; 
     unsigned long long int peso=resultado/12000;
     cout<<peso<<" kg"<<endl; 
 }
    
}
    
