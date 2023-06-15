#include <iostream>
#include <SLibrary.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    SLibrary::Greeter greeter;
    greeter.greet(name);
}
