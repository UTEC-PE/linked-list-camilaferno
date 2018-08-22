#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node<T>* next;

    void killSelf(){
      if (next){
        delete next;
      }
    }
};

#endif
