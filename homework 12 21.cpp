#include <iostream>

using namespace std;

int main()
{
    int func, lengthTotal, length, quantity, space;
    cout << "請輸入總共要幾排\n";
    cin >> lengthTotal;
    cout << "請輸入 1(小到大+靠左) 或 2(大到小+靠左) 或 3(小到大+靠右)\n";
    cin >> func;
    
    if (func == 1) {
        for (length = 0; length <= lengthTotal; length++) {
            for (quantity = 0; quantity < length; quantity++) {
                cout << "*";
            }
            cout << "\n";
        }
    } else if (func == 2) {
        for (length = lengthTotal; length > 0; length--) {
            for (quantity = length; quantity > 0; quantity--) {
                cout << "*";
            }
            cout << "\n";
        }
    } else if (func == 3) {
        for (length = 0; length <= lengthTotal; length++) {
            for (space = lengthTotal - length; space > 0; space--) {
                cout << " ";
            }
            for (quantity = 0; quantity < length; quantity++) {
                cout << "*";
            }
            cout << "\n";
        } 
    } else {
        cout << "抱歉，查無此功能";
    }
    
    return 0;
}