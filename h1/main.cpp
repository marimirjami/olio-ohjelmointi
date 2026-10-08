#include <iostream>

using namespace std;

void calcSum(int a, int b)
{
    cout << "Summa on " << a + b << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0)
    {
        cout << "Ei pysty jakaa!" << endl;
    }
    else
    {
        cout << "Jaettuna on " << (float)a / b << endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("Ei onnistu jakaa!");
    }

    return (float)a / b;
}

int main()
{
    int a;
    int b;

    cout << "Anna numero: ";
    cin >> a;

    cout << "Anna taas numero: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << "Summa on " << retSum(a, b) << endl;

    if (b != 0)
    {
        cout << "Jaettuna on " << retDiv(a, b) << endl;
    }

    return 0;
}


