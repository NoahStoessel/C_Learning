#include <stdio.h>
#include <string.h>

struct Player {
    char name[100];
    int score;
};

int main(int argc, char const *argv[])
{
    struct Player player1;
    strcpy(player1.name, "Noah");
    player1.score = 15;
    printf("%s\n \e[0;35m", player1.name);
    printf("%d\n \e[0;35m", player1.score);
    // list of structs
    return 0;
}
