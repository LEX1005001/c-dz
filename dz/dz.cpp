#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    setlocale(0, "ru");
    cout << "Введите первое число:";
    int n1;
    cin >> n1;
    cout << "Введите втрое число:";
    int n2;
    cin >> n2;
    cout << "Деляться без остатка на: " << endl;

    if (n1 > n2)
    {
        for (int i = -n2; i <= n1; i++)
        {
            if (i == 0)
            {
                continue;
            }
            if (n1 % i == 0||n2 % i == 0)
            {
                cout << i << ' ';
            }
        }
    }

    if (n2 > n1)
    {
        for (int i = -n1; i <= n2; i++)
        {
            if (i == 0)
            {
                continue;
            }
            if (n1 % i == 0 || n2 % i == 0)
            {
                cout << i << ' ';
            }
        }
    }
}
