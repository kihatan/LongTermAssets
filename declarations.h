//
//  declarations.h
//  Long Term Assets
//
//  Created by Noah Kihata on 10/16/14.
//  Copyright (c) 2014 Noah Kihata. All rights reserved.
//

#ifndef Long_Term_Assets_declarations_h
#define Long_Term_Assets_declarations_h
#include <iostream>
using namespace std;

int check(string type);
int neg(int num);
int right(int month);

void syd(int years, int month, int year, double cost, double final);
void str(int years, int month, int year, double cost, double final);
void doub(int years, int month, int year, double cost, double final);
void unit(int years, int month, int year, double cost, double final);

int lenget(int k);

void output(int k);
void spacing(int k, int spaces);
int stringtoint(string s);
int finalvscost(double& a, double& b);

#endif
