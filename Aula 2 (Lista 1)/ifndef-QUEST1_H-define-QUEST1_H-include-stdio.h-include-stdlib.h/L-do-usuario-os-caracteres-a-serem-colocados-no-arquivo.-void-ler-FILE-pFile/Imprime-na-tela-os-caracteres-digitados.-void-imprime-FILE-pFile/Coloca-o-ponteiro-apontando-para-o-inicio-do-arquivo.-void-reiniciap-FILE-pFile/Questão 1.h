#ifndef QUEST1_H
#define QUEST1_H

#include <stdio.h>
#include <stdlib.h>

//Lê do usuario os caracteres a serem colocados no arquivo.
void ler(FILE *pFile);

//Imprime na tela os caracteres digitados.
void imprime(FILE *pFile);

//Coloca o ponteiro apontando para o inicio do arquivo. 
void reiniciap(FILE *pFile);

//Verifica se o arquivo foi criado corretamente, chama a função 'ler', a função 'rewind' e fecha o arquivo com o 'fclose'.
void se(FILE *pFile);

#endif
