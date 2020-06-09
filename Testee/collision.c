#include "collision.h"

Stats init()
{
  Stats Inits;
  Inits.Collision=0;
//################# MVT
  Inits.up=0;
  Inits.down=0;
  Inits.left=0;
  Inits.right=0;
//################# PNT
  Inits.pnt=IMG_Load("pnt.png");
  Inits.pnt_rect.x=600;
  Inits.pnt_rect.y=360;
  Inits.X=Inits.pnt_rect.x;
  Inits.Y=Inits.pnt_rect.y;
  Inits.W=Inits.pnt->w;
  Inits.H=Inits.pnt->h;
//################# BACKGROUND
  Inits.background=IMG_Load("test1.png");
  Inits.background_rect.x=0;
  Inits.background_rect.y=0;
//################# COLORS
  Inits.Color.r=0;
  Inits.Color.g=0;
  Inits.Color.b=0;
  return Inits;
}

void init_pntCoordinate(Stats Inits,Pnt_Cor pntCoordinate[])
{
  pntCoordinate[0].X=Inits.X;
  pntCoordinate[0].Y=Inits.Y;

  pntCoordinate[1].X=(Inits.X)+(Inits.W/2);
  pntCoordinate[1].Y=Inits.Y;

  pntCoordinate[2].X=(Inits.X)+(Inits.W);
  pntCoordinate[2].Y=Inits.Y;

  pntCoordinate[3].X=(Inits.X)+(Inits.W);
  pntCoordinate[3].Y=(Inits.Y)+(Inits.H/2);

  pntCoordinate[4].X=(Inits.X)+(Inits.W);
  pntCoordinate[4].Y=(Inits.Y)+(Inits.H);

  pntCoordinate[5].X=(Inits.X)+(Inits.W/2);
  pntCoordinate[5].Y=(Inits.Y)+(Inits.H);

  pntCoordinate[6].X=Inits.X;
  pntCoordinate[6].Y=(Inits.Y)+(Inits.H);

  pntCoordinate[7].X=Inits.X;
  pntCoordinate[7].Y=(Inits.Y)+(Inits.H/2);
}

SDL_Color GetPixel(SDL_Surface *pSurface,int x,int y)
{
SDL_Color color;
Uint32 col=0;
//Determine position
char* pPosition=(char*) pSurface->pixels;
pPosition+= (pSurface->pitch * y);
pPosition+= (pSurface->format->BytesPerPixel *x);
memcpy(&col ,pPosition ,pSurface->format->BytesPerPixel);
//convertir color
SDL_GetRGB(col,pSurface->format, &color.r, &color.g, &color.b);
return (color);
}

int collisionTest(Stats Inits,Pnt_Cor pntCoordinate[])
{
  int i=0;
  Inits.Collision=0;
  for (i=0;i<8;i++)
  {
    Inits.colorR=GetPixel(Inits.background,pntCoordinate[i].X,pntCoordinate[i].Y);
    if ((Inits.Color.r==Inits.colorR.r) && (Inits.Color.g==Inits.colorR.g) && (Inits.Color.b==Inits.colorR.b))
    {
      return(1);
    }
  }
}

void mvtCharacter(Stats Inits,SDL_Surface *screen)
{
  SDL_Event event2;
  while (SDL_PollEvent(&event2))
  {
    switch(event2.type)
    {
      case SDL_KEYDOWN:
        if (event2.key.keysym.sym==SDLK_RIGHT)
        {
          Inits.pnt_rect.x+=50;
          printf("%d",Inits.pnt_rect.x);
          //Inits.right=1;
        }
        if (event2.key.keysym.sym==SDLK_LEFT)
        {
          Inits.pnt_rect.x-=50;
          printf("%d",Inits.pnt_rect.x);
          //Inits.left=1;
        }
      /*case SDL_KEYUP:
      if (event.key.keysym.sym==SDLK_RIGHT)
      {
        Inits.right=0;
      }
      if (event.key.keysym.sym==SDLK_LEFT)
      {
        Inits.left=0;
      }
      if (Inits.right==1)
      Inits.pnt_rect.x+=5;
      if (Inits.left==1)
      Inits.pnt_rect.x-=5;*/
    }
    SDL_Flip(screen);
  }
}

void Display (Stats Inits,SDL_Surface *screen)
{
  SDL_BlitSurface(Inits.background,NULL,screen,&Inits.background_rect);
  SDL_BlitSurface(Inits.pnt,NULL,screen,&Inits.pnt_rect);
  if (Inits.Collision==1)
    printf("1\t");
  else
    printf("2\t");
  //mvtCharacter(Inits,screen);
}
