import java.util.*;

public class Carro {
    String modelo;
    int ano; 
    float velocidade;
    float aceleracao; 
    boolean seguranca = true; 
    float fuel = 50; 
    float vazao = 0.5f; 
    float acelerar(float time){
      velocidade = velocidade + aceleracao*time;  
    return velocidade; 
    }
    float frear(float novaVelocidade){
    if(novaVelocidade<velocidade) velocidade = novaVelocidade; 
    return velocidade; 
    }
   float reduceFuel(float time){
    fuel = fuel - time*vazao; 
    if(fuel<=0) fuel = 0; 
    return fuel; 
  }
    boolean controleVelocidade(){
    return velocidade <=120;  
  }
  void showInfo(){
    System.out.println("Informações do veículo: "); 
    System.out.println("Ano de fabricação: " + ano); 
    System.out.println("Modelo: " + modelo);
    System.out.println("Sua velocidade é: " + velocidade);
    if(!controleVelocidade()) System.out.println("Reduza imediatamente"); 
    if(fuel<=0)System.out.println("Abasteça imediatamente");
    else System.out.println("Nível de combustível: "+ fuel + "L"); 
  
  }
    public static void main(String[] args) {
    Carro ferrari = new Carro();
    ferrari.modelo = "Ferrari F40";
    ferrari.velocidade = 50; 
    ferrari.ano = 1975;
    ferrari.aceleracao = 10 ;
    ferrari.acelerar(15); 
    ferrari.frear(150); 
    ferrari.reduceFuel(120); 
    ferrari.showInfo(); 
    } 
}
