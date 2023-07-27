#include <iostream>
using namespace std;
void print(const int ia[], int size);

void print(const int ia[], int size)
{
    for (size_t i = 0; i < size; ++i)
        cout << ia[i] << endl;
}

int main()
{
    int my_numbers[20];
    for(int i; i < 20; i++) {
        my_numbers[i] = i;
    }
    print(my_numbers, 20);
}