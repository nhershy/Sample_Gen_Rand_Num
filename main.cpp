#include <iostream>
#include <cstdlib> //for srand() and rand()
#include <ctime> //for time()

using namespace std;

int main()
{
    srand(time(NULL));
    int num = 0;
    num = rand() % 100 + 1; // in the range 1 to 100
    cout << num;
    return 0;
}
