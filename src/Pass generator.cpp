#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijlkmnopqrstuvwxyz";
int size = sizeof(alphanum) - 1;

int main() 
{
    int lenght = 8;

    srand(time(0));
    for(int i = 0; i < lenght; i++)
    {
        cout << alphanum[rand() % :: size];
    }
    return 0;
}