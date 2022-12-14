#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include <string.h>

int main(int argc, char **argv)
{
  char letters[7] = "aaacdec";
  Map *map = createMap(7);
  for (int i = 0; i <= 7; i++)
  {
    char key = letters[i];
    int index = peep(map, &key);

    if (index == -100)
    {
      Record *record = createRecord(&key, 1);
      map->items[i] = record;
      map->count++;
    }
    else
    {
      map->items[index]->value++;
    }
  }

  print(map);
  return 0;
}