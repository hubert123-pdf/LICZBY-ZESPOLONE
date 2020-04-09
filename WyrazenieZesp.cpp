#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
void Wyswietl(WyrazenieZesp  WyrZ)
{
    std::cout<<WyrZ.Arg1<<WyrZ.Op<<WyrZ.Arg2;
}
std::ostream& operator<<(std::ostream&tekst,WyrazenieZesp &odpowiedz)
{
    char tmp;
    if(odpowiedz.Op==0)
    tmp='+';
    if(odpowiedz.Op==1)
    tmp='-';
    if(odpowiedz.Op==2)
    tmp='*';
    if(odpowiedz.Op==3)
    tmp='/';
    if(odpowiedz.Op==4)
    tmp='%';
  tekst<<odpowiedz.Arg1<<tmp<<odpowiedz.Arg2;
  return tekst;

}