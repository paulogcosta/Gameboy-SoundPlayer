/*========================================
	Programmed by P.G.Costa(S.L.)
==========================================*/
#include<stdio.h>
#include<stdlib.h>
#include<gb/drawing.h>
#include<gb/gb.h>
#include "slmusic.c"

void init() {
	
	DISPLAY_ON;		// display on
	NR52_REG = 0x80;	// sound on
	NR51_REG = 0xff;	// sound channels on
	NR50_REG = 0x77;	// volume max
}

void print(int x, int y, char *c){
	gotogxy(x,y);
	gprintf(c);
} 

void play_music(){
	play_note_S1(0,150);
	play_note_S1(9,150);
	play_note_S1(7,150);
	play_note_S1(5,150);
	play_note_S1(4,150);
	play_note_S1(2,150);
	play_note_S1(12,150);
	play_note_S1(9,150);
	play_note_S1(7,150);
	play_note_S1(11,150);
	play_note_S1(9,150);
	play_note_S1(5,50);
	play_note_S1(7,50);
	play_note_S1(9,150);
	play_note_S1(16,150);
	play_note_S1(14,150);
	play_note_S1(11,150);
	play_note_S1(0,150);
	play_note_S1(12,150);
	play_note_S1(14,150);
	play_note_S1(9,150);
	play_note_S1(7,150);
	play_note_S1(5,150);
	play_note_S1(4,150);
	play_note_S1(2,150);
	play_note_S1(0,150);
	play_note_S1(5,150);
	play_note_S1(12,150);
}

void play_music_2(){
	play_note_S1(12,60);
	play_note_S1(28,60);
	play_note_S1(31,60);
	play_note_S1(35,200);

}

void play_music_3(){
	play_note_S1(0,40);
	play_note_S1(1,60);
	play_note_S1(0,300);
	play_note_S1(0,200);
	play_note_S1(0,40);
	play_note_S1(1,60);
	play_note_S1(0,300);
	play_note_S1(0,200);
	play_note_S1(0,40);
	play_note_S1(1,60);
	play_note_S1(0,300);
	play_note_S1(0,40);
	play_note_S1(1,60);
	play_note_S1(0,300);
	play_note_S1(0,200);
	play_note_S1(0,40);
	play_note_S1(1,60);
	play_note_S1(0,300);
	play_note_S1(0,200);
	play_note_S1(0,40);
	play_note_S1(1,60);
	play_note_S1(0,300);
}

void checkInput() {
	
    if (joypad() & J_B) {
		print(1,4,"--PRESSED--");
		play_music_2();
		delay(200);
    }
	
    if (joypad() & J_A) {
		print(1,3,"--PRESSED--");
		play_music();
		delay(200);
    }
	
	if (joypad() & J_START) {
		print(1,5,"--PRESSED--");
		play_music_3();
		delay(200);
    }
	
}

void main(){
	print(5,1,"SOUND TEST");
	
	init();
	
	while(1){
		print(1,3,"PRESS A      ");
		print(1,4,"PRESS B      ");
		print(1,5,"PRESS START  ");
		checkInput();
	}
}