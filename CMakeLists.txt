cmake_minimum_required(VERSION 3.23)
project(PROG_BTS_SN C)

set(CMAKE_C_STANDARD 11)

include_directories("C_EXOS/EXO 3/inc")

add_executable(PROG_BTS_SN
        "C_EXOS/EXO 3/func/caesar.c"
        "C_EXOS/EXO 3/func/mths.c"
        "C_EXOS/EXO 3/func/palindrome.c"
        "C_EXOS/EXO 3/func/pendu.c"
        "C_EXOS/EXO 3/func/vigenere.c"
        "C_EXOS/EXO 3/inc/caesar.h"
        "C_EXOS/EXO 3/inc/mths.h"
        "C_EXOS/EXO 3/inc/palindrome.h"
        "C_EXOS/EXO 3/inc/pendu.h"
        "C_EXOS/EXO 3/inc/vigenere.h"
        "C_EXOS/EXO 3/exo3.c")
