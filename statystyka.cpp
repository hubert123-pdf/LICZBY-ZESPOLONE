#include<iostream>
#include"statystyka.hh"

void wynik_quizu(statystyka quiz)
{
    
    std::cout<<std::endl<<"ilosc poprawnych odpowiedzi: "<<quiz.dobre_odp<<std::endl;
    std::cout<<std::endl<<"ilosc blednych odpowiedzi: "<<quiz.zle_odpowiedzi<<std::endl;
    std::cout<<std::endl<<"wynik procentowy dobrych odpowiedzi: "<<(quiz.dobre_odp/quiz.ilosc_pyt)*100<<"%";
}
