/* Universidad de las Fuerzas Armadas "ESPE"
Programa que determina el signo zodiacal de una persona
Autor: Cristian Félix
Fecha creacion: 10-12-2022
Fecha modificacion: 14-12-2022
NRC: 7999
 */
 #include <iostream>
 #include <string>
 #include <vector>
 #include <algorithm>
 #include <functional>
 #include <map>

 using namespace std;

 int main()
 {
     int day, month;
     cout << "\nIngrese su dia de nacimiento: ";
     cin >> day;
     cout << "\nIngrese su mes de nacimiento: ";
     cin >> month;

     map<int, string> zodiac;
     zodiac[1] = "Capricornio";
     zodiac[2] = "Acuario";
     zodiac[3] = "Piscis";
     zodiac[4] = "Aries";
     zodiac[5] = "Tauro";
     zodiac[6] = "Geminis";
     zodiac[7] = "Cancer";
     zodiac[8] = "Leo";
     zodiac[9] = "Virgo";
     zodiac[10] = "Libra";
     zodiac[11] = "Escorpio";
     zodiac[12] = "Sagitario";

     auto it = find_if(zodiac.begin(), zodiac.end(), [day, month](pair<int, string> p) {
         if (month == 1) {
             if (day >= 20) {
                 return p.first == 2;
             }
             else {
                 return p.first == 1;
             }
         }
         else if (month == 2) {
             if (day >= 19) {
                 return p.first == 3;
             }
             else {
                 return p.first == 2;
             }
         }
         else if (month == 3) {
             if (day >= 21) {
                 return p.first == 4;
             }
             else {
                 return p.first == 3;
             }
         }
         else if (month == 4) {
             if (day >= 20) {
                 return p.first == 5;
             }
             else {
                 return p.first == 4;
             }
         }
         else if (month == 5) {
             if (day >= 21) {
                 return p.first == 6;
             }
             else {
                 return p.first == 5;
             }
         }
         else if (month == 6) {
             if (day >= 21) {
                 return p.first == 7;
             }
             else {
                 return p.first == 6;
             }
         }
         else if (month == 7) {
             if (day >= 23) {
                 return p.first == 8;
             }
             else {
                 return p.first == 7;
             }
         }
         else if (month == 8) {
             if (day >= 23) {
                 return p.first == 9;
             }
             else {
                 return p.first == 8;
             }
         }
         else if (month == 9) {
             if (day >= 23) {
                 return p.first == 10;
             }
             else {
                 return p.first == 9;
             }
         }
         else if (month == 10) {
             if (day >= 23) {
                 return p.first == 11;
             }
             else {
                 return p.first == 10;
             }
         }
         else if (month == 11) {
             if (day >= 22) {
                 return p.first == 12;
             }
             else {
                 return p.first == 11;
             }
         }
         else if (month == 12) {
             if (day >= 22) {
                 return p.first == 1;
             }
             else {
                 return p.first == 12;
             }
         }
     });

     cout
         << "\nSu signo del zodiaco es: "
         << it->second
         << endl;
//repetir el programa hasta que el usuario quiera
        char repeat;
        cout << "\nDesea repetir el programa? (s/n): ";
        cin >> repeat;
        if (repeat == 's') {
            main();
        }
        else {
            cout << "\nCerrando..." << endl;
            cout << "Gracias por usar el programa" << endl;
        }
     return 0;
}

