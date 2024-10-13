#include <iostream>
using namespace std;

struct node{
    int clave;
    node* siguiente;
};

int main(){
    int i, N, M; // N: número de personas, M: número de saltos
    node *t, *x; // t: nodo temporal, x: nodo a eliminar
    cin >> N >> M;

    t = new node();
    t ->clave = 1; // Inicializamos el primer nodo
    x = t; // x apunta al primer nodo

    // Agregar todos los nodos requeridos a la lista hasta N
    for(i = 2; i <= N; i++){
        t -> siguiente = new node(); // Creamos un nuevo nodo
        t = t -> siguiente; // Avanzamos al siguiente nodo
        t -> clave = i; // Asignamos la clave al nodo
    }
    t -> siguiente = x; // El último nodo apunta al primer nodo

    // Mientras haya más de un nodo en la lista
    while(t != t ->siguiente){
        for(i = 1; i < M; i++){
            t = t -> siguiente; // Avanzamos M nodos
        }
        x = t -> siguiente; // x apunta al siguiente nodo
        t -> siguiente = x -> siguiente; // El nodo anterior apunta al siguiente nodo
        delete x;
    }
    cout << "El ganador es: " << t -> clave << endl;
    delete t;

    return 0;
}