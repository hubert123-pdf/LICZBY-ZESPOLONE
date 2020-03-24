#include <iostream>
#include "BazaTestu.hh"
#include "LZespolona.hh"
#include "statystyka.hh"
#include "WyrazenieZesp.hh"
using namespace std;




int main(int argc, char **argv)
{


  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }

  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }

  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  LZespolona odpowiedz;
  statystyka quiz={0,0,0};
   
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe))
  {
   quiz.ilosc_pyt++;
   cout<<"Podaj wynik Operacji : ";
   cout<<WyrZ_PytanieTestowe<<" = ";
   cin>>odpowiedz;
   if(cin.fail()==true){
     cin.clear();
     cin.ignore(1000,'\n'); 
     cout<<"Blad zapisu liczby zesplonej. Sprobuj jeszcze raz:";
   cin>>odpowiedz;
   if(cin.fail()==true){
     cin.clear();
     cin.ignore(1000,'\n'); 
     cout<<"Blad zapisu liczby zesplonej. Sprobuj jeszcze raz:";
   cin>>odpowiedz;if(cin.fail()==true){ cin.clear();
     cin.ignore(1000,'\n'); cout<<"3 razy bledne wprowadzenie liczby zespolonej odpowiedz zaliczona jako bledna"<<endl;
     }}}
   if(BazaT.IndeksPytania-1==0)
    {
     if(((WyrZ_PytanieTestowe.Arg2+WyrZ_PytanieTestowe.Arg1)==odpowiedz)==true)
     {cout<<"Dobra odpowiedz."; quiz.dobre_odp++;}
     else
     {cout<<"Zla odpowiedz"<<endl<<"poprawna odpowiedz: "<<WyrZ_PytanieTestowe.Arg1+WyrZ_PytanieTestowe.Arg2;  quiz.zle_odpowiedzi++;}
     cout<<endl;
    }
    if(BazaT.IndeksPytania-1==1)
     {
     if(((WyrZ_PytanieTestowe.Arg1-WyrZ_PytanieTestowe.Arg2)==odpowiedz)==true)
     {cout<<"Dobra odpowiedz."; quiz.dobre_odp++;}
     else
     {cout<<"Zla odpowiedz"<<endl<<"poprawna odpowiedz: "<<WyrZ_PytanieTestowe.Arg1-WyrZ_PytanieTestowe.Arg2; quiz.zle_odpowiedzi++;}
     cout<<endl;
    }
    if(BazaT.IndeksPytania-1==2)
     {
     if(((WyrZ_PytanieTestowe.Arg2*WyrZ_PytanieTestowe.Arg1)==odpowiedz)==true)
     {cout<<"Dobra odpowiedz."; quiz.dobre_odp++;}
     else
     {cout<<"Zla odpowiedz"<<endl<<"poprawna odpowiedz: "<<WyrZ_PytanieTestowe.Arg1*WyrZ_PytanieTestowe.Arg2; quiz.zle_odpowiedzi++;}
     cout<<endl;
    }
    if(BazaT.IndeksPytania-1==3)
     { 
     if(((((WyrZ_PytanieTestowe.Arg1*Sprzezenie(WyrZ_PytanieTestowe.Arg2)))/modul(WyrZ_PytanieTestowe.Arg2))==odpowiedz)==true)
     {cout<<"Dobra odpowiedz."; quiz.dobre_odp++;}
     else
     {cout<<"Zla odpowiedz"<<endl<<"poprawna odpowiedz: "<<(((WyrZ_PytanieTestowe.Arg1*Sprzezenie(WyrZ_PytanieTestowe.Arg2)))/modul(WyrZ_PytanieTestowe.Arg2)); 
     quiz.zle_odpowiedzi++;}
     cout<<endl;
    }
  }
  cout << endl;
  cout << " Koniec testu" << endl;
  wynik_quizu(quiz);
  cout << endl;
}
