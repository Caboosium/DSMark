#include <C:\devkitPro\libnds\include\nds.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int num;
int lv1;
int lv2;

int main(){ 
consoleDemoInit();

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDSMark by Caboosium (GBATemp)\nStarting Test!");

time_t start,end;
double dif;
time (&start);

while(dif<=10){
num=num+1;
//printf("\n%d", num);
time (&end);
dif = difftime (end,start);
if(dif==1){lv1=num;}
if(dif==5){lv2=num;}
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nYour LV.1 score is: %d", lv1);
printf("\nYour LV.2 score is: %d", lv2);
printf("\nYour LV.3 score is: %d", num);
while(1){

}
}