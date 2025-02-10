#ifndef ANIMATOR_H
#define ANIMATOR_H

#include <stdio.h>

int r_cell, c_cell;
// temperate cell for editing
char tcell[31][31];

void begin_animate();
void end_animate();

// write the tcell
void write_cell(char color, char arrow, float num);

#endif//ANIMATOR_H