#include <iostream>
#include <cstring>
using namespace std;
void troca(int a, int b);
void vetor(int vetor[], int tamanho);
int dobro(int *ptrd);
int contador(int* pontCont, string palavraF);
void inverterString(char* str);

int main(){
    char palavraI[100];
    int x,y,dobrador, cont;
    int vector[]={1,2,3,4,5};
    int tamanho=5;
    cout << "Digite dois valores: ";
    cin >> x >> y;
    troca(x,y);
    vetor(vector, tamanho);
    cout << "Insira um numero para ser digitado: ";
    cin >> dobrador;
    cout << "O dobro do numero digitado eh: " << dobro(&dobrador) << endl;
    cout << endl;
    cout << "Insira uma palavra/frase: ";
    cin >> palavraF;
    cout << "A quantidade de vogais da palavra eh: " << contador(&cont, palavraF) << endl;
    cout << endl
         << "Insira uma palavra para ser invertida: ";
    cin >> palavraI;
    inverterString(palavraI);
    cout << "Palavra invertida: " << palavraI << endl;

}
void troca(int a, int b){
    int *ptr = &a;
    *ptr = *ptr + b;
    b = *ptr - b;
    *ptr = *ptr - b;
    cout << "Valores trocados: ";
    cout << a << " " << b << endl;
}
void vetor(int vetor[], int tamanho){
    int *ponteiro = vetor;
    for(int i=0;i<tamanho;i++){
        cout << "Elemento" << i << ": " << *ponteiro << endl;
        ponteiro++;
    }
}
int dobro(int* ptrd){
    *ptrd *= 2;
    return *ptrd;
}
int contador(int* pontCont, string palavraF){
    int i=0,conta=0;
    while(palavraF[i]!='\0'){
        if(palavraF[i]=='A'|| palavraF[i]=='a'){
            conta++;
        }
        if(palavraF[i]=='E'|| palavraF[i]=='e'){
            conta++;
        }
        if(palavraF[i]=='I'|| palavraF[i]=='i'){
            conta++;
        }
        if(palavraF[i]=='O'|| palavraF[i]=='o'){
            conta++;
        }
        if(palavraF[i]=='U'|| palavraF[i]=='u'){
            conta++;
        }
        i++;
    }
    *pontCont= conta;
    return *pontCont;
} 
void inverterString(char* str){
    int length =  strlen(str);
    char* inicio = str;
    char* fim = str + length - 1;

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}
