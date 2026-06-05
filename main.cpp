#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout<<"Ingrese su nombre para bienvenida personalizada: ";
    getline(cin, name);
    cout<<endl<<"Hola, "<<name<<" Bienvenido/a al sistema del grupo #10"<<endl;
    cout << "\n========================================" << endl;
    cout << "              INTEGRANTES" << endl;
    cout << "========================================" << endl;
    cout << "* Manuel Ruiz     - C.I: V-30.595.959" << endl;
    cout << "* Javier Tovar    - C.I: V-30.555.735" << endl;
    cout << "* Wilker Pardo    - C.I: V-28.247.132" << endl;
    cout << "* Yuliani Mota    - C.I: V-30.645.387" << endl;
    cout << "========================================" << endl;

    return 0;
}