#include <iostream>
using namespace std;

void printDown(int n)
{
    //to do
    if (n == 5){
        cout << (n, n + 1, n + 2);
    } else {
        cout << false;
    }
   
}

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    printDown(n);

    return 0;
}