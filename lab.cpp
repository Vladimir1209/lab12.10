#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    while (true)
    {
        float x[10] = {};
        for (int i = 0; i < 10; ++i)
        {
            x[i] = float(rand() % 151 + (-100));
            cout << x[i] << endl;
        }

        int n;
        cout << "Выбор задачи:" << endl;
        cin >> n;
        if (n == 0)
            break;
        switch (n)
        {
        case 1:
        {
            float z;
            cin >> z;
            float const b = x[0];
            cout << "Новый масив:" << endl;
            for (int i = 0; i < 10; ++i)
            {
                float c = x[i];
                x[i] = ((c * 2) - z) / b;
                cout << ((c * 2) - z) / b << endl;
            }

            cout << "---------------------" << endl;
        }
        break;

        case 2:
        {
            int k1, k2, s1, s2;
            float a, c, d, e, f;
            cout << "Введите к1 и к2:" << endl;
            cin >> s1 >> s2;
            cout << "Введите s1 и s2:" << endl;
            cin >> s1 >> s2;
            a = 0;
            c = 0;
            d = 0;
            e = 0;
            f = 0;
            for (int i = 0; i < 10; ++i)
            {
                a = a + x[i];
                c = c + pow(x[i], 2);
                if (i <= 6)
                {
                    d = d + x[i];
                }
                if (i >= k1 & i <= k2)
                {
                    e = e + x[i];
                }
                if (i >= s1 & i <= s2)
                {
                    f = f + x[i];
                }
            }
            cout << "Сумма всех элементов массива: " << a << endl;
            cout << "Сумма всех элементов массива: " << c << endl;
            cout << "Сумма всех элементов массива: " << d << endl;
            cout << "Сумма всех элементов массива: " << e << endl;
            cout << "Сумма всех элементов массива: " << a / 10 << endl;
            cout << "Сумма всех элементов массива: " << f / s2 - s1 << endl;
            cout << "---------------------" << endl;
        }
        break;
        case 3:
        {
        }
        break;
        case 4:
        {
                }
        }
    }
}
