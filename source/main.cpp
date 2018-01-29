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
int div;

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
div=num;
num=0;
dev=0;

while(dif<=30) {
  dev=1;
  dev=dev+dev;
  dev=dev*dev;
  dev=dev^dev;
  dev=dev-dev;
  dev=dev/dev;
  num=num+1;
  time (&end);
  dif = difftime (end,start);
}

cl();
printf("Your LV.1 score is: %d", lv1);
printf("\nYour LV.2 score is: %d", lv2);
printf("\nYour LV.3 score is: %d", lv3);
printf("\nYour Divider score is: %d", div);
printf("\nYour Mountain score is: %d", num);
while(1){

}
}
