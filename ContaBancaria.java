import java.util.*;
// programa criado para aplicar os conhecimentos iniciais vistos 
// na aula de Programação Orientada a Objetos (15/9/2025) 
public class ContaBancaria {
           String titular; 
           int numero; 
           double saldo;
  double depositar(double amountplus){
    saldo = saldo + amountplus;
    return saldo; 
  }
  void sacar(double amountminus){
     if(saldo>=amountminus) saldo = saldo - amountminus; 
     else System.out.println("Saldo insuficiente.Tente outra quantia"); 
  }
  void exibirSaldo(){
   System.out.println("Seu saldo é: " + saldo); 
  }
  public static void main(String[] args){
      ContaBancaria conta1 = new ContaBancaria();
      conta1.titular = "RAUL";
      conta1.numero = 579948; 
      conta1.saldo = 345; 
      conta1.depositar(30.0); 
      conta1.sacar(50);
      conta1.exibirSaldo(); 
}
}
