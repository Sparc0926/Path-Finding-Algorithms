#include <stdio.h>
#include <stdlib.h>
#include "./SearchAlg/pathfinder.h"
#include "./Animator/Animator.h"

int main(int map_num, char* maps[])
{
    begin_animate("frame1.pgm");

    write_cell(3, 5, 12.3);

    end_animate();
    // read the original map of characters from command argument
    FILE* src_map = fopen(maps[1], "r");
    // read the dimension of the map
    if (!fscanf(src_map, "%d%d", &r, &c)) {
        printf("Something wrong with reading the map dimension!\n");
        return -1;
    }
    // create the hash array with bijection y*c+x
    map = (Map*)malloc(r * c);
    // read the content of the map
    //char line[c];
    if (!fgetc(src_map))  return -1;
    //int sx = 3, sy = 1, tx = 5, ty = 2;
    #ifndef ALG
        printf("ALG is not defined!\n");
        return -1;
    #endif//ALG
    //printf("%f\n", ALG(sy * c + sx, ty * c + tx));

    return 0;
}