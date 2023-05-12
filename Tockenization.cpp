#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Hi my name is kartik";
    char *token;
    token = strtok(str, " ");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, " ");
    }
    return 0;
}