#include<bits/stdc++.h>
using namespace std;
class functions{
    private: 
        char c;
    public:
        void function1(){
            cout << "Hello World" << endl;
        }
        int function2(int a, int b){
            return a+b;
        }
        functions(){
            cout << "Constructor" << endl;
        }
        ~functions(){
            cout << "Destructor" << endl;
        }
};
int main()
{
    functions f;
    int a , b;
    cin >> a >> b;
    f.function2(a, b);
    cout << f.function2(a,b) << endl;
    return 0;
}