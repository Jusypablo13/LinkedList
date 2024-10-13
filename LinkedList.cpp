#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void addNode(Node* &head, int value){
    Node* newNode = new Node(); // Creamos un nuevo nodo en memoria
    newNode->data = value; // Asignamos el valor al nuevo nodo     
    newNode->next = nullptr; // El nuevo nodo apunta a nullptr porque es el último nodo

    if(head == nullptr){
        head = newNode; // Si la lista está vacía, el nuevo nodo es la cabeza
    } else {
        Node* temp = head; // Creamos un nodo temporal que apunta a la cabeza
        while (temp->next != nullptr){
            temp = temp->next; // Mientras el nodo temporal no sea el último nodo, avanzamos al siguiente nodo
        }
        temp->next = newNode; // Cuando llegamos al último nodo, el siguiente nodo es el nuevo nodo
    }
}

//Iteración mientras no encuentra un puntero nulo
void showList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* list = nullptr;
    addNode(list, 50);
    addNode(list, 4);
    addNode(list, 20);
    
    cout << "Values: " << endl;
    showList(list);

    return 0;
}
