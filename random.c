#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static char randchar(){
  return "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random () % 26];
}
