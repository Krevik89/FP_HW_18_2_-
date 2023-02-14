#include <iostream>
#include <Windows.h>


using namespace std;

/*Реализовать структуру «Автомобиль» (длина,
клиренс (высота посадки), объем двигателя, мощность
двигателя, диаметр колес, цвет, тип коробки передач).
Создайте функции для задания значений, отображения
значений, поиска значений.*/

struct  Auto {
    float len;      //длина
    float klirens;  //высота посадки
    float V;        //объем двигателя
    float W;        //мощность двигателя
    float D;        //диаметр
    char color[20];   //цвет
    char type[20];    //тип коробки передач
} ;
Auto* car1 = new Auto;

void Input(Auto* Auto) {
    cout << "Введите длину машины "; cin >> Auto->len;
    cout << "Введите высоту посадки "; cin >> Auto->klirens;
    cout << "Введите обьем двигателя "; cin >> Auto->V;
    cout << "Введите мощность двигателя "; cin >> Auto->W;
    cout << "Введите диаметр колес "; cin >> Auto->D;
    cout << "Введите цвет машины "; cin >> Auto->color;
    cout << "Введите тип каробки передач "; cin >> Auto->type;
}
void Output(Auto* Auto) {
    cout << "Длина машины "<< Auto->len<<endl;
    cout << "Высота посадки " << Auto->klirens << endl;;
    cout << "Обьем двигателя "<< Auto->V<<endl;
    cout << "Мощность двигателя "<< Auto->W<<endl;
    cout << "Диаметр колес "<< Auto->D<<endl;
    cout << "Цвет машины "<<Auto->color<<endl;
    cout << "Тип каробки передач "<<Auto->type<<endl;
}
void Search(Auto* Auto) {
    Input(car1);
    system("cls");
    cout << "Введите что хотите искать-> \n"
        << "1 - Длина \n"
        << "2 - Клиренс \n"
        << "3 - Обьем двигателя \n"
        << "4 - Мощность двигателя \n"
        << "5 - Диаметр колес \n"
        << "6 - Цвет \n"
        << "7 - Тип КП \n"
        << "8 - Отобразить все характеристики \n"
        << "0 - Выход \n";

    int key;
      cin>>key;
  
    switch (key)
    {
    case 1:
        cout << Auto->len;
        break;
    case 2:
        cout << Auto->klirens;
        break;
    case 3:
        cout << Auto->V;
        break;
    case 4:
        cout << Auto->W;
        break;
    case 5:
        cout << Auto->D;
        break;
    case 6:
        cout << Auto->color;
        break;
    case 7:
        cout << Auto->type;
        break;
    case 8:
        Output(car1);
        break;
    default:
        break;
    }
    
}
void menu() {
    Search(car1);
}

int main() {
    setlocale(LC_ALL, "");
    menu();
}