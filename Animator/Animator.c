#include <stdio.h>
#include <stdlib.h>
#include "../SearchAlg/pathfinder.h"
#include "Animator.h"

// white  cell 0 ----- unvisited
// gray   cell 1 ----- visited
// grayer cell 2 ----- expanded
// black  cell 3 ----- blocked


// initialize the value on each type of cell
void begin_animate()
{
    for (int i = 0; i < 31; i++)  tcell[0][i] = tcell[30][i] = tcell[i][0] = tcell[i][30] = 0;
}



void write_block_line(int line)
{
    for (int i = 0; i < 31; i++) {
        for (int j = 0; j < c; j++) {
            for (int k = 0; k < 31; k++) {
                
            }
        }
    }
}



// write color on a cell
// color is in index specified above
void put_color(char color)
{
    if (color < 0 || color > 3) {
        printf("invalid color!\n");
        return;
    }
    for (int i = 1; i < 30; i++) {
        for (int j = 1; j < 30; j++) {
            tcell[i][j] = color;
        }
    }
    return;
}



// write arrow on a cell
// arrow is in index specified above
void put_arrow(char arrow)
{
    switch (arrow) {
        case -5:  tcell[2][2]   = tcell[2][3]   = tcell[2][4]   = tcell[2][5]   = tcell[3][2]   = tcell[4][2]   = tcell[5][2]   = 0; break;
        case -1:  tcell[1][15]  = tcell[2][14]  = tcell[2][16]  = tcell[3][13]  = tcell[3][17];  break;
        case  3:  tcell[2][28]  = tcell[2][27]  = tcell[2][26]  = tcell[2][25]  = tcell[3][28]  = tcell[4][28]  = tcell[5][28]  = 0; break;
        case -4:  tcell[15][1]  = tcell[14][2]  = tcell[16][2]  = tcell[13][3]  = tcell[17][3];  break;
        case  4:  tcell[15][29] = tcell[14][28] = tcell[16][28] = tcell[13][27] = tcell[17][27]; break;
        case -3:  tcell[28][2]  = tcell[28][3]  = tcell[28][4]  = tcell[28][5]  = tcell[27][2]  = tcell[26][2]  = tcell[25][2]  = 0; break;
        case  1:  tcell[29][15] = tcell[28][14] = tcell[28][16] = tcell[27][13] = tcell[27][17]; break;
        case  5:  tcell[28][28] = tcell[28][27] = tcell[28][26] = tcell[28][25] = tcell[27][28] = tcell[26][28] = tcell[25][28] = 0; break;
    }
    return;
}



// write number on a cell
void put_num(float num)
{
    // calulate the umber of digits
    int inum = (int)num, cnt = 2;
    while (inum /= 10)  cnt++;
    //
    inum = (int)num * 10;
    return;
}