/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std; 
int destino(int R1,int x1,int y1,int R2,int x2,int y2){
    int distancia;
    distancia=(x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    int diferenca=(R1-R2)*(R1-R2);
    if(R1>R2){
    if(distancia>diferenca)return 0;
    else return 1; 
} else return 0; 
} 
int main(){
    int R1,R2,x1,y1,x2,y2; 
    while (cin>>R1>>x1>>y1>>R2>>x2>>y2){
        int resultado= destino(R1,x1,y1,R2,x2,y2);
        if(resultado==1) cout<<"RICO"<<endl;
        else cout<<"MORTO"<<endl;
    }
    
}