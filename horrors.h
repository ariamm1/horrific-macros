#ifndef HORRORS_H
#define HORRORS_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define BEGIN {
#define END }
#define IF if(
#define THEN ){
#define PRINT(...) fprintf(stdout,__VA_ARGS__)
#define MAIN int main(int argc,char** argv)
#define ELSE }else{
#define ELSEIF }else if(
#define IS ==
#define OR ||
#define AND &&
#define NOT !
#define ISNOT !=
#define DIV %
#define VOID void
#define CHAR char
#define INT long long
#define FLOAT double
#define CO const
#define FOR for(
#define DO ){
#define AS =
#define RANGE(v,x) int v = 0;v < x;v++
#define RET return
#define INCREMENT(x) x++
#define DECREMENT(x) x--
#define EVER ;;
#define MAX(a,b) ( a > b ? a : b)
#define STRUCT typedef struct {
#define STRUCTNAME }
#define UNIONNAME }
#define NIL NULL
#define WHILE while(
#define UNION typedef union {
#define SWITCH switch(
#define CASE case
#define BOOL bool
#define TRUE true
#define FALSE false
#define STOP break
#define GO continue
#define VAR auto
#define ALLOC malloc
#define DEALLOC free
#define READ(...) fscanf(stdin,__VA_ARGS__)
#define INLINE_ASM asm(
#define END_ASM );
#define SIZE sizeof
#define CONCAT strcat
#define COPY strcpy
#endif