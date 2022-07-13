#include <iostream>
using namespace std;

class MyClass {
    private:
        int myNum;

    public: // access specifier
    // use encapsulation to keep variables private but methods to access them public
        //setter
        void setValue(int v) {
            myNum = v;
        }

        //getter
        int getValue() {
            return myNum;
        }

};


int main() {
    MyClass myObj;
    myObj.setValue(15);
    myObj.getValue();

    return 0;
}