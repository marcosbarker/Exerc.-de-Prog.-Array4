#include <iostream>//manipula��o de fluxo de dados padr?o do sistema 
#include <cmath> //biblioteca para fun��o matem�cas
#include <iomanip> //manipula��o da apresenta��o e do processamento de dados (nessse codigo para limitar o num de caas decimais)
#include <locale> //biblioteca manipula��o de diversas conven�?es culturais do utilizador (nessse codigo para acentua��o)
using namespace std;

int main(int argc, char *argv[]){
setlocale(LC_ALL, ""); //setlocale <locale>	
bool ano_bissexto(int ano);   
int ano = 0;
   
   if(argc == 1 ){
   cout << "Digite o ano e saiba se � bissexto: ";
   cin >> ano;
      }else{
   ano = atoi(argv[1]);
   	}

   cout << "O ano " << ano << (ano_bissexto(ano) ? " Ano bissexto." : " Ano nao bissexto.") << endl; 
   }

	bool ano_bissexto(int ano){
    bool bissexto = false;

    if(ano < 1752)
		bissexto = false;
	else{
		
	if(ano % 400 == 0)
		bissexto = true;
	else{
    
	if(ano % 100 == 0)
		bissexto = false;
	else{
    
	if(ano % 4 == 0)
		bissexto = true;

		}	
	  }
    }

    return bissexto;
}



