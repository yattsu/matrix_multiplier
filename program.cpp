#include <iostream>

using namespace std;

int main()
{
    int a[10][10];
    int b[10][10];
    int axb[10][10];
    int randuri_a;
    int coloane_a;
    int randuri_b;
    int coloane_b;
    int i;
    int j;
    int k;

    int counter = 0;
    while (coloane_a != randuri_b)
    {
        if (counter > 0)
            cout << endl << "ERROR: Numarul de coloane din matricea [A] trebuie sa corespunda cu numarul de randuri din matricea [B]" << endl;

        cout << "Randuri matrice [A]: ";
        cin >> randuri_a;
        cout << "Coloane matrice [A]: ";
        cin >> coloane_a;

        cout << "Randuri matrice [B]: ";
        cin >> randuri_b;
        cout << "Coloane matrice [B]: ";
        cin >> coloane_b;

        counter++;
    }

    for (i = 0; i < randuri_a; i++)
    {
        for (j = 0; j < coloane_a; j++)
        {
            cout << endl << "A[" << i + 1 << j + 1 << "] = ";
            cin >> a[i][j];
        }
    }


    for (i = 0; i < randuri_b; i++)
    {
        for (j = 0; j < coloane_b; j++)
        {
            cout << endl << "B[" << i + 1 << j + 1 << "] = ";
            cin >> b[i][j];
        }
    }

    cout << endl << "--------------------------------------";
    cout << endl << "Matricea [A]:" << endl;
    for (i = 0; i < randuri_a; i++)
    {
        for (j = 0; j < coloane_a; j++)
        {
            cout << a[i][j] << "   ";
        }

        cout << endl;
    }

    cout << endl << "Matricea [B]:" << endl;
    for (i = 0; i < randuri_b; i++)
    {
        for (j = 0; j < coloane_b; j++)
        {
            cout << b[i][j] << "   ";
        }

        cout << endl;
    }

    for(i = 0; i < randuri_a; i++)
    {
        for(j = 0; j < coloane_b; j++)
        {
            axb[i][j] = 0;
        }
    }

    for (i = 0; i < randuri_a; i++)
    {
        for (j = 0; j < coloane_b; j++) {
            for (k = 0; k < coloane_a; k++) {
                axb[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << endl << "Matricea [AxB]:" << endl;
    for(i = 0; i < randuri_a; i++)
    {
        for(j = 0; j < coloane_b; j++)
        {
            cout << axb[i][j] << "   ";
            if(j == coloane_b - 1)
                cout << endl;
        }
    }

    return 0;
}