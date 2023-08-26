#include <iostream>
#include <math.h>
using namespace std;
int Charivne_6(int n);

int main() {

    int n=16;
    for (int i = 2; i <= n; i++)
    {
        cout << "Останні 2 цифри числа 6 в степені " << i << " :" << Charivne_6(i) << endl;
    }
    cout << endl;
  
}
//дві останні цифри результату піднесення числа 6 до степеня .
int Charivne_6(int n)
{
    
    int res = (long long)pow(6, n) % 100;
    return res;
}