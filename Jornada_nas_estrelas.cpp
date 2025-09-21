

#include <iostream>
using namespace std; 
 
int main() {
 int N;
 cin>>N;
  int C[N]; 
  for(int i=0;i<N;i++) {
     cin>>C[i]; 
  }
   int atacados=0; 
   int sitio = 0; 
   bool visitado[N] = {false}; 
 while(sitio>=0 && sitio<=N-1 && C[sitio]>0) {
     if(!visitado[sitio]){
         atacados = atacados + 1;
         visitado[sitio] = true; 
     }
     if (C[sitio] %2==0){
         C[sitio] = C[sitio] - 1;
         sitio = sitio -1 ;
    }else {
         C[sitio]=C[sitio]-1;
         sitio = sitio + 1;
     }
 }
     
     int soma=0;
     for(int j=0;j<N;j++) soma = soma + C[j];
     cout<<atacados<<" "<<soma<<"\n"; 
     
}