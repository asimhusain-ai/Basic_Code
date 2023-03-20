#include<iostream>
#include<string>
using namespace std;
int main(){
    struct car {
        string brand;
        string model;
        int year;
    };

    car car1;
    car1.brand="Audi";
    car1.model="A10";
    car1.year=2023;

    car car2;
    car2.brand="Alto";
    car2.model="800";
    car2.year=2023;

    cout<<"Salik's car = "<<car1.brand<<" "<<car1.model<<" "<<car1.year<<endl;
    cout<<"Yahiya's Car = "<<car2.brand<<" "<<car2.model<<" "<<car2.year;

    return 0;

}