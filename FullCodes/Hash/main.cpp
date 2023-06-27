#include <iostream>
#include "chainhash.h"    
using namespace std;

int main()
{
    ChainHash<string, int> myhash;   // Se crea un objeto "myhash" de tipo "ChainHash" que almacena pares de valores de tipo "string" y "int".

    // Se insertan varios pares clave-valor en la tabla hash utilizando el método "insert" de la plantilla "myhash".
    myhash.insert(make_pair<string,int>("luis", 20));
    myhash.insert(make_pair<string,int>("sara", 21));
    myhash.insert(make_pair<string,int>("jorge", 19));
    myhash.insert(make_pair<string,int>("antonia", 16));
    myhash.insert(make_pair<string,int>("josimar", 19));
    myhash.insert(make_pair<string,int>("ximena", 19));
    myhash.insert(make_pair<string,int>("criscrack", 20));
    myhash.insert(make_pair<string,int>("alejandro", 19));   
    myhash.insert(make_pair<string,int>("Wakaru", 13));
    myhash.insert(make_pair<string,int>("ximena", 19));
    myhash.insert(make_pair<string,int>("Bocchi", 15));
    myhash.insert(make_pair<string,int>("Diego",15));
    myhash.insert(make_pair<string,int>("jose", 19));
    myhash.insert(make_pair<string,int>("Milloshy", 18));
    myhash.insert(make_pair<string,int>("Makaku", 21));

    cout<<"Capacity:"<<myhash.bucket_count()<<endl;   // Se imprime la capacidad de la tabla hash utilizando el método "bucket_count".
    for(int i=0;i<(int)myhash.bucket_count();i++){    // Se recorren los cubos de la tabla hash utilizando un ciclo "for".
        cout<<"bucket "<<i<<" contains "<<myhash.bucket_size(i)<<": ";   // Se imprime la cantidad de elementos almacenados en cada cubo utilizando el método "bucket_size".
        for(auto it = myhash.begin(i); it != myhash.end(i); ++it)   // Se recorren los elementos almacenados en cada cubo utilizando un iterador que va desde el inicio del cubo hasta su fin, utilizando los métodos "begin" y "end" de la plantilla "myhash".
            cout<<" ("<<(*it).first<<","<<(*it).second<<") ";   // Se imprime la clave y valor de cada elemento utilizando el operador de indirección (*it) y la función "first" y "second" para acceder a la clave y valor respectivamente.
        cout<<endl;   // Se imprime un salto de línea para separar la información de cada cubo.
    }
    return 0;
}

