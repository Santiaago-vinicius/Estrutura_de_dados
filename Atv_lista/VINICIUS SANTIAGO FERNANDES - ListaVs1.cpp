#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;
}Aluno;

Aluno lista[30];

int a = 0;


void incluirDesordenado(Aluno e){
    lista[a] = e;
    cout << e.nome << endl;
    cout << e.mat << endl;
    a = a+1;

}


//retorna a posicao do elemento procurado
int procura(int mat){

    int procurar;
    for(int i=0; i < a; i++){
        if(lista[i].mat == mat){
            procurar = i;
            break;
        }
    }
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos){
    cout << lista[pos].nome << endl;
    cout << lista[pos].mat << endl;

}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat){
    for (int i = 0; i < a; i++){
        if(lista[i].mat == mat){
            cout << lista[i].mat << endl;
            cout << lista[i].nome << endl;

        }else{
            cout << "nao foi encontrado" << endl;
        }
    }
}

//estratégia 1: colocar o ultimo elemento da lista na posição do elemento removido
void remover00(int mat){
    int i = procura(mat);
    lista[i] = lista[a-1];
    free(&lista[a--]);
    a--;

}

//estratégia 2: mover TODOS os elementos que estão APÓS  o elemento que deve ser removido UMA POSIÇÃO A FRENTE.
void remover01(int mat){
    int a = procura(mat);
	for (int i = a; i < b; i++)
	{
		lista[i] = lista[i+1];

	}
	free(&lista[b]);
	b--;
}

main(){
    int j;
	int d;
	int i;
	Aluno 1;
	Aluno 2;
	Aluno 3;
	a.nome = "Vinicius";
	a.mat = 21;

	b.nome = "Marcos";
	b.mat = 45;

	c.nome = "João";
	c.mat = 233;

	incluirDesordenado(a);
	incluirDesordenado(b);
	incluirDesordenado(c);

	procura(21);



	mostrar(21);

	consultar(45);
	remover00(45);
	remover01(21);

	return 0;


}



}
