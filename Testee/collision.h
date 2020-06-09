#ifndef COLLISION_H_
#define COLLISION_H_
#include <SDL/SDL_mixer.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "SDL/SDL_image.h"
#include "SDL/SDL_mixer.h"

typedef struct
{
  int Collision;
//################# MVT
  int up;
  int down;
  int left;
  int right;
//################# PNT
  SDL_Surface *pnt;
  SDL_Rect pnt_rect;
  int X;
  int Y;
  int H;
  int W;
//################# BACKGROUND
  SDL_Surface *background;
  SDL_Rect background_rect;
//################# COLORS
  SDL_Color colorR;
  SDL_Color Color;
} Stats;

typedef struct
{
  int X;
  int Y;
} Pnt_Cor;

Stats init();
void init_pntCoordinate(Stats Inits,Pnt_Cor pntCoordinate[]);
int collisionTest(Stats Inits,Pnt_Cor pntCoordinate[]);
SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y);
void mvtCharacter(Stats Inits,SDL_Surface *screen);
void Display (Stats Inits,SDL_Surface *screen);


#endif
