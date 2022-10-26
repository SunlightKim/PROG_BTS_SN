cmake_minimum_required(VERSION 3.23)
project(PROG_BTS_SN C)

set(CMAKE_C_STANDARD 11)

include_directories(C_EXOS/inc)

add_executable(PROG_BTS_SN
        C_EXOS/func/caesar.c
        C_EXOS/func/exo1.c
        C_EXOS/func/exo2.c
        C_EXOS/func/mths.c
        C_EXOS/func/palindrome.c
        C_EXOS/func/pendu.c
        C_EXOS/func/vigenere.c
        C_EXOS/func/clearbuffer.c
        C_EXOS/inc/caesar.h
        C_EXOS/inc/exo1.h
        C_EXOS/inc/exo2.h
        C_EXOS/inc/mths.h
        C_EXOS/inc/palindrome.h
        C_EXOS/inc/pendu.h
        C_EXOS/inc/vigenere.h
        C_EXOS/inc/clearbuffer.h
        C_EXOS/main.c)
