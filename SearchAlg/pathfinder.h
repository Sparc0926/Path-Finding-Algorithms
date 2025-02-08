#ifndef PATH_FINDER_H
#define PATH_FINDER_H

// num of rows and columns
int r, c;
typedef struct {
    char cell, r, g, b;
    float cost;
} Map;
Map* map;
// 8 directions hardcoded

float BFS(int src, int tar);
float DFS(int src, int tar);
float Djkstra(int src, int tar);
float Astar(int src, int tar);

#endif//PATH_FINDER_H