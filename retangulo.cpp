#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    int base1;
    int altura1;
    int base2;
    int altura2;
    float area1, area2;
    

    cout<<"Digite a base do primeiro retangulo em cm: "<<endl;
    cin>> base1;
    cout<<"Digite a altura do pirmeiro retangulo em cm: "<<endl;
    cin>> altura1;
    cout<<"Digite a base do segundo retangulo em cm: "<<endl;
    cin>> base2;
    cout<<"digite a altura do segundo retangulo: "<<endl;
    cin>>altura2;

    area1 = base1 * altura1;
    area2 = base2 * altura2;

    cout<<"area 1: "<<area1<<endl;
    cout<<"area 2: "<<area2<<endl;


}