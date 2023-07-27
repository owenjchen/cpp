#include <iostream>
using namespace std;
void print(const int ia[10]);

void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
}

int main()
{
    int my_numbers[5];
    for(int i; i < 5; i++) {
        my_numbers[i] = i;
    }
    print(my_numbers);
}