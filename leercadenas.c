#include "leercadenas.h"

void leer(char *cad, int n){
  int i;
  char c;

  c = (char)getchar();

  if( (int)c == EOF ){
    cad[0] = '\0';
    return;
  }

  if ( c == '\n'){
    i = 0;
  }
  else{
    cad[0] = c;
    i = 1;
  }

  for (; i < n-1 && ( c = (char)getchar()) != EOF && (char)c != '\n'; i++){
    cad[i] = c;
  }

  cad[i] = '\0';

  if ( c != '\n' && c != EOF){
    while ( (c = (char)getchar()) != '\n' && (int)c != EOF);
  }
}
