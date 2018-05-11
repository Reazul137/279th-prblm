#include<iostream>
using namespace std;
int main()
{
    int n, res;

    cout << "input number : ";
    cin >> n;

    if(n)
        res = n % 9 == 0 ? 9 : n % 9;
    else
        res = 0;

    cout <<res;

    return 0;
}
