#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){
    cout<<"Escola Senai ""Euclides Facchini"" Votuporanga"<<endl;
    cout<<"Rafael souza Lettieri"<<endl;

    float c, f;
 
     cout << "Digite a temperatura em ºCelsius = ";
      cin>>c;
 
    f = (c *1.8 + 32);
 
    cout<<"a temperatura em ºF = " << f;
}