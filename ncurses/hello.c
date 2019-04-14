#include <ncursesw/curses.h>
#include <stdlib.h>
#include <unistd.h>

void vycisti() {
    endwin();
}

int main() {
    atexit(vycisti);
    initscr();
    mvprintw(1, 1, "Hello World!\n");
    refresh();
    getch();
    sleep(1);
}
