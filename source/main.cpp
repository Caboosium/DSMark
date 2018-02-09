#include <nds.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "gl2d.h"

int num;
int lv1;
int lv2;
int lv3;
int dev;
int devy;
int script;
int size;
int dino;

void cl() { //Clear screen
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int main(){ 
videoSetMode(MODE_5_3D);
videoSetModeSub(MODE_5_2D);
consoleDemoInit();
cl();
printf("DSMark by Caboosium (GBATemp)\nStarting Addition Test!");

time_t start,end;
double dif;
time (&start);

//Benchmark: LVer
while(dif<=2) {
num=num+1;
//printf("\n%d", num);
time (&end);
dif = difftime (end,start);
}
lv1=num;

while(dif<=6) {
num=num+1;
//printf("\n%d", num);
time (&end);
dif = difftime (end,start);
}
lv2=num;

while(dif<=11) {
num=num+1;
//printf("\n%d", num);
time (&end);
dif = difftime (end,start);
}

lv3=num;
num=0;

printf("\nStarting Divider Test!");
while(dif<=20) {
dev=(num+5200)/(num+345);
num=num+1;
time (&end);
dif = difftime (end,start);
}

devy=num;
num=0;

printf("\nStarting GL Test!");
while(dif<=30) {
	if (script==0) {
	glScreen2D();
	lcdMainOnTop();
	vramSetBankA( VRAM_A_MAIN_BG );
	vramSetBankB( VRAM_B_MAIN_BG );
	//vramSetBankC( VRAM_C_MAIN_BG );
	vramSetBankD( VRAM_D_MAIN_BG );
	vramSetBankF(VRAM_F_MAIN_BG);
	vramSetBankE(VRAM_E_MAIN_BG);
	//REG_DISPCAPCNT = DCAP_BANK(2) | DCAP_ENABLE | DCAP_SIZE(3);
	script=1;

	}
	
	if (dino==0) {
		size=size+1;
		if(size==100) {
			dino=1;
		}
	}
	
	if (dino==1) {
		size=size-1;
		if(size==0) {
			dino=0;
		}
	}
	
	glScreen2D();
	glBegin2D();
	glBoxFilled(90-size,90-size,size+10,size+10,RGB15(0,0,255));
	glBoxFilled(0,0,size+10,size+10,RGB15(255,0,0));
	glEnd2D();
	glFlush(0);
	num=num+1;
	time (&end);
	dif = difftime (end,start);
}

cl();
printf("Your LV.1 score is: %d", lv1);
printf("\nYour LV.2 score is: %d", lv2);
printf("\nYour LV.3 score is: %d", lv3);
printf("\nYour Divider score is: %d", devy);
printf("\nYour GL score is: %d", num);
printf(" (%dFPS)", num/10);
while(1){

}
}
