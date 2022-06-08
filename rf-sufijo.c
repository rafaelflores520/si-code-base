#include <stdbool.h>
#include <string.h>
#include <stdio.h>

//Determina si una cadena (ending) es el sufijo de otra (string)
bool sufijo(const char *string, const char *ending)
{
  unsigned int end_size = strlen(ending);
  unsigned int str_size = strlen(string);
  if (str_size < end_size){
    return false;
  }else if (!end_size){
    return true;
  }
  for (unsigned int i = end_size; i > 0; i--){
    if (string[str_size - i] != ending[end_size - i]){
      return false;
    }
  }
  return true;
}

int main()
{
    char original[] = "abc";
    char suffix[] = "d";
    printf(sufijo(original, suffix) ? "Verdadero" : "Falso");
    return 0;
}
