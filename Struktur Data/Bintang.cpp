#include <iostream>

using namespace std;

int main()
{for(int k  = 1; k <= 5; k++){
    for(int m =5; m> k; m--){
        cout << " ";
    }
    for (int n = 1; n <= k; n++){
        cout << "*";
        }
    cout << endl;
}
return 0;
}
