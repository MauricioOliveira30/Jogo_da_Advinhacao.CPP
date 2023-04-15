#include <iostream>
#include <locale>
#include<cstdlib>
#include <ctime>

using namespace std;
int main()
{

 setlocale(LC_ALL, "Portuguese");
   srand(time(NULL));
  const int NUMERO_SECRETO = rand()%100;
  cout << "*********************************" << endl;
 cout << "Bem-Vindos ao jogo da advinha��o" << endl;
 cout << "*********************************" << endl;
 cout<<"Escolha o seu n�vel de dificuldade"<<endl;
 cout<<"F�cil(F),M�dio(M) ou Dif�cil(D)";
 

 
 char dificuldade;
 
 cin>>dificuldade;
 int numero_de_tentativas;
 if(dificuldade=='F'){
  numero_de_tentativas=15;
 }else if(dificuldade=='M'){
  numero_de_tentativas=10;
 }else{
  numero_de_tentativas=5;
 }
 
 
 
bool nao_acertou=true;
 
 int tentativas=0;
 double pontos=1000.00;
 for(tentativas=1;tentativas<=numero_de_tentativas; tentativas++){
  int chute;
  cout<<"Tentativa "<<tentativas<<endl;
 
 
  
  
  cout << "Qual o valor do seu chute?";
 cin >> chute;
 bool acertou = (chute == NUMERO_SECRETO);
bool maior = (chute > NUMERO_SECRETO);
 double pontos_perdidos=abs(chute-NUMERO_SECRETO)/2.0;
 pontos-=pontos_perdidos;
 if (acertou)
 {
  cout << " Parab�ns! Voc� acertou o n�mero secreto! que � " <<NUMERO_SECRETO<< endl;
 nao_acertou=false;
 break;
 }
 else if (maior)
 {
  cout << "Seu chute foi maior que o n�mero secreto" <<"pontos."<< endl;
 }
 else
 {
  cout << "Seu chute foi menor que o n�mero secreto" << endl;
  }

 }
 cout<<"Fim de Jogo!!"<<endl;
 if(nao_acertou){
 cout<<"Voc� perdeu!!! Tente novamente! O n�mero secreto � "<<NUMERO_SECRETO<<endl;
 }else{
 cout<<"Voc� acertou o n�mero secreto em "<<tentativas<<" tentativas"<<endl;
 cout.precision(2);
 cout<<fixed;
 cout<<"Sua pontua��o foi de "<<pontos;
  
 }
 return 0;
}