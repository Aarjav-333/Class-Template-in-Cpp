#include <iostream>
using namespace std;
template<typename T>
class Hi{
    public:
        void hlo(T value)
        {
            cout<<value;
        }
};
int main()
{
    Hi <int> h1;
    h1.hlo(45);
    Hi <string> h2;
    h2.hlo("Hellooooo");
    return 0;
}
