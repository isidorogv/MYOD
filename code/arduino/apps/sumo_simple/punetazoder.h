#ifndef PUNETAZODER_H
#define PUNETAZODER_H

extern Robot myod;

void punetazoder(){

int time_1 = 200;
int vector_1[24] = {90,90,155,35,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90};
int time_2 =   800;
int vector_2[24] = {90,90,155,35,90,90,90,90,20,160,90,90,90,90,118,62,120,60,60,120,55,125,90,90};
int time_3 =   200;
int vector_3[24] = {90,130,155,35,150,90,90,90,0,160,90,90,90,90,130,62,120,60,60,120,67,125,90,90};
int time_4 =   200;
int vector_4[24] = {90,130,155,35,150,90,90,90,0,160,90,90,90,90,130,62,120,60,60,120,67,125,90,90};
int time_5 =   800;
int vector_5[24] = {90,90,155,35,110,70,90,90,20,160,90,90,90,90,118,62,120,60,60,120,55,125,90,90};


myod.move(time_1, vector_1);
myod.move(time_2, vector_2);
myod.move(time_3, vector_3);
myod.move(time_4, vector_4);
myod.move(time_5, vector_5);
myod.move(time_5, vector_1);

}
#endif
