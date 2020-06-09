#include "collision.h"

int main (int argc,char** argv)
{
  int run=1;
  SDL_Init(SDL_INIT_EVERYTHING);

//######################## SCREEN
  SDL_Surface *screen=NULL;
  screen=SDL_SetVideoMode(1400,980,32,SDL_HWSURFACE);
  SDL_WM_SetCaption("TesT   !!!!",NULL);
//##############################

  Stats Inits;
  Pnt_Cor pntCoordinate[8];

  while (run)
  {
    Inits=init();
    init_pntCoordinate(Inits,pntCoordinate);
    Inits.Collision=collisionTest(Inits,pntCoordinate);
    Display(Inits,screen);
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
      switch(event.type)
      {
        case SDL_QUIT:
          run=0;
        break;
        case SDL_KEYDOWN:
          if (event.key.keysym.sym==SDLK_RIGHT)
          {
            Inits.pnt_rect.x+=50;
            printf("%d",Inits.pnt_rect.x);
          }
          if (event.key.keysym.sym==SDLK_LEFT)
          {
            Inits.pnt_rect.x-=50;
            printf("%d",Inits.pnt_rect.x);
          }
        break;
      }
      SDL_Flip(screen);
    }
  }
  SDL_FreeSurface(Inits.background);
  SDL_FreeSurface(Inits.pnt);
  return 0;
}






/*SDL_Surface *testeee=IMG_Load("pnt.png");
SDL_Rect pn_rect;
pn_rect.x=200;*/

//SDL_BlitSurface(testeee,NULL,screen,&pn_rect);

/*pn_rect.x-=50;
printf("%d",pn_rect.x);*/
/*pn_rect.x+=50;
printf("%d",pn_rect.x);*/
