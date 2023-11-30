#include <ncurses.h>
int main() {
        char ch;
        initscr();

        while ( (ch = getch()) != '\n' ) {
                printw("You've pressed %c\n",ch);
                refresh();
        }

        endwin();

        return 0;
}
