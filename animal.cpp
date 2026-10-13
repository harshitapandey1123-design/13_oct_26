#include<iostream>
using namespace std;
class animal
{
    public:
 virtual void sound()
 {
    cout<<"animal sound"<<endl;
 }
};
class dog:public animal
{
    public:
    void sound() override
 {
        cout<<"dog barks"<<endl;
 }
};
class cat:public animal
{
    public:
    void sound() override
 {
        cout<<"cat meows"<<endl;
 }
};
int main()
{
    animal*ace;
    animal a;
    dog d;
    cat c;
    ace=&d;
    ace->sound();
    ace=&c;
    ace->sound();
    return 0;
}