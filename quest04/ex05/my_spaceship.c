#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  int x;
  int y;
  char xdir;
  char ydir;
  char *direction;
} spaceship;

char *my_spaceship(char *param_1)
{
  int len = strlen(param_1);
  // integer_array *pusher = (integer_array *)malloc(sizeof(integer_array));
  spaceship *ship = (spaceship *)malloc(sizeof(spaceship));
  ship->direction = malloc(sizeof(char) * 5);

  char *result = malloc(sizeof(char) * 100);
  *ship = (spaceship){0, 0, 'N', 'U'};
  if (len == 0)
  {
    snprintf(result, 100, "{x: %d, y: %d, direction: '%s'}", 0, 0, "up");
    return result;
  }

  for (int i = 0; i < len; i++)
  {

    if (param_1[i] == 'L' || param_1[i] == 'R')
    {
      if (ship->xdir == 'N')
      {
        ship->xdir = param_1[i];
        ship->ydir = 'N';
      }
      else
      {
        if ((ship->xdir == 'R' && param_1[i] == 'L'))
        {
          ship->xdir = 'N';
          ship->ydir = 'U';
        }
        else if ((ship->xdir == 'L' && param_1[i] == 'R'))
        {
          ship->xdir = 'N';
          ship->ydir = 'U';
        }
        else if (ship->xdir == param_1[i])
        {
          ship->xdir = 'N';
          ship->ydir = 'D';
        }
      }
    }
    else if (param_1[i] == 'A')
    {
      if (ship->ydir == 'D')
        ship->y++;
      else if (ship->ydir == 'U')
      {
        ship->y--;
      }

      else if (ship->xdir == 'L')
        ship->x--;
      else if (ship->xdir == 'R')
        ship->x++;
    }
  }
  char dir[5];
  // ship->direction = "up";
  // printf("direction -> %s", ship->direction);
  if (ship->ydir == 'D')
  {
    strcpy(dir, "down");
  }
  else
  {
    strcpy(dir, "up");
  }

  snprintf(result, 100, "{x: %d, y: %d, direction: '%s'}", ship->x, ship->y, dir);
  return result;
}

int main()
{
  char *input = "RAARA";
  printf("%s", my_spaceship(input));

  return 0;
}