/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std; 
float desempenho(int T,int D){
    float r=(float)D/T; 
       return r;
    }

int main(){
    int N; 
    while(cin>>N){ 
    int i=0;
    float melhor_resultado=-1;
        while(i<N){
            int t,d;
            cin>>t>>d; 
            if(desempenho(t,d)>=melhor_resultado){
                melhor_resultado=desempenho(t,d);
                cout<<i+1;
                i++;
            }else i++; 
            
}
}
}