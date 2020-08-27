// 2020.08.25 お試しコード.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz" << endl;
        }

        else if (i % 3 == 0) {
            cout << "fizz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }

    cout << "追加文" << endl;
}
