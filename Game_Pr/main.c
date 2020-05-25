#include "work.h"
int main (int argc,char** argv)
{
	int menuW=1,gameW=0,f=0,musicP=1,Vol=100,p=-1;
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Surface *screen=NULL;
	screen=SDL_SetVideoMode(1350,632,32,SDL_HWSURFACE);
	SDL_WM_SetCaption("catchUp   !!!!",NULL);

	SDL_Rect screen_rect;
	screen_rect.x=0;
	screen_rect.y=0;

	//-------------------Backgroundgame1

	SDL_Surface *backgroundG=NULL;
	backgroundG=IMG_Load("BackgroundG.png");

	// Masuqe

	SDL_Surface *backgroundGMasque=NULL;
	backgroundGMasque=SDL_LoadBMP("BackgroundGMasque.bmp");


	//-------------------Background2

	SDL_Surface *background2=NULL;
	background2=IMG_Load("Background2.png");

	SDL_Rect background2_rect;
	background2_rect.x = (1350/2)-(700/2);
	background2_rect.y = 50;

	//-------------------Forest

	SDL_Surface *background=NULL;
	background=IMG_Load("Background.png");

	SDL_Rect background_rect;
	background_rect.x = 0;
	background_rect.y = 0;

	//--------------------TomatoLogo

	SDL_Surface *tomato_logo=NULL;
	tomato_logo=IMG_Load("TomatoLogo.png");

	SDL_Rect tomato_logo_rect;
	tomato_logo_rect.x = (1350/2)-(300/2);
	tomato_logo_rect.y = 35;

	//--------------------catchUp

	SDL_Surface *catchUp=NULL;
	catchUp=IMG_Load("catchUp.png");

	SDL_Rect catchUp_rect;
	catchUp_rect.x = (1350/2)-(370/2);
	catchUp_rect.y = 265;

	//--------------------Play

	SDL_Surface *play_button=NULL;
	play_button=IMG_Load("Play.png");

	SDL_Rect play_button_rect;
	play_button_rect.x = (1350/2)-(370/2);
	play_button_rect.y = 372;

	//--------------------Play_Hover

	SDL_Surface *play_hover_button=NULL;
	play_hover_button=IMG_Load("Play_Hover.png");

	//--------------------Play_Click

	SDL_Surface *play_click_button=NULL;
	play_click_button=IMG_Load("Play_Click.png");

	//--------------------Play_NewGame

	SDL_Surface *play_newgame=NULL;
	play_newgame=IMG_Load("Play_Newgame.png");


	SDL_Rect play_newgame_rect;
	play_newgame_rect.x = (1350/2)-(350/2);
	play_newgame_rect.y = 200;

	//--------------------Play_NewGame_Hover

	SDL_Surface *play_newgame_hover=NULL;
	play_newgame_hover=IMG_Load("Play_Newgame_Hover.png");

	//--------------------Play_Continue

	SDL_Surface *play_continue=NULL;
	play_continue=IMG_Load("Play_Continue.png");

	SDL_Rect play_continue_rect;
	play_continue_rect.x = (1350/2)-(350/2);
	play_continue_rect.y = 340;

	//--------------------Play_Continue_Hover

	SDL_Surface *play_continue_hover=NULL;
	play_continue_hover=IMG_Load("Play_Continue_Hover.png");

	//--------------------Settings

	SDL_Surface *settings_button=NULL;
	settings_button=IMG_Load("Settings.png");

	SDL_Rect settings_button_rect;
	settings_button_rect.x = (1350/2)-(370/2);
	settings_button_rect.y = 452;

	//--------------------Settings_Hover

	SDL_Surface *settings_hover_button=NULL;
	settings_hover_button=IMG_Load("Settings_Hover.png");

	//--------------------Settings_Click

	SDL_Surface *settings_click_button=NULL;
	settings_click_button=IMG_Load("Settings_Click.png");

	//--------------------SettingsWindowBackground

	SDL_Surface *settings_background=NULL;
	settings_background=IMG_Load("Option_Background.png");

	SDL_Rect settings_background_rect;
	settings_background_rect.x = (1350/2)-(500/2);
	settings_background_rect.y = 200;

	//--------------------SettingsWindowSFX_ON

	SDL_Surface *settings_sfx_on=NULL;
	settings_sfx_on=IMG_Load("Option_Sfx_On.png");

	SDL_Rect settings_sfx_on_rect;
	settings_sfx_on_rect.x = (1350/2)-(85/2);
	settings_sfx_on_rect.y = 358;

	//--------------------SettingsWindowSFX_ON_Hover

	SDL_Surface *settings_sfx_on_hover=NULL;
	settings_sfx_on_hover=IMG_Load("Option_Sfx_On_Hover.png");

	//--------------------SettingsWindowSFX_OFF

	SDL_Surface *settings_sfx_off=NULL;
	settings_sfx_off=IMG_Load("Option_Sfx_Off.png");

	SDL_Rect settings_sfx_off_rect;
	settings_sfx_off_rect.x = (1350/2)-(85/2)+150;
	settings_sfx_off_rect.y = 358;

	//--------------------SettingsWindowSFX_OFF_Hover

	SDL_Surface *settings_sfx_off_hover=NULL;
	settings_sfx_off_hover=IMG_Load("Option_Sfx_Off_Hover.png");

	//--------------------SettingsWindow_Music_Vol%%%%%

	SDL_Rect v_rect;
	v_rect.x = 850;
	v_rect.y = 230;

	//--------------------SettingsWindow_Music_Vol%%%%% 10

	SDL_Surface *v10=NULL;
	v10=IMG_Load("10.png");

	//--------------------SettingsWindow_Music_Vol%%%%% 40

	SDL_Surface *v40=NULL;
	v40=IMG_Load("40.png");

	//--------------------SettingsWindow_Music_Vol%%%%% 70

	SDL_Surface *v70=NULL;
	v70=IMG_Load("70.png");

	//--------------------SettingsWindow_Music_Vol%%%%% 100

	SDL_Surface *v100=NULL;
	v100=IMG_Load("100.png");

	//--------------------SettingsWindow_Music_Vol

	SDL_Surface *settings_music_vol=NULL;
	settings_music_vol=IMG_Load("Option_Music_Vol.png");

	SDL_Rect settings_music_vol_rect;
	settings_music_vol_rect.x = 805;
	settings_music_vol_rect.y = 228;

	//--------------------Toto

	SDL_Surface *tutorial_button=NULL;
	tutorial_button=IMG_Load("Tutorial.png");

	SDL_Rect tutorial_button_rect;
	tutorial_button_rect.x = (1350/2)-(370/2);
	tutorial_button_rect.y = 532;

	//--------------------Toto_Hover

	SDL_Surface *tutorial_hover_button=NULL;
	tutorial_hover_button=IMG_Load("Tutorial_Hover.png");

	//--------------------Toto_Click

	SDL_Surface *tutorial_click_button=NULL;
	tutorial_click_button=IMG_Load("Tutorial_Click.png");

	//--------------------Credit

	SDL_Surface *credit_button=NULL;
	credit_button=IMG_Load("Credit.png");

	SDL_Rect credit_button_rect;
	credit_button_rect.x = 1100;
	credit_button_rect.y = 555;
	//play_button_rect.w = 300;
	//play_button_rect.h = 800;

	//--------------------Credit_Hover

	SDL_Surface *credit_hover_button=NULL;
	credit_hover_button=IMG_Load("Credit_Hover.png");

	//--------------------Credit_Click

	SDL_Surface *credit_click_button=NULL;
	credit_click_button=IMG_Load("Credit_Click.png");

	//--------------------Exit_Button

	SDL_Surface *exit_button=NULL;
	exit_button=IMG_Load("Exit_Button.png");

	SDL_Rect exit_button_rect;
	exit_button_rect.x = 1250;
	exit_button_rect.y = 25;

	SDL_Rect exit2_button_rect;
	exit2_button_rect.x = 950;
	exit2_button_rect.y = 75;

	//--------------------Audio_Button

	SDL_Surface *audio_button=NULL;
	audio_button=IMG_Load("Audio_Button.png");

	SDL_Rect audio_button_rect;
	audio_button_rect.x = 50;
	audio_button_rect.y = 25;

	//--------------------Audio_Buttonx

	SDL_Surface *audio_buttonx=NULL;
	audio_buttonx=IMG_Load("Audio_Buttonx.png");

	//--------------------Logo

	SDL_Surface *logo=NULL;
	logo=IMG_Load("Logo.png");

	SDL_Rect logo_rect;
	logo_rect.x = 50;
	logo_rect.y = 500;

	//--------------------Anim

	SDL_Surface *anim=NULL;
	anim=IMG_Load("Anim.png");

	SDL_Rect anim_rects;
	anim_rects.x = 100;
	anim_rects.y = 10;

	SDL_Rect anim_rect[8];
	int frame=0;

	anim_rect[0].x=0;
	anim_rect[0].y=0;
	anim_rect[0].w=160;
	anim_rect[0].h=189;

	anim_rect[1].x=161;
	anim_rect[1].y=0;
	anim_rect[1].w=135;
	anim_rect[1].h=189;

	anim_rect[2].x=297;
	anim_rect[2].y=0;
	anim_rect[2].w=135;
	anim_rect[2].h=189;

	anim_rect[3].x=300;
	anim_rect[3].y=0;
	anim_rect[3].w=135;
	anim_rect[3].h=189;

	anim_rect[4].x=439;
	anim_rect[4].y=0;
	anim_rect[4].w=140;
	anim_rect[4].h=189;

	anim_rect[5].x=575;
	anim_rect[5].y=0;
	anim_rect[5].w=150;
	anim_rect[5].h=189;

	anim_rect[6].x=720;
	anim_rect[6].y=0;
	anim_rect[6].w=150;
	anim_rect[6].h=189;

	anim_rect[7].x=880;
	anim_rect[7].y=0;
	anim_rect[7].w=150;
	anim_rect[7].h=189;


	//--------------------Sound

	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024)==-1)
	{
		printf("%s\n",Mix_GetError());
	}
	Mix_Music *music; //construct mix_music_pointer
	music=Mix_LoadMUS("Background_music.mp3"); //Load the music
	Mix_PlayMusic(music, -1);//play music;

	Mix_AllocateChannels(2);
	Mix_Chunk *clickM=NULL;
	clickM=Mix_LoadWAV("Mouse_Click.wav");

	//--------------------

	int x,y,a,b;
	while(menuW)
	{
		SDL_BlitSurface(background,NULL,screen,&screen_rect);
		SDL_BlitSurface(catchUp,NULL,screen,&catchUp_rect);
		SDL_BlitSurface(tomato_logo,NULL,screen,&tomato_logo_rect);
		SDL_BlitSurface(exit_button,NULL,screen,&exit_button_rect);
		SDL_BlitSurface(logo,NULL,screen,&logo_rect);
		//SDL_BlitSurface(anim,&anim_rect[frame],screen,&anim_rects);
		SDL_BlitSurface(play_button,NULL,screen,&play_button_rect);
		SDL_BlitSurface(settings_button,NULL,screen,&settings_button_rect);
		SDL_BlitSurface(tutorial_button,NULL,screen,&tutorial_button_rect);
		SDL_BlitSurface(credit_button,NULL,screen,&credit_button_rect);
		frame++;
		if (frame==8)
			frame=0;
		if (musicP==1)
		{
			SDL_BlitSurface(audio_button,NULL,screen,&audio_button_rect);
		}
		else
		{
			SDL_BlitSurface(audio_buttonx,NULL,screen,&audio_button_rect);
		}
		p=0;
		f=0;
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_QUIT:
					menuW=0;
				break;

				case SDL_MOUSEMOTION:
					x=event.motion.x;
					y=event.motion.y;
					//Play_Button
					if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 372 && y < 440)
					{
						Mix_PlayChannel(-1, clickM, 0);
						SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
					}
					//Settings_Button
					else if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 452 && y < 520)
					{
						SDL_BlitSurface(settings_hover_button,NULL,screen,&settings_button_rect);
					}
					//Toto_Button
					else if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 532 && y < 600)
					{
						SDL_BlitSurface(tutorial_hover_button,NULL,screen,&tutorial_button_rect);
					}
					//Credit_Button
					else if (x > 1100 && x < 1100+199 && y > 555 && y < 555+40)
					{
						SDL_BlitSurface(credit_hover_button,NULL,screen,&credit_button_rect);
					}
				break;
				case SDL_MOUSEBUTTONDOWN:
					a=event.button.x;
					b=event.button.y;
					//Play
					if (a > (1350/2)-(370/2) && a < (1350/2)+(370/2) && b > 372 && b < 440 && event.button.button==SDL_BUTTON_LEFT)
					{
						Mix_PlayChannel(-1, clickM, 0);
						SDL_BlitSurface(play_click_button,NULL,screen,&play_button_rect);
						while(f==0)
						{
							SDL_BlitSurface(background,NULL,screen,&screen_rect);
							SDL_BlitSurface(background2,NULL,screen,&background2_rect);
							SDL_BlitSurface(play_continue,NULL,screen,&play_continue_rect);
							SDL_BlitSurface(play_newgame,NULL,screen,&play_newgame_rect);
							SDL_BlitSurface(exit_button,NULL,screen,&exit2_button_rect);
							SDL_BlitSurface(logo,NULL,screen,&logo_rect);
							SDL_Event event2;
							while (SDL_PollEvent(&event2))
							{
								switch(event2.type)
								{
									case SDL_KEYDOWN:
										if (event2.key.keysym.sym==SDLK_ESCAPE)
										{
											f=1;
										}
									break;
									case SDL_QUIT:
										f=1;
										menuW=0;
									break;
									case SDL_MOUSEBUTTONDOWN:
										a=event2.button.x;
										b=event2.button.y;
										if (a > 950 && a < 995 && b > 75 && b < 120 && event2.button.button==SDL_BUTTON_LEFT)
										{
											f=1;
										}
										if (a > (1350/2)-(350/2) && a < (1350/2)+(350/2) && b > 200 && b < 200+96 && event2.button.button==SDL_BUTTON_LEFT)
										{
											menuW=0;
											f=1;
											gameW=1;
										}
									break;

									case SDL_MOUSEMOTION:
									x=event2.motion.x;
									y=event2.motion.y;
									if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 200 && y < 200+96)
									{
										SDL_BlitSurface(play_newgame_hover,NULL,screen,&play_newgame_rect);
									}
									else if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 340 && y < 340+96)
									{
										SDL_BlitSurface(play_continue_hover,NULL,screen,&play_continue_rect);
									}
									break;
								}
								SDL_Flip(screen);
							}
						}
					}
					//Settings
					else if (a > (1350/2)-(370/2) && a < (1350/2)+(370/2) && b > 452 && b < 520 && event.button.button==SDL_BUTTON_LEFT)
					{
						SDL_BlitSurface(settings_click_button,NULL,screen,&settings_button_rect);
						while(f==0)
						{
							SDL_BlitSurface(background,NULL,screen,&screen_rect);
							SDL_BlitSurface(background2,NULL,screen,&background2_rect);
							SDL_BlitSurface(settings_background,NULL,screen,&settings_background_rect);
							SDL_BlitSurface(settings_sfx_on,NULL,screen,&settings_sfx_on_rect);
							SDL_BlitSurface(settings_sfx_off,NULL,screen,&settings_sfx_off_rect);
							SDL_BlitSurface(exit_button,NULL,screen,&exit2_button_rect);
							SDL_BlitSurface(logo,NULL,screen,&logo_rect);
							SDL_BlitSurface(settings_music_vol,NULL,screen,&settings_music_vol_rect);
							if (settings_music_vol_rect.x <= 670)
							{
								SDL_BlitSurface(v10,NULL,screen,&v_rect);
							}
							else if (settings_music_vol_rect.x <= 720)
							{
								SDL_BlitSurface(v40,NULL,screen,&v_rect);
							}
							else if (settings_music_vol_rect.x <= 770)
							{
								SDL_BlitSurface(v70,NULL,screen,&v_rect);
							}
							else if (settings_music_vol_rect.x <= 810)
							{
								SDL_BlitSurface(v100,NULL,screen,&v_rect);
							}
							SDL_Event event2;
							while (SDL_PollEvent(&event2))
							{
								switch(event2.type)
								{
									case SDL_QUIT:
										f=1;
										menuW=0;
									break;

									case SDL_KEYDOWN:
										if (event2.key.keysym.sym==SDLK_ESCAPE)
										{
											f=1;
										}
										if (event2.key.keysym.sym==SDLK_RIGHT)
										{
											if (settings_music_vol_rect.x < 795)
												{
													settings_music_vol_rect.x+=10;
													Vol=(((settings_music_vol_rect.x-650)*100)/100);
													Mix_VolumeMusic(Vol);
												}
										}
										if (event2.key.keysym.sym==SDLK_LEFT)
										{
											if (settings_music_vol_rect.x > 660)
												{
													settings_music_vol_rect.x-=10;
													Vol=(((settings_music_vol_rect.x-650)*100)/100);
													Mix_VolumeMusic(Vol);
												}
										}
									break;

									case SDL_MOUSEMOTION:
									x=event2.motion.x;
									y=event2.motion.y;
									if (x > (1350/2)-(85/2) && x < (1350/2)+(85/2) && y > 358 && y < 358+45)
									{
										SDL_BlitSurface(settings_sfx_on_hover,NULL,screen,&settings_sfx_on_rect);
									}
									else if (x > (1350/2)-(85/2)+150 && x < (1350/2)+(85/2)+150 && y > 358 && y < 358+45)
									{
									SDL_BlitSurface(settings_sfx_off_hover,NULL,screen,&settings_sfx_off_rect);
									}
									break;

									break;
									case SDL_MOUSEBUTTONDOWN:
										a=event2.button.x;
										b=event2.button.y;
										if (a > 950 && a < 995 && b > 75 && b < 120 && event2.button.button==SDL_BUTTON_LEFT)
										{
											f=1;
										}
										if (a > 650 && a < 805 && b > 228 && b < 228+32 && event2.button.button==SDL_BUTTON_LEFT)
										{
											settings_music_vol_rect.x=x;
											Vol=(((x-650)*100)/100);
											Mix_VolumeMusic(Vol);
										}

										/*if (a > (1350/2)-(85/2) && a < (1350/2)+(85/2) && b > 358 && b < 358+45)
										{
											f=1;
										}*/
									break;
								}
								SDL_Flip(screen);
							}

						}
					}
					else if (a > (1350/2)-(370/2) && a < (1350/2)+(370/2) && b > 532 && b < 600)
					{
						SDL_BlitSurface(tutorial_click_button,NULL,screen,&tutorial_button_rect);
					}
					else if (a > 1100 && a < (1100+199) && b > 555 && b < (555+40))
					{
						SDL_BlitSurface(credit_click_button,NULL,screen,&credit_button_rect);
					}
					else if (a > 1250 && a < (1250+45) && b > 25 && b < (25+45) && event.button.button==SDL_BUTTON_LEFT)
					{
						menuW=0;
					}
					else if (a > 50 && a < (50+45) && b > 25 && b < (25+45) && event.button.button==SDL_BUTTON_LEFT)
					{
						if (Mix_PausedMusic()==1)
						{
							Mix_ResumeMusic();
							musicP=1;
						}
						else
						{
							Mix_PauseMusic();
							musicP=0;
						}
					}
				break;
				case SDL_KEYDOWN:
					if (event.key.keysym.sym==SDLK_ESCAPE)
					{
						menuW=0;
					}

					if (event.key.keysym.sym==SDLK_DOWN)
					{
						if (p=-1)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
						else if (p=0)
						{
							SDL_BlitSurface(settings_hover_button,NULL,screen,&settings_button_rect);
							p=1;
						}
						else if (p=1)
						{
							SDL_BlitSurface(tutorial_hover_button,NULL,screen,&tutorial_button_rect);
							p=2;
						}
						else if (p=2)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
					}
					if (event.key.keysym.sym==SDLK_UP)
					{
						if (p=-1)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
						else if (p=0)
						{
							SDL_BlitSurface(settings_hover_button,NULL,screen,&settings_button_rect);
							p=2;
						}
						else if (p=2)
						{
							SDL_BlitSurface(tutorial_hover_button,NULL,screen,&tutorial_button_rect);
							p=1;
						}
						else if (p=1)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
					}
					if (event.key.keysym.sym==SDLK_RIGHT)
					{
						if (p=-1)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
						else if (p=0)
						{
							SDL_BlitSurface(credit_hover_button,NULL,screen,&credit_button_rect);
							p=3;
						}
						else if (p=1)
						{
							SDL_BlitSurface(credit_hover_button,NULL,screen,&credit_button_rect);
							p=3;
						}
						else if (p=2)
						{
							SDL_BlitSurface(credit_hover_button,NULL,screen,&credit_button_rect);
							p=3;
						}
					}
					if (event.key.keysym.sym==SDLK_LEFT)
					{
						if (p=-1)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
						else if (p=3)
						{
							SDL_BlitSurface(play_hover_button,NULL,screen,&play_button_rect);
							p=0;
						}
					}

					if (event.key.keysym.sym==SDLK_1)
					{
						Mix_PlayChannel(-1, clickM, 0);
						SDL_BlitSurface(play_click_button,NULL,screen,&play_button_rect);
						while(f==0)
						{
							SDL_BlitSurface(background,NULL,screen,&screen_rect);
							SDL_BlitSurface(background2,NULL,screen,&background2_rect);
							SDL_BlitSurface(play_continue,NULL,screen,&play_continue_rect);
							SDL_BlitSurface(play_newgame,NULL,screen,&play_newgame_rect);
							SDL_BlitSurface(exit_button,NULL,screen,&exit2_button_rect);
							SDL_BlitSurface(logo,NULL,screen,&logo_rect);
							SDL_Event event2;
							while (SDL_PollEvent(&event2))
							{
								switch(event2.type)
								{
									case SDL_QUIT:
										f=1;
										menuW=0;
									break;

									case SDL_KEYDOWN:
										if (event2.key.keysym.sym==SDLK_ESCAPE)
										{
											f=1;
										}
									break;

									case SDL_MOUSEMOTION:
									x=event2.motion.x;
									y=event2.motion.y;
									if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 200 && y < 200+96)
									{
										SDL_BlitSurface(play_newgame_hover,NULL,screen,&play_newgame_rect);
									}
									else if (x > (1350/2)-(370/2) && x < (1350/2)+(370/2) && y > 340 && y < 340+96)
									{
										SDL_BlitSurface(play_continue_hover,NULL,screen,&play_continue_rect);
									}
									break;
								}
								SDL_Flip(screen);
							}
						}
					}

					else if (event.key.keysym.sym==SDLK_2)
					{
						SDL_BlitSurface(settings_click_button,NULL,screen,&settings_button_rect);
						while(f==0)
						{
							SDL_BlitSurface(background,NULL,screen,&screen_rect);
							SDL_BlitSurface(background2,NULL,screen,&background2_rect);
							SDL_BlitSurface(settings_background,NULL,screen,&settings_background_rect);
							SDL_BlitSurface(settings_sfx_on,NULL,screen,&settings_sfx_on_rect);
							SDL_BlitSurface(settings_sfx_off,NULL,screen,&settings_sfx_off_rect);
							SDL_BlitSurface(exit_button,NULL,screen,&exit2_button_rect);
							SDL_BlitSurface(logo,NULL,screen,&logo_rect);
							SDL_BlitSurface(settings_music_vol,NULL,screen,&settings_music_vol_rect);
							if (settings_music_vol_rect.x <= 670)
							{
								SDL_BlitSurface(v10,NULL,screen,&v_rect);
							}
							else if (settings_music_vol_rect.x <= 720)
							{
								SDL_BlitSurface(v40,NULL,screen,&v_rect);
							}
							else if (settings_music_vol_rect.x <= 770)
							{
								SDL_BlitSurface(v70,NULL,screen,&v_rect);
							}
							else if (settings_music_vol_rect.x <= 810)
							{
								SDL_BlitSurface(v100,NULL,screen,&v_rect);
							}
							SDL_Event event2;
							while (SDL_PollEvent(&event2))
							{
								switch(event2.type)
								{
									case SDL_QUIT:
										f=1;
										menuW=0;
									break;

									case SDL_MOUSEMOTION:
									x=event2.motion.x;
									y=event2.motion.y;
									if (x > (1350/2)-(85/2) && x < (1350/2)+(85/2) && y > 358 && y < 358+45)
									{
										SDL_BlitSurface(settings_sfx_on_hover,NULL,screen,&settings_sfx_on_rect);
									}
									else if (x > (1350/2)-(85/2)+150 && x < (1350/2)+(85/2)+150 && y > 358 && y < 358+45)
									{
									SDL_BlitSurface(settings_sfx_off_hover,NULL,screen,&settings_sfx_off_rect);
									}
									break;

									break;
									case SDL_MOUSEBUTTONDOWN:
										a=event2.button.x;
										b=event2.button.y;
										if (a > 950 && a < 995 && b > 75 && b < 120 && event2.button.button==SDL_BUTTON_LEFT)
										{
											f=1;
										}

										if (a > 650 && a < 805 && b > 228 && b < 228+32 && event2.button.button==SDL_BUTTON_LEFT)
										{
											settings_music_vol_rect.x=x;
											Vol=(((x-650)*100)/100);
											Mix_VolumeMusic(Vol);
										}
										/*if (a > (1350/2)-(85/2) && a < (1350/2)+(85/2) && b > 358 && b < 358+45)
										{
											f=1;
										}*/
									break;

									case SDL_KEYDOWN:
										if (event2.key.keysym.sym==SDLK_ESCAPE)
										{
											f=1;
										}
										if (event2.key.keysym.sym==SDLK_RIGHT)
										{
											if (settings_music_vol_rect.x < 795)
												{
													settings_music_vol_rect.x+=10;
													Vol=(((settings_music_vol_rect.x-650)*100)/100);
													Mix_VolumeMusic(Vol);
												}
										}
										if (event2.key.keysym.sym==SDLK_LEFT)
										{
											if (settings_music_vol_rect.x > 660)
												{
													settings_music_vol_rect.x-=10;
													Vol=(((settings_music_vol_rect.x-650)*100)/100);
													Mix_VolumeMusic(Vol);
												}
										}
									break;
								}
								SDL_Flip(screen);
							}
						}
					}
				break;
			}
			SDL_Flip(screen);
		}
	}






	SDL_Color color;
	color.r=0;
	color.g=0;
	color.b=0;

	while(gameW)
	{
		//perfectpixel(/*&backgroundG,&backgroundGMasque,*/&screen,/*screen_rect,*/gameW);
		SDL_BlitSurface(backgroundGMasque,NULL,screen,&screen_rect);
		SDL_BlitSurface(backgroundG,NULL,screen,&screen_rect);
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_QUIT:
					gameW=0;
				break;
			}
			SDL_Flip(screen);
		}
		//***************************************
		
		//***************************************
	}

	SDL_FreeSurface(background2);
	SDL_FreeSurface(background);
	SDL_FreeSurface(logo);
	SDL_FreeSurface(tomato_logo);
	SDL_FreeSurface(catchUp);

	SDL_FreeSurface(play_button);
	SDL_FreeSurface(play_hover_button);
	SDL_FreeSurface(play_click_button);
	SDL_FreeSurface(play_newgame);
	SDL_FreeSurface(play_newgame_hover);
	SDL_FreeSurface(play_continue);
	SDL_FreeSurface(play_continue_hover);
	SDL_FreeSurface(settings_button);
	SDL_FreeSurface(settings_hover_button);
	SDL_FreeSurface(settings_click_button);
	SDL_FreeSurface(settings_background);
	SDL_FreeSurface(settings_sfx_on);
	SDL_FreeSurface(settings_sfx_on_hover);
	SDL_FreeSurface(settings_sfx_off);
	SDL_FreeSurface(settings_sfx_off_hover);
	SDL_FreeSurface(settings_music_vol);
	SDL_FreeSurface(exit_button);
	SDL_FreeSurface(tutorial_button);
	SDL_FreeSurface(tutorial_hover_button);
	SDL_FreeSurface(tutorial_click_button);
	SDL_FreeSurface(credit_button);
	SDL_FreeSurface(credit_hover_button);
	SDL_FreeSurface(credit_click_button);
	SDL_FreeSurface(audio_button);
	SDL_FreeSurface(audio_buttonx);

	//SDL_FreeSurface(backgroundG);
	//SDL_FreeSurface(backgroundGMasque);

	Mix_FreeMusic(music);
	Mix_CloseAudio();

	return 0;
}
