//
// Created by nicholas on 31/12/17.
//

#ifndef DJRA_EXIT_HPP
#define DJRA_EXIT_HPP

#include <fstream>
#include <string>

//Config files and results
extern int tempoAtivoSegundos, numberTeste;
extern char arqRead, numberTesteArray[10];
extern FILE *arqNumberTeste, *arqResultadoTestes, *arq;
extern std::string resultadoTestes;

void sairPrincipal();
void sairEsc(void (func)(unsigned char, int, int));
void TempoAtivo (void (func) (int));


#endif //DJRA_EXIT_HPP
