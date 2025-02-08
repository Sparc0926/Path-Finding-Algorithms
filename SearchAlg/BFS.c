#include <stdlib.h>
#include "pathfinder.h"

static int* queue, head = 0, tail = 0;
static int dx[8] = { -1, -1,  0, -1, 0,  1, 1, 1 };
static int dy[8] = {  0, -1, -1,  1, 1, -1, 0, 1 };

float BFS(int src, int tar)
{
    queue = (int*)malloc(r * c * sizeof(int));
    queue[0] = src;
    do {
        for (int i = 0; i < 8; i++) {
            int suc = queue[head] + dy[i] * c + dx[i];
            if (map[suc].cell != '.')  continue;
            queue[++tail] = suc;
            map[suc].cost = map[queue[head]].cost  + (i & 1 ? 1.5f : 1.0f);
            if (suc == tar) {
                return map[tar].cost;
                free(queue);
            }
        }
    } while (head++ != tail);
    free(queue);
    return -1.0f;
}