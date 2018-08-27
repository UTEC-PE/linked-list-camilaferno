#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
        int nodes;

        void print_reverse(Node<T>* head);

    public:
        List() : head(NULL), tail(NULL) {}; //constructor

        //Ver primer elemento
        T front(){
          if(head==NULL){
            return false;
          }
          else{
            return head->data;
          }
        };

        //Ver ultimo elemento
        T back(){
          if(head==NULL){
            return false;
          }
          else{
            Node<T>* Iter = head; //crear puntero que se va mover por los nodos
            while(Iter -> next){ //mientras exista un next
              Iter = Iter-> next; //se va moviendo por los nodos, iter termina en el ultimo
            }
            return Iter->data;
          }
        };

        //push front
        void push_front(T value){
          Node<T>* Tmp = new Node<T>; //Create node Tmp
          Tmp -> data=value;//tmp apunta al valor insertado
          if (head==NULL){ //lista vacia
            Tmp -> next=NULL; //next no apunta a nada
            head=Tmp; //Tmp se vuelve el primer valor
          }
          else{
            Tmp -> next=head; //El siguiente de Tmp(el valor) apunta al head (el primero que habia)
            head=Tmp; //Head apunta al nuevo valor
          }
        }

        //push back
        void push_back(T value){
          Node<T>* Tmp = new Node<T>; //Create node Tmp
          Tmp -> data=value; //tmp apunta al valor insertado
          if (head==NULL){ //lista vacia
            Tmp -> next=NULL; //next no apunta a nada
            head=Tmp; //Tmp se vuelve el primer valor
          }
          else{
              Node<T>* Iter = head; //crear puntero que se va mover por los nodos
              while(Iter -> next){ //mientras exista un next
                Iter = Iter-> next; //se va moviendo por los nodos, iter termina en el ultimo
              }
              Iter -> next=Tmp; //el next del iter(ultimo valor hasta ahora) sea tmp
              Tmp -> next=NULL; //el next de Tmp se vuelva NULL(ultimo valor)
          }
        };

        //pop_front (borrar el primer elemento)
        void pop_front(){
          Node<T>* Tmp = new Node<T>;
          delete head;
          Tmp = head -> next; //tmp apunta al siguiente de Head
          head -> next=NULL; //aislamos el head
          head = Tmp; //head se vuelve el siguiente
          nodes--;
          print();
        };

        //pop_back
        void pop_back(){
          Node<T>* Tmp = head;
          while(Tmp->next->next){ //Hasta el penultimo
            Tmp=Tmp->next; //Tmp es el penultimo nodo
          }
          delete tail; //borras el ultimo
          Tmp -> next = NULL; //haces que el next apunte a null para que se vuelva el ultumo
          nodes--;
          print();
        };

        //Position
        T get(int position){
          if(head==NULL){
            throw "Index out of range >:|";
          }
          else{
            if(position==0){
              return head -> data;
            }
            else{
              Node<T>* Tmp = head;
              int i = 0;
              while(Tmp){
                Tmp = Tmp -> next;
                i++;
                if(i==position){
                  return Tmp -> data;
                }
              }
            }
          }
          throw "Index out of range >:|";
        };

        //Juntar listas
        void concat(List<T> &other){
          Node<T>* Tmp = head;
          while (Tmp -> next){
            Tmp=Tmp -> next;
          }
          Tmp -> next=other.head;
          nodes += other.size();
        };

        //empty
        bool empty(){
          if(head==NULL){
            return true;
          }
          else{
            return false;
          }
        };

        //size
        int size(){
          int c = 0;
          if(head==NULL){ //si lista vacia
            return 0;
          }
          else{
            Node<T>* Iter = head; //crear puntero que se va mover por los nodos
            while(Iter -> next){ //mientras exista un next
              Iter = Iter-> next; //se va moviendo por los nodos, iter termina en el ultimo
              c += 1;
            }
            return c;
          }
        };

        //print
        void print(){
          if (head == NULL) {
            cout << "Lista vacia" << endl;
          }
          else {
            Node<T>* Tmp=head;
            while(Tmp){
              cout << Tmp -> data << " ";
              Tmp=Tmp -> next;
            }
          }
        }

        //Print Reverse
        void print_reverse(){
          if (head == NULL){
            cout << "lista vacia" << endl;
          }
          else{
            List<T>* listTmp = new List<T>; //Creando lista temporal vacia

            Node<T>* Tmp = head; //crear puntero que se va mover por los nodos
            while(Tmp){ //mientras exista un next
              listTmp -> push_front(Tmp->data);
              Tmp=Tmp -> next;
            }
            listTmp -> print();
            cout << endl;
          }
        };

        //Clear
        void clear(){
          if (head == NULL) {
            cout << "Lista vacia" << endl;
          }
          else {
            Node<T>* Iter = head; //crear puntero que se va mover por los nodos
            while(Iter -> next){ //mientras exista un next
              Iter = Iter-> next; //se va moviendo por los nodos, iter termina en el ultimo
              delete Iter;
            }
          }
        };

        Iterator<T> begin();
        Iterator<T> end();

        ~List(){
            if(head){
                head->killSelf();
            }
            head = NULL;
        }
};
#endif
