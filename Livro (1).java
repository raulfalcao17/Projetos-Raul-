public class Livro {
  String titulo;
  String autor; 
  int paginas; 
  String refNumber; 
  int borrowed;
  public Livro(String title,String author,int pages){
  titulo = title;
  autor = author;
  paginas = pages; 
  refNumber = ""; 
}
public void printAutor(){
  System.out.println("Foi escrito por " + autor); 
}
public void printTitulo(){
  System.out.println("O nome é " + titulo); 
}
public void borrow(int times){
  borrowed = times;
}
public int changeBorrow(){
  borrowed=borrowed+1; 
  return borrowed; 
}
public void printDetails(){
  if (refNumber.length()!= 0){
  System.out.println("Titulo,autor,páginas,emprestado,numero de referencia: "); 
  System.out.println(titulo + ", " + autor + ", " + paginas + ", " +borrowed+ ", " + refNumber); 
}
else{
  System.out.println("Titulo,autor,páginas,emprestado,numero de referencia: "); 
  System.out.println(titulo + ", " + autor + ", " + paginas + ", " + borrowed+ ", "+  "ZZZ"); 
}
}
public void setRefNumber(String ref){
  if(ref.length()>=3){
  refNumber = ref; 
}
else{
  System.out.println("ERROR");
}
}
  public String getRefNumber(){
    return refNumber;   
  }
}
