
#include <iostream>
#include<iomanip> 
using namespace std; 
int main(){
    int N; 
    while (cin>>N && N!=0){
    int n[N][N]; 
    for(int camada=0;camada<(N+1)/2;camada++){
        int valor=camada+1; 
        for(int i=camada;i<N-camada;i++){
            for(int j=camada;j<N-camada;j++){
                n[i][j]=valor;
            }
        }
    }
for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        if (j > 0) cout << " ";
        cout << setw(3) << n[i][j];
    }
    cout << endl;
}
}
} 