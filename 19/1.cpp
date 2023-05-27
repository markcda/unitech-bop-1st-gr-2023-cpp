#include <cmath>
#include <iostream>

using namespace std;

int k, q, x, y, z, n, a, b, kkkk;
double xx, yy, zz, ee, sum;

string str;
int bbb(int k);
int aaa(int k) {
  if (k == 1)
    return 1;
  else
    return (3 * bbb(k - 1) + 2 * aaa(k - 1));
}

int bbb(int k) {
  if (k == 1)
    return 1;
  else
    return (bbb(k - 1) + 2 * aaa(k - 1));
}

int main() {
  setlocale(0, "");
  cout << "Лабораторную работу выполнил Терешенков Алексей, группа "
          "ИБО-ЗИ-22\nВариант №19\n03.03.2023\n";
  k = 0;
  while (1) {
    do {
      cout << "Выберите задание (1-8): ";
      cin >> kkkk;
    } while (kkkk > 8 or kkkk < 1);
    x = 0;
    y = 0;
    switch (kkkk) {
      case 1: {
        // y=x-2
        cout << "Введите Х: ";
        cin >> x;
        cout << "Введите Y: ";
        cin >> y;
        if (x - y <= 2) {
          cout << "Точка принадлежит выделенной области!" << endl << endl;
        } else {
          cout << "Точка не принадлежит выделенной области!" << endl << endl;
        }
      } break;
      case 2: {
        for (float x = 9.1; x <= 15.6; x += 0.2) {
          zz = (2 * sin(x - M_PI)) / ((1.0 / 3) + (cos(x) * cos(x)));
          cout << "При Х = " << x << ", Z = " << zz << endl;
        }
        cout << endl;
      } break;
      case 3: {
        cout << "Введите Х: ";
        cin >> xx;
        cout << "Введите Y: ";
        cin >> yy;
        if (xx == yy)
          cout << "Числа равны!\n\n";
        else
          cout << "Из этих двух чисел большее " << max(xx, yy) << ", а меньшее "
              << min(xx, yy) << endl
              << endl;
      } break;
      case 4: {
        int bn = 0, mn = 0;
        for (xx = -0.8; xx <= 0.8; xx += 0.2) {
          zz = abs(sin(xx)) + abs(cos(xx));
          if (zz == 1)
            xx = 0;
          cout << "X = " << xx << " Y = " << zz << endl;
        }
        cout << endl;
      } break;
      case 5: {
        do {
          cout << "Введите Е (0<E<1): ";
          cin >> ee;
        } while (ee >= 1 or ee <= 0);
        double one = 1;
        sum = 0;
        int ch1 = 1, ch2 = 3;
        while (one / (ch1 * ch2) >= ee) {
          sum = sum + (one / (ch1 * ch2));
          ch1++;
          ch2++;
        }
        cout << "Полученная сумма: " << sum << endl;
        if (sum > 0.75)
          cout << sum << " > 0.75\n\n";
        else
          cout << sum << " < 0.75\n\n";
        // sum никогда не будет точно равна 0.75, поэтому ситуацию "=" я не
        // рассматриваю
      } break;
      case 6: {
        sum = 0;
        cout << "Введите Х: ";
        cin >> xx;
        do {
          cout << "Введите n (n>=1): ";
          cin >> n;
        } while (n < 1);
        for (int k = 1; k <= n; k++) {
          sum = sum + (xx + cos(k * xx)) / pow(2, k);
        }
        cout << "Результат: " << sum << endl << endl;
      } break;
      case 7: {
        cout << "Введите n (n>=1): ";
        cin >> n;

        sum = 0;
        for (k = 1; k <= n; k++) {
          sum = sum + (pow(2, k) / (1 + pow(aaa(k), 2) + pow(bbb(k), 2)));
        }
        cout << "Результат: " << sum << endl << endl;
      } break;
      case 8: {
        do {
          cout << "Введите Х (Х не 0 !!!): ";
          cin >> xx;
        } while (xx == 0);
        do {
          cout << "Введите Е (Е > 0): ";
          cin >> ee;
        } while (ee <= 0);
        cout << "Светлана Михайловна, я не понял где и как использовать Е, "
                "\nпоэтому я еe засунул в цикл for, \nчтобы не оставлять "
                "неиспользованной."
            << endl;
        sum = 0;
        for (int k = 0; k < ee; k++) {
          int fakt = 1;
          for (int i = 1; i <= 2 * k; i++)
            fakt = fakt * i;
          sum = sum + (pow(-1, k) * pow(xx, 4 * k)) / ((fakt) * (4 * k + 1));
        }
        cout << "Результат: " << sum << endl << endl;
      } break;
    }
  }
  return 0;
}
