# include <iostream>

using namespace std;

int main(){
	
	//TIPO;
	//TIPO NOME = VALOR;
	
	int vidas=0; //10, 25
	char letra ='B'; //'B'
	double decimal=5.2; //2,5
	float decimal2=5.2; //
	bool vivo=true; //true=verdadeiro / false=falso
	string nome="Bruno"; //"bruno"
	
	cout << "Digite o numero de vidas";
	cin >> vidas;
	cout << "Digite uma letra";
	cin >> letra;
	cout << "Dinheiro ";
	cin >> decimal;
	cout << "Digite seu nome";
	cin >> nome;
	
	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";
	
	
	return 0;
}