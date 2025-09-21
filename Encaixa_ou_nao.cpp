#include <string>
#include <iostream>
using namespace std; 
int tamanho(string s){
    int contador=0;
    while(s[contador]!=0){
        contador=contador+1; 
    }
    return contador; 
}

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string A,B;
        cin>>A>>B;
        int tamA=tamanho(A);
        int tamB=tamanho(B);
        if(tamB>tamA)cout<<"nao encaixa"<<endl;
        else {
            int encaixa=1;
            for(int j=0;j<tamB;j++){
                if(A[tamA-1-j]!=B[tamB-1-j]){
                    encaixa=0;
                    break; 
                }
            } 
                if(encaixa==1)cout<<"encaixa"<<endl;
                else cout<<"nao encaixa"<<endl; 
            
        }
    }
   
}