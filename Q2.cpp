#include <iostream>

using namespace std;

int main()
{
    float numero;
    cout << "Digite um número: ";
    cin >> numero;
    if (numero > 10)
    {
        cout << "É MAIOR QUE 10!" << endl;
    }
    else
    {
        cout << "NÃO É MAIOR QUE 10!" << endl;
    }
    return 0;
}