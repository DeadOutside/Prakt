#include <iostream>

using namespace std;

class Spusok
{
public:
    Spusok() {}
    char name[20];
    int nomer;
    Spusok *next;
};


int main()
{
    int i, c = 1;
    Spusok *element, *pershuj = 0;//, *poperednij, *novy;
    for (;;) {
        cout << "To write your list press 1 or 0 to exit: ";
        cin >> i;
        if(i==0) break;
        element = new Spusok;
        cout << "Enter your name: ";
        cin >> element->name;
        cout << "Enter your номер соціального страхування: ";
        cin >> element->nomer;
        element->next = pershuj;
        pershuj = element;
    }
    element = pershuj;
    cout << "Your list: " << endl;
    while(element){
        cout << c << ".Name: " << element->name << "\tNomer : " << element->nomer << endl;
        element = element->next;
        c++;
    }
    return 0;
}
