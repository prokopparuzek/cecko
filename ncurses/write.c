#include <ncursesw/ncurses.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    wint_t ch;
    initscr();
    atexit((void(*)(void))endwin);
    setlocale(LC_ALL, "");

    do {
        get_wch(&ch);
    } while(ch != 'q');

    return 0;
}
