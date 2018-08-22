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

        T front();
        T back();

        //push front
        void push_front(T value){
          Node<T>* Tmp = new Node<T>; //Create node Tmp
          Tmp -> data=value;
          Tmp -> next=NULL;
          if (head==NULL){
            head=Tmp;
          }
          else{
            Tmp -> next=head;
            head=Tmp;
          }
        }
        void push_back(T value);
        void pop_front();
        void pop_back();
        T get(int position);
        void concat(List<T> &other);
        bool empty();
        int size();

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
        void print_reverse();
        void clear();
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
