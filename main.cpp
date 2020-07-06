#include <iostream>

using namespace std;

int a[30][30], dist[30], from, to;

void find_path(int v);
void init(int v);

int main()
{
    cin >> from >> to;
    from--;
    to--;

    init(from);
    find_path(from);

    cout << dist[to];
    return 0;
}

void find_path(int v)
{
    for (int i = 0; i < 20; i++)
    {
        if ((a[v][i] > -1) && ((dist[v] + a[v][i] < dist[i]) || (dist[i] == -1)))
        {
            dist[i] = dist[v] + a[v][i];
            find_path(i);
        }

        if ((a[i][v] > -1) && ((dist[v] + a[i][v] < dist[i]) || (dist[i] == -1)))
        {
            dist[i] = dist[v] + a[i][v];
            find_path(i);
        }
    }
}

void init(int v)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
            a[i][j] = -1;
        dist[i] = -1;
    }

    dist[v] = 0;
    a[0][1] = 2000;
    a[0][4] = 2800;
    a[1][2] = 2500;
    a[1][3] = 2600;
    a[1][4] = 3000;
    a[2][3] = 2100;
    a[2][5] = 2000;
    a[3][5] = 2600;
    a[3][6] = 2200;
    a[4][6] = 1900;
    a[5][6] = 1800;
    a[5][7] = 2100;
    a[6][2] = 2300;
    a[6][8] = 2700;
    a[6][9] = 2400;
    a[6][10] = 2200;
    a[7][11] = 1900;
    a[8][11] = 1800;
    a[10][11] = 2500;
    a[10][12] = 2800;
    a[10][13] = 2600;
    a[10][14] = 2300;
    a[11][14] = 2200;
    a[11][16] = 2100;
    a[12][9] = 2000;
    a[12][13] = 2400;
    a[12][19] = 1800;
    a[13][14] = 1900;
    a[13][18] = 2100;
    a[13][19] = 2200;
    a[14][15] = 2600;
    a[14][17] = 2700;
    a[14][18] = 2700;
    a[15][16] = 2900;
    a[15][17] = 2000;
    a[16][17] = 2200;
    a[17][18] = 2100;
    a[18][19] = 2500;
}
