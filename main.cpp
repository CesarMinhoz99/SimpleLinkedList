#include <iostream>

// Definindo a estrutura do nó
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Classe para a Lista Ligada
class LinkedList {
private:
    Node* head;

public:
    // Construtor
    LinkedList() : head(nullptr) {}

    // Função para adicionar um nó no início da lista
    void addNode(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Função para imprimir a lista
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Exemplo de uso da lista ligada
    LinkedList lista;

    // Adicionando elementos
    lista.addNode(3);
    lista.addNode(7);
    lista.addNode(1);

    // Imprimindo a lista
    lista.printList();

    return 0;
}
