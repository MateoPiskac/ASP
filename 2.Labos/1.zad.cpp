#include <iostream>
#include <cstdlib>
using namespace std;

template <class T> class Lista {
    template <class X> struct cvor {
        X data;
        cvor<X> *next;
    };
    cvor<T> *head = nullptr;
public:
    bool upis(T element){
        if(head== nullptr){
            head = new cvor<T>;
            head->data = element;
            head->next = nullptr;
            return true;
        }
            cvor<T> *p;
            for(p = head; p->next; p = p->next){
                if(p->data > element){
                    p=p->next;
                }
                else{
                    cvor<T> novi = new cvor<T>;
                    novi->data = element;
                    novi->next = p->next;
                    return true;
                }
            }
    return false;
    }
    void ispis(){
        cvor<T> temp = head;
        while(temp != nullptr){
            cout << temp.data << " ";
            temp = temp.next;
        }
    }



};







int main(){
int n = 0;
while(n>10) {
    cout << "Unesite broj elemenata liste <=10: ";
    cin >> n;
}
for(int i =0; i<n;i++){
    int element;
    cout << "Unesite element: ";
    cin >> element;
    Lista<int> lista;
    lista.upis(element);


}
















//
// Created by Mateo on 06/12/2022.
//
