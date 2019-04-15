#include <ncursesw/ncurses.h>
#include <stdlib.h>
#include <locale.h>

#define C_LEN 8 // Počet barev

int main() {
    initscr();
    atexit((void(*)(void))endwin);
    setlocale(LC_ALL, "");

    if (!has_colors()) {
        fprintf(stderr, "Colors not supported.\n");
        exit(EXIT_FAILURE);
    }
    if (start_color() != OK) {
        fprintf(stderr, "Can't init colors!\n");
        exit(EXIT_FAILURE);
    }

    int colors[C_LEN] = {
        COLOR_BLACK,
        COLOR_RED,
        COLOR_GREEN,
        COLOR_YELLOW,
        COLOR_BLUE,
        COLOR_MAGENTA,
        COLOR_CYAN,
        COLOR_WHITE,
    };
    int i, j, pair = 1;

    printw("Max počet barev: %d\n", COLORS);
    printw("Max počet párů: %u\n", COLOR_PAIR);
    printw("Rozměry: %d %d\n", COLS, LINES);

    for (i = 0; i < C_LEN; i++) {
        for (j = 0; j < C_LEN; j++) {
            init_pair(pair, colors[i], colors[j]);
            attroff(A_BOLD);
            attrset(COLOR_PAIR(pair));
            mvprintw(i*2 + 4, j * 12, "Normal: %d/%d", colors[i], colors[j]);
            attron(A_BOLD | A_UNDERLINE);
            mvprintw(i * 2 + 5, j * 12, "Bold %d/%d   ", colors[i], colors[j]);
            pair++;
        }
    }

    use_default_colors();
    init_pair(pair, -1, -1);
    attroff(A_BOLD);
    attrset(COLOR_PAIR(pair));
    printw("\n\nPro ukončení zmáčkněte libovolnou klávesu...");
    printw("\něščřžýáíéúůóďťĚŠČŘŽÝÁÍÉÚŮÓĎŤ");
    refresh();
    noecho();
    getch();
    return 0;
}
