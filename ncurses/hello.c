#include <ncursesw/curses.h>
#include <stdlib.h>
#include <unistd.h>

void vycisti() {
    endwin();
}

int main() {
    atexit(vycisti);
    initscr();
    printw("Hello World!\n");
    refresh();
    sleep(5);
}
