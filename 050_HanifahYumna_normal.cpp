#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) 
{
    while (n != 0) 
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main() 
{
    int bil1, bil2;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    cout << "FPB dari " << bil1 << " dan " << bil2 << " adalah: " << EuclideanGCD(bil1, bil2) << endl;
    
    return 0;
}
