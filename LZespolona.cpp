#include "LZespolona.hh"
#include<math.h>
#include<iostream>


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
bool operator == (LZespolona  Skl1,  LZespolona  Skl2)
 {
   if(Skl1.re==Skl2.re &&Skl1.im==Skl2.im)
   return true;
   else 
   return false;
 }
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;

  return Wynik;
}
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re*Skl2.re-Skl1.im*Skl2.im;
  Wynik.im = Skl1.im * Skl2.re + Skl1.re*Skl2.im;
  return Wynik;
}
std::istream& operator>>(std::istream&tekst,LZespolona &odpowiedz)
{
  char lznak,pznak,i;
  tekst>>lznak>>odpowiedz.re>>odpowiedz.im>>i>>pznak;
  return tekst;

}
std::ostream& operator<<(std::ostream&tekst,LZespolona odpowiedz)
{
  tekst<<'('<<odpowiedz.re<<std::showpos<<odpowiedz.im<<std::noshowpos<<"i)";
  return tekst;

}
LZespolona Sprzezenie(LZespolona Lz)
{
  LZespolona Wynik;
  Wynik.re=Lz.re;
  Wynik.im=-Lz.im;

return Wynik;
}
double modul(LZespolona Lz)
{
  double wynik, wynik2;
  wynik = sqrt((Lz.re*Lz.re)+(Lz.im*Lz.im));
  wynik2 =wynik*wynik;
  return wynik2;
}
LZespolona  operator / (LZespolona  Skl1,double Skl3)
{
  LZespolona wynik;
  wynik.re=Skl1.re/Skl3;
  wynik.im=Skl1.im/Skl3;
  return wynik;
}
LZespolona operator%(LZespolona A, LZespolona B)
{
  LZespolona wynik;
  A.re%B.re=wynik.re;
  A.im%B.im=wynik.im;
  return wynik;
}