#include <nds.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int num;
int lv1;
int lv2;
int lv3;
int dev;

void cl() { //Clear screen
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

int main(){ 
consoleDemoInit();
cl();
printf("DSMark by Caboosium (GBATemp)\nStarting Addition Test!");

time_t start,end;
double dif;
time (&start);

//Benchmark: LVer
while(dif<=10) {
num=num+1;
//printf("\n%d", num);
time (&end);
dif = difftime (end,start);
if(dif==1){lv1=num;} //Stops saving after 1, 1.5 or 2 seconds. Im not sure...
if(dif==5){lv2=num;} //Stops saving after 5, 5.5 or 6 seconds. Im not sure...
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

cl();
printf("Your LV.1 score is: %d", lv1);
printf("\nYour LV.2 score is: %d", lv2);
printf("\nYour LV.3 score is: %d", lv3);
printf("\nYour Devider score is: %d", num);
while(1){

}
}