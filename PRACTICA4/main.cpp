#include<string.h>
#include <iostream>
#include<map>
#include<vector>
#include<red.h>
#include<queue>

using namespace std;

int main(){
    red enrutadores;
    enrutadores.modificacion1("B",1);
    enrutadores.modificacion1("C",4);
    enrutadores.modificacion2("A");

    enrutadores.modificacion1("A",1);
    enrutadores.modificacion1("C",2);
    enrutadores.modificacion2("B");

    enrutadores.modificacion1("A",4);
    enrutadores.modificacion1("B",2);
    enrutadores.modificacion2("C");

    enrutadores.agregarEnrutador("D","A",2);
    enrutadores.modificacion2("D");

    cout<<"probando"<<endl;
    return 0;
}
