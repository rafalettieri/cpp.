#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    int a;
    float nota, notamaior= 0, notamenor = 10;
    double soma = 0;

     cout << "De quantos alunos voce quer saber a media: ";
     cin >> a;

     for (int i = 1; i <= a; i++) {
        cout<<"digite a nota: \n";
        cin >>nota;
        soma = soma + nota;
        
        if(nota > notamaior){
            notamaior = nota;

        }
        if (nota < notamenor){
            notamenor = nota;
        }
     }
    
     double media =soma /a;
    cout<< "A soma das notas: " << soma << endl;
    cout<< "A media das notas: "<< media << endl;
    cout<< "Menor nota:  "<< notamaior << endl;
    cout<< "Maior nota:  "<< notamenor << endl;

}
