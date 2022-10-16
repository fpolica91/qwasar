#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct Record Record;

typedef struct Map Map;

struct Record
{
  char *key;
  int value;
};

struct Map
{
  Record **items;
  int size;
  int count;
};

Record *createRecord(char *key, int value)
{
  Record *record = (Record *)malloc(sizeof(Record));
  record->key = (char *)malloc(strlen(key) + 1);
  strcpy(record->key, key);
  record->value = value;

  return record;
}

int peep(Map *map, char *key)
{

  for (int i = 0; i < map->count; i++)
  {
    if (map->items[i] != NULL)
    {
      if (*map->items[i]->key == *key)
      {
        return i;
      }
    }
  }
  return -100;
}

void print(Map *map)
{
  for (int i = 0; i < map->count; i++)
  {
    if (map->items[i] != NULL)
    {
      printf("%s: %d \n", map->items[i]->key, map->items[i]->value);
    }
  }
}

Map *createMap(int size)
{
  Map *map = (Map *)malloc(sizeof(Map));
  map->size = size;
  map->count = 0;
  // allocates the requested memory and returns a pointer to it.
  // calloc sets allocated memory to zero.
  map->items = (Record **)calloc(sizeof(Record *), size);
  for (int i = 0; i < size; i++)
  {
    map->items[i] = NULL;
  }
  return map;
}