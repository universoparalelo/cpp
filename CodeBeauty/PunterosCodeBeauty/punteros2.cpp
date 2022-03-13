#include<iostream>
using namespace std;

void printNumber(int *numberPtr){
    cout << *numberPtr << endl;
}

void printLetter(char *letterPtr){
    cout << *letterPtr << endl;
}

void Print(void *ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << endl; break;
        case 'c': cout << *((char*)ptr) << endl; break;
    }
}

int main(){
    /*int number = 10;
    printNumber(&number);
    char letter = 'c';
    printLetter(&letter);*/
    int opc,numero;
    char carac;

    cout << "::MENU::" << endl;
    cout << "1. Char" << endl;
    cout << "2. Int" << endl;
    cout << "Elija una opcion: "; cin>>opc;

    switch(opc){
        case 1: cout << "Ingrese el caracter: "; cin>>carac;
                Print(&carac,'c');
                break;
        case 2: cout << "Ingrese el numero: "; cin>>numero;
                Print (&numero, 'i');
                break;
    }

    //Print(&letter, 'c');

    system("pause");
    return 0;
}