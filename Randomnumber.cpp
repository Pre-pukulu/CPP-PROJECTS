#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
    for(int n=0; n <= 5; n++)
    {
        int a = rand() % 11;
        cout << a << " ";
    }
    
    return 0;
}