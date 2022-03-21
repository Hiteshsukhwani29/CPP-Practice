#include<iostream>
#include "list.h"

using namespace std;

int main(){

    List l;
    l.pushfront(1);
    l.pushfront(2);
    l.pushback(3);
    l.pushfront(4);

    l.insertbw(5,1);

    Node* h = l.nodehead();
    while(h!=NULL){
        cout<<h->getData()<<"-->";
        h = h->next;
    }

}
