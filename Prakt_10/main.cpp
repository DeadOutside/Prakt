#include <iostream>
#include <queue>
#include <vector>

using namespace std;
template<typename T, int size>
class Cherga
{
    int tail,head;
    T *arr;
public:
    Cherga() {
        tail = 0;
        head = 0;
        arr = new T [size];
    }
    void Push(int a){
        arr[tail] = a;
        tail = ++tail % size;
    }
    T Pop(){
        int temp = head;
        head = ++head % size;
        return arr[temp];
    }
};
int main()
{
    char alf;
    vector<char> v;
    for (int i = 0;i < 33;++i) {
        v.push_back('a' + i);
    }
    for (int i = 0;i < 33;++i) {
        cout << v[i] << " ";
    }
     //а б в г ґ д е є ж з и і ї й к л м н о п р с т у ф х ц ч ш щ ь ю я
    /*queue<int> obj;
    obj.push(10);
    obj.push(20);
    obj.push(15);
    obj.push(25);
    cout << obj.front();
    obj.pop();
    cout << obj.front();
    obj.pop();
    cout << obj.front();
    obj.pop();
    cout << obj.front();
    obj.pop();
    cout << obj.front();
    obj.pop();*/
    return 0;
}
