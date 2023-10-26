#include <iostream>

using namespace std;

int main()

{

    int a, b, c;

    cin >> a;

    b = a / 100;

    c = a % 10;

    if (b != c)

        cout << "Всі цифри даного числа різні";

    else

        cout << "Не всі цифри даного числа різні";

    return 0;

}

