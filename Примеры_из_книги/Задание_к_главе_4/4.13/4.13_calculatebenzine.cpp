#include "calculatebenzine.h"
#include <iostream>
using namespace std;
using std::fixed;

#include <iomanip>
using std::setprecision;



CalculateBenzine::CalculateBenzine()
{
}

void CalculateBenzine::setLocalLitres( )
{
    int litr = 0;
    cin >> litr;
    if ( litr != -1 ){

        local_litres = litr;

        calcul_litres += local_litres;

    } else {
        cout << "Введено неверное число. Работа программы остановлена." << endl;
        exit(0);
    }

}

void CalculateBenzine::setLocalKm( int km )
{
        local_kms = km;

        calcul_km += local_kms;
}


double CalculateBenzine::getlastKmToLitres ()
{

    last_kmTOlitres =  static_cast< double >(local_kms) / local_litres;

    return last_kmTOlitres;
}

double CalculateBenzine::getTotalKmToLitres ()
{

    global_kmTOlitres =  static_cast< double >(calcul_km) / calcul_litres;

    return global_kmTOlitres;
}

void CalculateBenzine::calculateTotalKmToLitres()
{
    setlocale(LC_ALL, "Russian");

    cout << "Ввести пройденные киломметры км: ";
    int x_local_kms = 0;

    cin >> x_local_kms;

    if ( x_local_kms != -1 ){

        while ( x_local_kms != -1 ){

            setLocalKm( x_local_kms);

            cout << "Ввести израсходованный бензин. литр: ";
            setLocalLitres();

            cout << "Киломметров/литр для этой заппавки: ";
            cout << setprecision( 6 ) << fixed << getlastKmToLitres() << endl;

            cout << "Суммарное значение км/литр: ";
            cout << setprecision( 6 ) << fixed << getTotalKmToLitres() << endl;
            cout << endl;

            cout << "Ввести пройденные киломметры км: ";
            cin >> x_local_kms;


        }
               cout << "Введено неверное число. Работа программы остановлена." << endl;
               exit(0);

    }  else {
        cout << "Введено неверное число. Работа программы остановлена." << endl;
        exit(0);}


}



