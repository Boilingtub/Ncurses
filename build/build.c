#include <stdlib.h>

// configure project setup here
#define COMPILER "gcc"
#define SRC_DIR "../src/"
#define OUTPUT_DIR "../output/"
#define PROGRAM_NAME "Ncurses"
#define C_FILES "Ncurses.c"
#define INCLUDE ""
#define LIB "-lncurses"
#define RUN_PROGRAM_ON_COMPILE 1

//concatonation functions
#define STR(x) #x
#define COMPILE_COMMAND(compiler,main_file,program_name) compiler " " LIB " " SRC_DIR main_file " -o " OUTPUT_DIR program_name
#define RUN_COMMAND(directory,program_name) directory program_name


int main() {
        system(COMPILE_COMMAND(COMPILER,C_FILES,PROGRAM_NAME));
        if (RUN_PROGRAM_ON_COMPILE == 1) {
                system(RUN_COMMAND(OUTPUT_DIR,PROGRAM_NAME));
        }
}
