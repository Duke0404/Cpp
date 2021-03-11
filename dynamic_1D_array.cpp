#include <iostream>
using namespace std;

class dynaList {
    int n, i;
    int* array = new int(n);

public:
    void setSize() {
        cout << "Input size of list (Max 10)" << endl;
        cin >> n;
        while(true) {
            if(n <= 0 || n > 10) {
                cout << "Input valid size of list (Max 10)" << endl;
                cin >> n;
            }
            else {
                break;
            }
        }
    }

    int getSize() {
        return n;
    }

    void setArray() {
        for(i = 0; i < n; i++) {
            cout << "Input " << i+1 << "th element of list (Between -100 to 100)" << endl;
            cin >> array[i];
            while(true) {
                if(array[i] < -100 || n > 100) {
                    cout << "Input valid " << i+1 << "th element of list (Between -100 to 100)" << endl;
                    cin >> array[i];
                }
                else {
                    break;
                }
            }
        }
    }

    int* getArray() {
        return array;
    }
    
    void printArray() {
        for(i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
    }

    void delArray() {
        delete[] array;
    }
};

int main() {

dynaList list;

list.setSize();
list.setArray();
list.printArray();
list.delArray();

return 0;
}