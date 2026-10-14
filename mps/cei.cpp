#include <iostream>

using namespace std; 

int main(){
    int option; 
    string putas[3] = {"Adriana", "Anna", "Hannah"};
    cout << "Selecciona una de las prestadoras de servicio:\n" << "Adriana(1)\nAnna(2)\nHannah(3)"; 
    cin >> option; 
    if(option == 1){
        cout << putas[option-1] << "  costo: 100$/night"; 
    }
    else if(option == 2){
        cout << putas[option-1] << "  costo: 190$/night"; 
    }
    else if(option == 3){
        cout << putas[option-1] << "  costo: 345$/night"; 
    }
    return 0; 
}