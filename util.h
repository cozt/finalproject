//
//  util.h
//  diff
//
//  Created by William McCarthy on 5/9/19.
//  Copyright © 2019 William McCarthy. All rights reserved.
//

#ifndef util_h
#define util_h

#include <stdio.h>
#define BUFLEN 256

char* yesorno(int condition);
FILE* openfile(const char* filename, const char* openflags);

void printleft(const char* left);
void printright(const char* right);
void printboth(const char* left_right);

void printline(void);
void printleftmatch(const char* left);
void printleftminus(const char* left);
void printleftplus(const char* left);


void printboth2(const char* left_right);

void printleft1(const char* left);
#endif /* util_h */
