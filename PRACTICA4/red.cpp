#include "red.h"

red::red()
{

}

void red::modificacion1(string clave, int valor){
    singleMap[clave]=valor;
}

void red::modificacion2(string clave2){
    conexiones[clave2]=singleMap;
    singleMap.clear();
}

void red::modificaciones(string nuevo, string listo, int costo, int opcion){
    map<string,int> temporal;
    map<string,int>::iterator itTemp;
    for(itOut=conexiones.begin();itOut!=conexiones.end();itOut++){
        if(itOut->first==listo){
            temporal=itOut->second;
            switch (opcion) {
            case 1:{
                temporal.insert(pair<string,int>(nuevo,costo));
                break;
            }
            case 2:{
                temporal.erase(nuevo);
                break;
            }
            case 3:{
                temporal[nuevo]=costo;
                break;
            }
            }
            conexiones[listo]=temporal;
            break;
        }
    }
}

void red::agregarEnrutador(string _nuevo, string _listo, int _costo){
    singleMap[_listo]=_costo;
    modificaciones(_nuevo,_listo,_costo,1);
}


