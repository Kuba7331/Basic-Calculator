
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>


using namespace std;
int i = 1;
int a[sizeof(int)], b[sizeof(int)], wybor[sizeof(int)], obliczenia[sizeof(int)];
int wynik[sizeof(int)];

int main()
{
    while (true) {
        cout << "MENU GLOWNE" << endl;                                              //MENU
        cout << "-----------------" << endl;
        cout << "1.Dodawanie" << endl;
        cout << "2.Odejmowanie" << endl;
        cout << "3.Mnozenie" << endl;
        cout << "4.Dzielenie" << endl;
        cout << "5.Koniec obliczen" << endl;
        cout << "6.Wyjscie." << endl;
        cout << "Prosze wybrac opcje. (1 - 6)" << endl;
        if ((!(cin >> wybor[i]) || (wybor[i]>=7))) {
            cerr << "Prosze podac wybor ponownie! (prosze nacisnac przycisk) " << endl;
            getchar(); getchar();                                                                      //obsluga bledu przy wpisywaniu danych przez uzytkownika
            cin.clear();
            cin.ignore();
            system("cls");
            continue;
        }
        switch (wybor[i]) {                                         //komenda wywolujaca dzialanie operacji 
        case 1:
            cout << "Prosze podac dwie liczby a, i b." << endl;                //dodawanie
            if (!(cin >> a[i] >> b[i])) {
                cerr << "Prosze podac liczby ponownie!(prosze nacisnac przycisk)" << endl;          //obsluga bledu podczas pobierania danych
                getchar();   getchar();
                cin.clear();
                cin.ignore();
                system("cls");
                continue;
            }
            cout << "Wynik dodawania to: " << (float)a[i] + b[i] << endl;
            cout << "Prosze nacisnac jakikolwiek przycisk." << endl;
            wynik[i] = a[i] + b[i];
            i++;
            getchar();  getchar();
            system("cls");
            break;
        case 2:
            cout << "Prosze podac dwie liczby a, i b." << endl;                          //odejmowanie
            if (!(cin >> a[i] >> b[i])) {
                cerr << "Prosze podac liczby ponownie!(prosze nacisnac przycisk)" << endl;
                getchar();  getchar();
                cin.clear();
                cin.ignore();
                system("cls");
                continue;
            }
            cout << "Wynik odejmowania to: " << (float)a[i] - b[i] << endl;
            cout << "Prosze nacisnac jakikolwiek przycisk." << endl;
            wynik[i] = a[i] - b[i];
            i++;
            getchar();  getchar();
            system("cls");
            break;
        case 3:
            cout << "Prosze podac dwie liczby a, i b." << endl;                     //mnozenie
            if (!(cin >> a[i] >> b[i])) {
                cerr << "Prosze podac liczby ponownie!(prosze nacisnac przycisk)" << endl;
                getchar();  getchar();
                cin.clear();
                cin.ignore();
                system("cls");
                continue;
            }
            cout << "Wynik mnozenia to: " << (float)a[i] * b[i] << endl;
            cout << "Prosze nacisnac jakikolwiek przycisk." << endl;
            wynik[i] = a[i] * b[i];
            i++;
            getchar();  getchar();
            system("cls");
            break;
        case 4:
            cout << "Prosze podac dwie liczby a, i b." << endl;                     //dzielenie
            if (!(cin >> a[i] >> b[i]) || b[i] == 0 ) {
                cerr << "Prosze podac liczby ponownie!(prosze nacisnac przycisk)" << endl;
                getchar();  getchar();
                cin.clear();
                cin.ignore();
                system("cls");
                continue;
            }
            cout << "Wynik dzielenia to: " << (float)a[i] / b[i] << endl;
            cout << "Prosze nacisnac jakikolwiek przycisk." << endl;
            wynik[i] = a[i] / b[i];
            i++;
            getchar();  getchar();
            system("cls");
            break;
        case 5:                               //wypisywanie historii wszystkich operacji dotychczash wykonywanych od rozpoczecia programu, do jego zakonczenia dzialania.
            system("cls");
            cout << " Numer operacji " << " Liczba A " << " Liczba B " << " Wynik " << " Uzyte dzialanie " << endl;
            for (int x = 1; i > x; x++) {
                cout << "        " << x << "           " << a[x] << "         " << b[x] << "        " << wynik[x] << "     ";
                switch (wybor[x]) {
                case 1:
                    cout << " Dodawanie";
                    break;
                case 2:
                    cout << " Odejmowanie";
                    break;
                case 3:
                    cout << " Mnozenie";
                    break;
                case 4:
                    cout << "Dzielenie";
                    break;
                }
                cout << endl;

            }
            cout << endl;
            cout << "Prosze nacisnac jakikolwiek przycisk" << endl;
            getchar(); getchar();
            system("cls");
            break;
        case 6:
            exit(0);                //wyjscie z programu.


        }


    }
}
