#ifndef HEAD_H
#define HEAD_H

#include<graphics.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#include "Graph.h"
#include "Parabola.h"
#include "Elpse.h"
#include "Hyperbola.h"
#include "Crcle.h"
#include "UserGraph.h"

void load();
void about();
void gmenu();
int push(int stk[20],int val,int &top);

#endif
