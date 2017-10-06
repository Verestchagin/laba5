  GNU nano 2.7.4                    Файл: laba5.cpp                             

#include <iostream>
using namespace std;

int main(){
        int n, m, a[n][m], b[n][m], c[n][m];
        cout << "Vvedite razmer massivov" << endl;
        cin >> n >> m;
        for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                        cin << a[i][j];
                }
                cout << endl;
        }
        for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                        cin << b[i][j];
                }
                cout << endl;
        }
           [ строка 1/29 (3%), столбец 1/20 (5%), символ 0/504 (0%) ]
^G Помощь    ^O Записать  ^W Поиск     ^K Вырезать  ^J Выровнять ^C ТекПозиц
^X Выход     ^R ЧитФайл   ^\ Замена    ^U Отмен. выр^T Словарь   ^_ К строке
