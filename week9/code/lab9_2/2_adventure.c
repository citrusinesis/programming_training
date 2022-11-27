#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAP_X 10
#define MAP_Y 10

const char emptyMap[MAP_Y][MAP_X] = {
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
};

typedef struct Pos {
    int x;
    int y;
} Pos;

typedef struct Flag {
    int win;
    int dead;
} Flag;

typedef struct Player {
    Pos pos;
    Flag flag;
} Player;

char map[MAP_Y][MAP_X] = {0};
Player player = {{0, 0}, {0, 0}};
Pos monster[] = {{0, 0}, {0, 0}};

int randomizer(int limit) {
    int ret;

    while (1) {
        ret = rand() % limit;

        if (player.pos.x != ret || player.pos.y != ret || MAP_X - 1 != ret ||
            MAP_Y - 1 != ret)
            break;
    }

    return ret;
}

void next() {
    system("clear");

    map[monster[0].y][monster[0].x] = '.';
    map[monster[1].y][monster[1].x] = '.';

    monster[0].x = randomizer(MAP_X);
    monster[0].y = randomizer(MAP_Y);
    monster[1].x = randomizer(MAP_X);
    monster[1].y = randomizer(MAP_Y);

    map[monster[0].y][monster[0].x] = 'M';
    map[monster[1].y][monster[1].x] = 'M';
}

void visualize() {
    for (int i = 0; i < MAP_Y; i++) {
        for (int j = 0; j < MAP_X; j++)
            printf("%c ", map[i][j]);
        printf("\n");
    }
}

void initialize() {
    memcpy(map, emptyMap, sizeof(emptyMap));
    next();
    map[0][0] = '#';
    map[MAP_Y - 1][MAP_X - 1] = 'G';
}

void validation() {
    if (player.pos.x == MAP_X - 1 && player.pos.y == MAP_Y - 1) {
        player.flag.win = 1;
    } else if (player.pos.x == monster[0].x && player.pos.y == monster[0].y ||
               player.pos.x == monster[1].x && player.pos.y == monster[1].y) {
        player.flag.dead = 1;
    }
}

void move() {
    char input;
    while (1) {
        input = getchar();
        getchar();

        if (input == 'w' || input == 'a' || input == 's' || input == 'd')
            break;
    }

    map[player.pos.y][player.pos.x] = '.';

    switch (input) {
    case 'w':
        if (player.pos.y != 0)
            player.pos.y--;
        break;

    case 'a':
        if (player.pos.x != 0)
            player.pos.x--;
        break;

    case 's':
        if (player.pos.y != MAP_Y - 1)
            player.pos.y++;
        break;

    case 'd':
        if (player.pos.x != MAP_X - 1)
            player.pos.x++;
        break;

    default:
        break;
    }

    map[player.pos.y][player.pos.x] = '#';
}

void end(const char *msg) {
    system("clear");
    visualize();
    puts(msg);
    exit(1);
}

int main() {
    srand(time(NULL));
    initialize();

    while (1) {
        visualize();
        move();

        validation();
        if (player.flag.win)
            end("You Win!");

        else if (player.flag.dead)
            end("You Dead...");

        next();
    }
}