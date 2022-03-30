#include <iostream>

using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
    int row1, col1, row2, col2, i, j, k;

    int m1[50][50], m2[50][50], pro[50][50];
    cin >> row1 >> col1;
        
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cin >> m1[i][j];
            }
        }

    cin >> row2 >> col2;
         for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cin >> m2[i][j];
            }
        }
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                pro[i][j] = 0;

                for (k = 0; k < col1; k++)
                    pro[i][j] = pro[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                cout << pro[i][j] << " ";
            }
            cout << endl;
        }
    
   }
    return 0;
}
