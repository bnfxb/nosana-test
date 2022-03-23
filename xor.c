#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[250];
  int buff_size = 250;
  memset(buff, 0, buff_size);

  for (int k = 0; k < buff_size; k++)
      buff[k] = str[k] ^ 2;
  return 0;
}
