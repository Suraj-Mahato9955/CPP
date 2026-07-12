#include <iostream>
using namespace std;

int main() {

    /********************* Break Statement *****************************/

    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << " ";
    }
    
    /***************************** Continue Statement **************************/
    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}
