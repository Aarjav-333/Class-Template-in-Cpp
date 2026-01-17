#include <iostream>
using namespace std;
template<typename T>
class PrintOutSomething{
    public:
        void outputVal(T value)
        {
            cout<<value;
        }
};
int main()
{
    PrintOutSomething <int> obj1;
    obj1.outputVal(45);
    PrintOutSomething <string> obj2;
    obj2.outputVal("Hellooooo");
    return 0;
}
