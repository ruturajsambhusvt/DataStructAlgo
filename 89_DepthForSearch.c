#include <stdio.h>
#include <malloc.h>

int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int adj[7][7] = {{0, 1, 1, 1, 0, 0, 0},
                 {1, 0, 1, 0, 0, 0, 0},
                 {1, 1, 0, 1, 1, 0, 0},
                 {1, 0, 1, 0, 1, 0, 0},
                 {0, 0, 1, 1, 0, 1, 1},
                 {0, 0, 0, 0, 1, 0, 0},
                 {0, 0, 0, 0, 1, 0, 0}};


//Uses inbuilt C stack which are instances of DFS function
void DFS(int i)
{
    printf("%d ", i);
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (adj[i][j] == 1 && visited[j] == 0)
        {
            DFS(j);
        }
    }
}

int main()
{
    // DFS Implementation
    DFS(0);
    printf("\n");

    return 0;
}