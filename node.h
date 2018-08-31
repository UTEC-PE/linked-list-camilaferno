#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node<T>* next;

    void killSelf(){
      if (next){
        next->killSelf();
        delete this; // El delete debe estar afuera 
      }
    }
};

#endif
