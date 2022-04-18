#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    int n1, n2, n3;

    cout<<"Digite o primeiro numero: "<<endl;
    cin>>n1;

    cout<<"Digite o segundo numero: "<<endl;
    cin>>n2;

    cout<<"Digite o terceiro numero: "<<endl;
    cin>>n3;

     if (n1 > n3) {
        int cre = n3;
        n3 = n1;
        n1 = cre;
    }
    if (n1 > n2) {
        int cre = n2;
        n2 = n1;
        n1 = cre;
    }
    if (n2 > n3) {
        int cre = n3;
        n3 = n2;
        n2 = cre;
    }
     cout<<"Na ordem crescente os numero sao: "<<n1<<endl<<n2<<endl<<n3<<endl;
}