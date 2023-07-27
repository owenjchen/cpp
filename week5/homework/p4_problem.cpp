#include <iostream>
#include <vector>
#include <string>
using namespace std;

double calc(double);
double calc(double d)
{
    return 100.00 + d;
}
int count(const string &, char);
int count(const string &s, char c)
{
    int cnt = 0;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] == c) {
            cnt++;
        }

    }
    return cnt;
}
int sum(vector<int>::iterator, vector<int>::iterator, int);
int sum(vector<int>::iterator start, vector<int>::iterator end, int n)
{
    cout << "start = " << *start;
    cout << ", n = " << n ;
    cout << ", end =" << *end << endl;    
        return *start + *end + n;
}

int main()
{

vector<int> vec(10);

//(a) calc(23.4, 55.1);
//double a = calc(23.4, 55.1);

//(b) count("abcda", ’a’);
cout << "(b)" << endl;
int b = count("abcda", 'a');
cout << b << endl;

//(c) calc(66);
cout << "(c)" << endl;
double c = calc(66);
cout << c << endl;

//(d) sum(vec.begin(), vec.end(), 3.8);
cout << "(d)" << endl;
int d = sum(vec.begin(), vec.end(), 3.8);
cout << d << endl;
}