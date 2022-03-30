#include <iostream>
#include <list>
using namespace std;

void pop_front(int vet[], int * qtd){
	for(int i = 0; i < *qtd - 1; i++)
		vet[i] = vet[i + 1];
	*qtd -= 1;
}
void push_back(int vet[], int * qtd, int value){
	vet[*qtd] = value;
	*qtd += 1;
}

void rodar(list<int> &lista){
	lista.push_back(lista.front());
	lista.pop_front();
}


void mostrar(list<int> &lista){
	for(int x : lista)
		cout << x << " ";
	    cout << "\n";
}
	

int main(){
	cout << "Digite o tamanho e quem começara com a espada:" << endl;
	int qtd = 0;
	scanf("%i", &qtd);
	
	int primeiro = 0;
	cin >> primeiro;
	
	list<int> lista;
	for(int i = 1; i <= qtd; i++)
		lista.push_back(i);

	while(lista.front() != primeiro)
		rodar(lista);
	
	mostrar(lista);
	while(lista.size() > 1){
		rodar(lista);
		lista.pop_front();
		mostrar(lista);
	}
	return 0;
}