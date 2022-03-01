#include<iostream>

using namespace std;

char menuOperaciones();
string calculadora(char);
bool checkNumber(string);
int tipoSistemaNumeracion(string);
int toDecimal(string, int);

int main(){
    string numero;
    char opcion;
    cout << endl <<"Ingrese un numero: ";
    cin >> numero;
    if(!checkNumber(numero)){
        cout << endl <<"Error: Numero invalido" << endl;
        return 0;
    }
    cout << endl <<"El numero ingresado es: " << numero << " " << nombreSistemaNumeracion(numero) << endl;
    cout << endl <<"Convertir a: " << endl << "1. Binario" << endl << "2. Octal" << endl << "3. Hexadecimal" << endl << "4. Decimal"  << endl << "5. Calculadora" << endl << "Opcion :";
    cin >> opcion;
    switch (opcion){
        toDecimal(numero, tipoSistemaNumeracion(numero));
        case '1':
            cout << "El numero en binario es: " << numero << endl;
            break;
        case '2':
            cout << "El numero en octal es: " << numero << endl;
            break;
        case '3':
            cout << "El numero en hexadecimal es: " << numero << endl;
            break;
        case '4':
            cout << "El numero en decimal es: " << numero << endl;
            break;
        case '5':
            cout << "Operacion deseada: " << endl;
            //calculadora(menuOperaciones(), numero);
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
    return 0;
}

bool checkNumber(string numero){
    for(int i = 0; i < numero.length(); i++){
        if((numero[i] < '0' || numero[i] > '9') ){
            if(numero[i] == 'A' || numero[i] == 'B' || numero[i] == 'C' || numero[i] == 'D' || numero[i] == 'E' || numero[i] == 'F' || numero[i] == 'a' || numero[i] == 'b' || numero[i] == 'c' || numero[i] == 'd' || numero[i] == 'e' || numero[i] == 'f'){
                continue;
            }
            return false;
        }
    }
    return true;
}

char nombreSistemaNumeracion(string numero){
    bool isBinary = true;

    for(int i = 0; i < numero.length(); i++){
        if( numero[i] > '1'){
            isBinary = false;
        }
        if(numero[i] == 'A' || numero[i] == 'B' || numero[i] == 'C' || numero[i] == 'D' || numero[i] == 'E' || numero[i] == 'F' || numero[i] == 'a' || numero[i] == 'b' || numero[i] == 'c' || numero[i] == 'd' || numero[i] == 'e' || numero[i] == 'f'){
            return 4;
        }
    }

    if(!isBinary){
        cout<< endl <<"Cual es su sistema de numeracion?"<<endl<<"1. Decimal"<<endl<<"2. Octal"<<endl<<"Opcion: ";
        int opcion;
                cin>>opcion;
                switch(opcion){
                    case 1:
                        return 1;
                    case 2:
                        return 2;
                    default:
                        cout<<"Opcion no valida"<<endl;
                }
    }else{
        cout<< endl <<"Cual es su sistema de numeracion?"<<endl<<"1. Decimal"<<endl<<"2. Binario"<<endl<<"3. Octal"<<endl<<"Opcion: ";
                int opcion;
                cin>>opcion;
                switch(opcion){
                    case 1:
                        return 1;
                    case 2:
                        return 2;
                    case 3:
                        return 3;
                    default:
                        cout<<"Opcion no valida"<<endl;
                }
    }

    return 0;

}

int toDecimal(string numero, int sistemaNumeracion){
    switch (sistemaNumeracion){
        case 1:
            return sistemaNumeracion;
            break;
        case 2:
            cout << "El numero en decimal es: " << numero << endl;
            break;
        case 3:
            cout << "El numero en decimal es: " << numero << endl;
            break;
        case 4:
            
            break;
    }
    return 0;
}

char menuOperaciones(){
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
}

string calculadora(char opcion, string numero1){
    string numero2;
    cout << "Ingrese su segundo numero: ";
    cin >> numero2;
    switch (opcion){
        case '1':
            cout << "Suma" << endl;
            break;
        case '2':
            cout << "Resta" << endl;
            break;
        case '3':
            cout << "Multiplicacion" << endl;
            break;
        case '4':
            cout << "Division" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
}