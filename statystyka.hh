/* modeluje pojęcie statystyki dla test*/
struct statystyka
{
   float ilosc_pyt;
   float dobre_odp;
   int zle_odpowiedzi;
};

void wynik_quizu(statystyka quiz); //wyswietla wynik quizu