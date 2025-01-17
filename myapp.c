#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkme(char *buf) {
  if(buf[0] == 'o' && buf[1] == 'k')
    return 0;
  return 1;
}

int main(int argc, char *argv[]) {
  FILE *f;
  char buf[256];

  if(argc != 2){
    fprintf(stderr, "Must supply a text file\n");
    return -1;
  }
  if( (f = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Could not open %s\n", argv[1]);
    return -1;
  }
  if(fgets(buf, sizeof(buf), f) == NULL){
    fprintf(stderr, "Could not read from %s\n", argv[1]);
    return -1;
  }
  return checkme(buf);
}
