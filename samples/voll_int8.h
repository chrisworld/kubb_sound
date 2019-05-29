#ifndef voll_table_H_
#define voll_table_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define voll_table_NUM_CELLS 7490
#define voll_table_SAMPLERATE 600
 
const int8_t __attribute__((section(".progmem.data"))) voll_table_DATA [] = {-1,
-3, 0, 0, 0, -2, -1, 1, 6, 8, 6, -1, -6, -3, 1, 7, 7, 6, 2, -1, 0, 2, 2, 1, 2,
3, 6, 4, -2, 2, 5, 6, 6, 6, 3, 0, 3, 6, 10, 9, 4, -2, -2, 1, 9, 11, 10, 4, -1,
-2, -1, -1, 1, 1, 1, 1, 0, -5, -6, -2, 0, 1, 2, 1, -3, -5, -4, -1, 2, -2, -5,
-8, -5, 2, 7, 9, 7, 5, 1, 1, 3, 2, 2, 3, 3, 4, 2, 1, 1, 1, -3, 0, -1, -2, -1,
-1, 1, 1, -2, -6, -5, -4, 2, 6, 7, 3, -1, -7, -6, -5, 0, 2, 2, -2, -1, -1, -3,
-7, -5, -5, -5, -3, -4, -2, -1, 1, 2, -1, -7, -9, -9, -3, -1, 2, 3, 1, -2, -3,
-3, -1, -1, 1, 0, 0, -1, -2, -3, -4, -3, -1, 1, 0, 3, 2, 2, 0, -2, -6, -6, -5,
-1, 2, 3, 3, 2, 2, 0, -2, 0, -1, 2, 1, 0, -1, -2, -2, -2, -3, -3, -4, -5, -6,
-5, -4, -5, -2, 0, -1, 0, -1, -1, 0, 0, 1, 4, 3, 1, 1, 2, 1, 0, -1, 0, 0, 1, 4,
0, -1, 0, -4, -7, -2, 0, -2, 0, 3, 3, 3, 2, 3, 5, 7, 5, 1, 2, 3, 4, 2, 4, 3, 2,
-1, -2, -1, -2, -3, -2, -4, -6, -7, -8, -9, -8, -3, 0, -1, 0, 2, 3, 3, 5, 5, 5,
6, 6, 1, -1, 2, 2, 0, -3, -1, 3, 2, 0, -3, -5, -6, -5, -6, -6, 0, 2, 4, 5, 3, 3,
6, 4, 3, 1, 1, 2, 4, 4, 6, 7, 5, 2, 4, 0, 3, 6, 6, 3, -3, -4, -7, -7, -8, -5,
-4, -2, 0, 2, 1, 0, 0, -2, -2, -2, -3, -1, 0, 1, 2, 6, 3, 1, -1, 0, 0, 0, 2, 1,
-1, -1, -2, -1, 0, 1, 3, 4, 2, 4, 6, 5, 3, 5, 4, 2, -2, -2, 3, 5, 4, 2, 1, -2,
1, 1, 0, -2, -5, -2, -3, -6, -3, -3, 1, 0, -2, 3, -2, -2, 1, 1, -1, 2, -1, -1,
-1, -1, 4, -1, 2, 5, -3, -2, -5, -2, 1, 1, -1, -2, -5, -5, -1, -1, 0, 1, -3, -4,
-2, 0, 1, -2, -1, 5, 4, -1, -3, 1, 1, 4, 2, 0, 0, -5, 0, 2, 1, -4, -7, -8, -10,
-13, -11, -8, -2, -4, -4, -5, 0, -3, -5, -2, -5, -3, 0, 0, -1, 3, 6, -6, -5, 6,
-1, -6, -5, 3, 2, 2, -1, -7, -12, 1, -1, -9, -4, 1, -4, -8, -2, 3, 1, -6, 4, 8,
2, -8, 4, 8, -1, -1, 2, -1, -5, 1, 3, -4, 6, 9, -4, 3, 3, 0, -6, 1, -2, -7, -2,
-6, 0, 6, 7, 2, 6, 11, 2, 1, 11, 13, 4, 6, 9, 4, -1, 5, 1, 0, -1, -2, -1, -2,
-5, -6, 4, 0, -3, 2, 4, 4, 7, 4, 6, 4, 10, 8, 5, 12, 11, 7, 8, 9, 5, 2, 3, 0, 8,
3, 0, -1, -3, -3, -2, 1, 2, 2, 1, 2, -1, 5, 5, 5, 8, 8, 7, 5, 7, 6, 5, 4, 4, 0,
-3, -4, -5, -6, -7, -9, -12, -13, -12, -11, -12, -12, -9, -7, -5, -5, -5, -7,
-3, -1, 0, 3, 5, 8, 7, 11, 10, 12, 12, 11, 8, 4, 1, -3, -8, -12, -18, -19, -22,
-26, -25, -25, -28, -31, -35, -37, -36, -33, -23, -7, -5, -6, -10, -14, -10, -2,
7, 9, 16, 20, 30, 33, 32, 30, 25, 20, 11, 6, -2, -3, -3, 1, 7, 8, 4, -3, -3, -1,
5, 6, 2, -1, -3, -1, 4, 9, 11, 12, 4, 0, -10, -16, -20, -13, 1, 26, 28, 22, 0,
-5, -1, 11, 21, 22, 28, 29, 41, 43, 51, 46, 35, 21, 5, -6, -16, -17, -21, -13,
-12, -5, 2, 4, 1, -7, -14, -22, -23, -23, -20, -19, -11, -4, 4, 6, 0, -3, -12,
-18, -28, -24, -20, 7, 23, 27, 10, -16, -22, -22, 2, 2, 13, 12, 29, 39, 53, 59,
49, 32, 3, -11, -28, -26, -28, -20, -9, -2, 9, 13, 27, 20, 13, -12, -26, -33,
-27, -14, 0, 10, 13, 18, 18, 16, 5, -10, -25, -42, -42, -32, 7, 26, 38, 17, -10,
-24, -26, -2, 1, 18, 17, 38, 49, 69, 78, 70, 49, 12, -12, -34, -32, -36, -24,
-14, -3, 7, 6, 12, 7, 6, -19, -39, -60, -56, -45, -21, 2, 14, 21, 12, 12, -4,
-12, -35, -48, -62, -58, -34, 7, 24, 21, -4, -34, -44, -43, -19, -16, -5, -3,
20, 41, 64, 73, 55, 28, -13, -30, -46, -36, -28, -12, 3, 14, 24, 20, 17, -2,
-12, -23, -35, -51, -58, -47, -25, 4, 19, 19, 6, -6, -16, -21, -32, -45, -60,
-56, -33, 16, 46, 47, 26, -15, -24, -35, -12, -10, 6, 17, 41, 71, 87, 94, 59,
26, -15, -31, -32, -26, -12, -7, 14, 18, 33, 25, 10, -13, -35, -35, -27, -12,
-19, -23, -22, 2, 30, 45, 34, 7, -10, -24, -22, -33, -38, -47, -36, -3, 46, 64,
43, 10, -32, -23, -17, 12, 17, 27, 47, 72, 106, 99, 80, 30, -6, -24, -28, -15,
-21, -15, -15, 7, 23, 27, 15, -19, -41, -57, -36, -2, 19, 8, -15, -13, 14, 52,
51, 28, -13, -23, -16, -8, -19, -44, -59, -52, -12, 36, 41, 6, -31, -57, -30,
-10, 7, -1, 3, 37, 73, 105, 79, 34, -13, -32, -16, -13, -14, -37, -39, -19, 11,
29, 2, -35, -76, -77, -52, -24, 2, -9, -14, -12, 8, 35, 29, 13, -9, -3, 8, 4,
-11, -44, -51, -51, -34, -9, 15, 21, -11, -12, -32, -10, -12, -14, 2, 13, 66,
84, 94, 70, 33, 30, 13, 23, -3, -22, -23, -14, 22, 24, 13, -22, -44, -36, -34,
-20, -23, -4, 12, 9, 14, -2, 13, 15, 22, 22, 10, 15, -1, -8, -31, -50, -55, -56,
-24, 12, 33, 0, -17, -36, -19, -9, -23, -14, -4, 48, 80, 84, 71, 37, 41, 33, 24,
-4, -32, -12, 10, 36, 30, 0, -10, -16, -2, -11, -27, -21, 0, 19, 1, -23, -32,
-16, 6, 6, 1, -4, 3, -3, -28, -58, -73, -68, -45, -8, 36, 25, 2, 4, -6, 16, -12,
-22, -2, 26, 81, 81, 74, 60, 39, 40, 0, -23, -38, -29, 12, 11, 11, 1, -6, 15, 0,
-16, -40, -34, 15, 30, 7, -24, -29, 2, 15, 6, -3, -1, 11, -4, -39, -64, -73,
-63, -62, -43, 1, 40, 24, 13, 1, 2, 15, -6, 4, 23, 63, 103, 92, 80, 54, 34, 16,
-23, -33, -35, -14, 3, -7, -4, -5, -2, -4, -35, -43, -33, 3, 36, 4, -7, -4, 8,
23, -1, 3, 16, 14, 6, -34, -41, -46, -56, -62, -61, -12, 39, 11, -6, -6, -3, 13,
-29, -24, 16, 62, 103, 81, 69, 70, 53, 34, -24, -35, -18, -9, 0, -16, -5, 12,
-2, -18, -52, -54, -29, -17, 0, -13, -10, 12, 1, -1, -11, 1, 16, -5, -14, -24,
-25, -27, -54, -57, -45, -1, 24, -24, -12, 7, 8, -4, -52, -20, 30, 51, 60, 45,
69, 86, 51, 16, -20, -14, -4, -25, -18, -2, 24, 25, -10, -16, -18, -22, -21,
-31, -9, -2, -1, 1, -14, -3, -8, -11, -11, -20, -19, -27, -38, -32, -41, -30,
-14, 7, -14, -22, 14, 8, -1, -24, -18, 32, 42, 48, 54, 64, 84, 60, 30, 16, -2,
-10, -29, -21, 8, 17, 20, 5, 4, 12, -3, -13, -18, -21, -23, -19, 0, 10, 8, 5, 2,
-2, -14, -34, -44, -48, -43, -34, -22, 3, 17, -20, -21, -2, -9, -10, -25, 0, 36,
37, 51, 56, 68, 69, 41, 35, 31, 18, -2, -23, -10, 6, 7, 10, 5, 8, 3, -8, -1,
-14, -34, -42, -36, -17, -6, 1, 16, 16, 7, -14, -33, -48, -58, -47, -23, -1, 29,
13, -8, 14, -13, -34, -46, -34, 13, 18, 33, 63, 73, 81, 57, 49, 45, 12, -6, -13,
-2, 5, -6, 12, 30, 25, 17, 2, 5, -14, -45, -43, -46, -47, -43, -28, 4, 4, 1, 3,
-10, -28, -63, -59, -31, -6, 20, 9, 18, 49, 10, -18, -38, -34, -15, -18, 19, 66,
76, 77, 65, 69, 47, -3, -23, -30, -28, -20, -5, 29, 34, 32, 41, 39, 14, -19,
-42, -42, -53, -63, -45, -27, -16, -15, -7, -1, -15, -31, -46, -44, -27, -14,
-6, -8, 31, 34, 15, 12, 1, 0, -20, -19, 20, 37, 51, 68, 86, 80, 42, 16, 0, -25,
-46, -47, -17, 8, 23, 50, 58, 33, 15, -18, -40, -63, -74, -55, -52, -40, -24,
-10, -7, -22, -20, -26, -30, -15, -1, 9, -16, 16, 35, 11, 11, 12, 28, 14, 0, 22,
14, 5, 15, 31, 48, 35, 32, 33, 5, -18, -32, -27, -23, -14, 27, 50, 38, 44, 22,
5, -26, -56, -49, -65, -58, -45, -33, -25, -33, -20, -26, -36, -25, -10, 7, -15,
19, 36, 10, 17, 19, 33, 16, 11, 44, 39, 33, 36, 37, 23, -6, 0, 8, -10, -14, -8,
-4, -17, -18, 12, 12, 7, 33, 29, 14, -8, -12, -16, -47, -46, -41, -40, -39, -35,
-18, -30, -23, -6, 6, -1, -17, 23, 7, -9, 10, 17, 23, 10, 35, 56, 35, 40, 52,
50, 28, 14, 15, -8, -28, -20, -9, -10, -6, 22, 38, 16, 28, 22, 1, -5, -14, -10,
-31, -36, -29, -38, -40, -45, -42, -45, -44, -17, -13, 3, -9, 5, 29, -9, 3, 7,
8, 10, 19, 56, 56, 53, 70, 64, 46, 21, 22, 8, -17, -24, -22, -23, -24, -12, 12,
8, 18, 34, 16, 9, -1, -14, -30, -42, -30, -39, -38, -32, -25, -27, -35, -28,
-20, -20, 3, -21, 14, 13, -4, 14, -3, 9, 2, 20, 45, 36, 53, 60, 60, 48, 30, 24,
-2, -18, -17, -22, -16, -15, 0, 0, 12, 16, 3, 9, -1, -10, -21, -28, -34, -44,
-41, -42, -39, -43, -40, -31, -23, -13, -9, -14, 9, 21, 1, 17, 17, 22, 11, 19,
34, 27, 33, 48, 53, 49, 40, 41, 19, 1, -5, -20, -27, -22, -14, -11, 1, -1, 9, 3,
0, -5, -21, -25, -38, -43, -48, -48, -40, -46, -39, -41, -30, -18, -10, -6, 9,
21, 7, 22, 24, 32, 24, 36, 39, 33, 34, 44, 38, 35, 31, 35, 20, 12, 8, 1, -9, -7,
-13, -15, -12, -20, -10, -17, -15, -15, -23, -20, -27, -27, -33, -30, -30, -37,
-38, -34, -30, -10, -8, -5, -3, 34, 10, 24, 30, 31, 29, 24, 48, 34, 30, 36, 37,
23, 24, 17, 18, -3, 4, 1, 0, -5, -4, -18, -28, -21, -25, -34, -29, -23, -22,
-25, -8, -8, -9, -4, 3, -1, 0, 1, 1, -10, -12, -13, -12, -4, 1, 1, 15, 21, 16,
23, 35, 23, 17, 23, 20, 15, 8, 17, 4, 5, 11, 18, 12, 15, 11, 2, -11, -15, -19,
-30, -33, -32, -24, -21, -13, -5, -3, -2, 4, 6, 7, 7, 6, 5, 2, 4, 2, -1, -4, -3,
-1, 1, 4, 11, 15, 16, 16, 16, 13, 7, 1, -5, -11, -15, -7, -5, 0, 6, 16, 19, 19,
14, 8, 0, -7, -7, -8, -8, -7, -5, 0, 3, 7, 7, 5, 2, 0, -1, -5, -10, -14, -17,
-15, -10, -6, -6, -4, -2, 5, 9, 13, 18, 20, 21, 17, 13, 8, 1, -4, -7, -5, -1, 3,
8, 12, 15, 12, 7, -3, -16, -25, -27, -24, -17, -10, -1, 5, 12, 12, 13, 10, 5, 2,
-1, -3, -5, -7, -9, -12, -13, -10, -8, -5, -6, -4, -1, 0, 2, 2, 4, 2, 0, -3, -4,
-7, -9, -6, 0, 5, 11, 16, 16, 14, 6, -3, -10, -15, -19, -19, -15, -8, 0, 5, 9,
9, 4, 0, -5, -10, -12, -15, -11, -10, -9, -9, -9, -7, -5, -3, -1, 2, 6, 6, 8,
10, 8, 6, 3, -1, -3, -3, -3, -1, 1, 1, 3, 4, 3, 1, -4, -7, -12, -13, -12, -9,
-5, 3, 11, 16, 18, 16, 11, 8, 4, 0, -5, -5, -6, -6, -3, -4, -4, -5, -7, -9, -9,
-9, -4, 0, 5, 6, 5, 4, 2, 3, 1, 2, 4, 8, 12, 15, 15, 11, 5, -1, -6, -10, -11,
-12, -8, -4, 0, 5, 8, 9, 10, 7, 6, 3, 1, -1, -1, -2, 0, 1, 3, 3, 3, 1, -1, -1,
0, 1, -1, -2, 0, 1, 4, 3, 1, -1, -2, -5, -3, 0, 2, 6, 7, 5, 0, -3, -5, -6, -6,
-4, -2, 2, 8, 11, 13, 12, 11, 6, 3, 0, -1, -3, -3, -3, -3, -5, -5, -5, -5, -6,
-6, -5, -5, -3, -1, 3, 5, 6, 8, 10, 13, 14, 12, 10, 7, 6, 4, 1, -2, -4, -7, -13,
-16, -17, -18, -16, -13, -9, -4, 2, 7, 6, 6, 7, 7, 9, 9, 8, 8, 8, 9, 9, 6, 2,
-2, -4, -4, -3, -5, -4, -5, -4, -4, -4, -2, -3, 0, 3, 5, 5, 3, 3, 3, 3, -1, -2,
-5, -5, -5, -4, -4, -5, -5, -4, -3, 0, 2, 4, 5, 4, 5, 4, 4, 4, 2, 0, -1, 0, -1,
-2, -1, -1, -1, 1, 3, 4, 2, 2, 0, 1, 2, 0, 2, 1, 1, 2, -2, -3, -5, -8, -7, -6,
-6, -8, -8, -5, -3, -2, 1, 2, 2, 0, 2, 3, 7, 8, 8, 7, 5, 2, -2, -4, -5, -7, -11,
-9, -5, -3, -2, -3, -2, -2, -1, -1, 1, 3, 2, 2, 2, 4, 8, 8, 8, -3, 3, 8, -6, 1,
-7, -2, -6, -2, 7, 11, 9, 2, 10, 15, -2, 11, 17, -2, 14, 12, 8, 2, -5, -10, -16,
-19, -20, -16, -19, -13, -15, -7, 14, -14, -10, -1, -15, -26, -4, 2, -15, -13,
-7, 4, -25, -26, -3, -11, -32, -15, -5, -21, -19, -13, -13, -14, -13, -4, -10,
-18, -5, 0, 2, -9, 4, 5, 7, -1, -4, -5, -14, -19, -19, -14, -18, -13, -4, 5, 11,
10, 12, 15, 14, 19, 18, 19, 18, 13, 12, 24, 25, 17, 30, 43, 32, 20, 39, 56, 36,
39, 64, 64, 53, 55, 60, 59, 44, 36, 40, 28, 11, 13, 4, -6, -14, -12, -18, -26,
-27, -26, -31, -29, -27, -34, -26, -16, -22, -30, -21, -13, -28, -29, -17, -15,
-25, -16, -12, -15, -16, -22, -25, -3, 64, 17, -92, 37, 122, -16, -46, 92, 76,
-28, 27, 82, 24, -26, 49, 43, -26, -29, 13, -24, -57, -23, -19, -50, -53, -21,
-20, -40, -26, -10, -24, -35, -15, -10, -20, -16, 0, -7, -16, -8, -5, 2, 0, -9,
-18, 1, 3, -8, -2, 11, 7, -2, 23, 32, 5, 5, 45, 28, -1, 9, 20, 2, 4, 10, 6, 2,
3, -14, -12, 0, -10, -27, -9, -7, -16, 17, -5, -11, 1, 25, -21, -5, 18, 4, -6,
11, 16, -14, -5, 0, -5, -19, -8, -11, -25, -21, -14, -11, -22, 3, 3, -13, -20,
21, 6, -24, 3, 54, -3, -38, 52, 63, 12, 0, 46, 34, 14, 24, 38, 13, 5, 26, 13,
-3, -18, -19, -34, -27, -22, -46, -53, -36, -20, -21, -28, -32, -23, -15, -8,
12, 18, 4, -15, 33, 40, -2, 8, 44, 24, 0, 36, 20, -2, 3, 33, 5, 3, 6, 3, -8, 6,
-2, -27, -14, -4, -23, -20, -2, -14, -21, 1, 2, -15, -16, 1, -6, -17, -5, -1,
-7, -8, 6, 6, -3, -1, 9, 5, -3, 3, 5, -6, -2, 0, -4, -11, 4, 16, 0, 4, 13, 12,
-9, 1, 13, 1, -2, 14, 20, 0, 0, 13, 15, 2, 1, 9, 0, -14, -3, 14, 3, -17, 2, 22,
4, -13, 11, 18, -3, 4, 21, 13, 1, 18, 20, 5, 9, 17, 10, -1, 10, 6, 1, -6, 4, -1,
-4, -1, 7, 0, -2, 2, -4, -11, -8, -5, -11, -15, -10, -21, -18, -16, -12, -20,
-14, -18, -19, -22, -15, -12, -12, -9, -8, 2, 5, -3, 0, 21, 17, 6, 12, 29, 21,
10, 22, 31, 10, -4, 7, 7, -13, 2, 14, 3, 11, 21, 17, 3, 4, 6, -8, -7, -13, -3,
-9, -1, -4, 4, 5, 1, 0, -2, 3, 0, 2, 0, -1, 1, -5, -1, -6, -5, -8, -6, -17, -18,
-17, -26, -37, -34, -47, -51, -43, -29, -24, -8, -2, 13, 22, 22, 30, 21, 32, 16,
25, 19, 29, 25, 31, 33, 33, 39, 32, 29, 12, 6, -8, -14, -22, -26, -22, -21, -8,
-2, 13, 11, 11, -3, -3, -16, -21, -22, -27, -21, -23, -16, -21, -15, -33, -34,
-38, -29, -22, -6, -14, 14, 23, 17, 27, 24, 35, 6, 26, 17, 26, 16, 37, 42, 38,
39, 34, 32, 5, 0, -17, -23, -38, -33, -26, -26, -7, 16, 42, 29, 25, 16, 0, -27,
-32, -29, -32, -31, -23, -17, -27, -32, -37, -37, -33, -13, -8, -19, 22, 10, 19,
3, 24, 12, 7, 22, 24, 40, 30, 61, 51, 54, 36, 38, 14, -8, -19, -28, -30, -39,
-20, -9, 4, 8, 16, 25, 22, 16, -3, -10, -23, -20, -23, -12, -7, -4, -3, -13,
-17, -41, -57, -70, -48, -28, -21, -27, 30, 23, 14, 8, 22, 11, -16, 17, 19, 36,
32, 73, 71, 66, 55, 45, 18, -18, -27, -37, -39, -42, -17, 1, 9, 16, 17, 10, -16,
-23, -23, -19, -20, -5, 9, 15, 20, 22, 22, 4, -9, -26, -41, -70, -76, -72, -39,
-9, 4, 8, 56, 31, 14, -8, -1, -20, -31, 11, 26, 53, 56, 97, 83, 65, 39, 22, -13,
-42, -40, -36, -26, -15, 17, 34, 28, 21, 8, -15, -46, -50, -43, -29, -12, 20,
47, 52, 48, 44, 21, -4, -28, -38, -61, -66, -75, -62, -65, -30, 5, 24, -6, 26,
29, -8, -18, -13, 13, -16, 27, 50, 71, 56, 71, 73, 36, 12, -4, -6, -39, -31,
-16, -3, -5, 6, 21, 5, -8, -22, -27, -51, -52, -32, -3, 13, 36, 56, 56, 37, 21,
14, -15, -33, -44, -40, -51, -48, -52, -50, -58, -40, -2, 9, -23, 12, 34, 2,
-12, -4, 22, -15, 15, 36, 55, 38, 54, 68, 41, 20, 8, 3, -33, -39, -30, -25, -29,
-18, 9, 6, 3, 2, 3, -16, -25, -10, 3, 10, 24, 50, 43, 31, 19, 13, -11, -29, -35,
-42, -43, -43, -34, -50, -51, -46, -23, -8, -1, -13, 31, 17, 4, -1, 13, 17, 0,
38, 39, 49, 36, 57, 50, 27, 16, 3, -8, -32, -22, -16, -10, -6, 10, 24, 13, 11,
6, -1, -26, -24, -10, 3, 17, 29, 43, 35, 24, 13, 3, -18, -27, -39, -38, -45,
-43, -47, -45, -42, -22, 5, 11, -5, 21, 34, 5, -4, 1, 16, -11, 11, 35, 45, 39,
54, 72, 46, 32, 19, 11, -22, -34, -29, -26, -27, -13, 14, 20, 11, 15, 4, -14,
-37, -16, -19, -12, -4, 24, 40, 6, 30, 5, 5, -33, -28, -27, -46, -44, -46, -30,
-39, -17, 11, 6, -6, 20, 23, -8, -15, 1, 16, -6, 23, 48, 61, 51, 63, 67, 36, 11,
1, -8, -36, -41, -27, -18, -17, -4, 20, 17, 5, -5, -11, -35, -45, -28, -11, -8,
17, 41, 42, 30, 28, 20, -10, -31, -36, -39, -53, -57, -51, -48, -46, -16, 10, 4,
-2, 30, 20, -2, -11, 12, 12, 3, 30, 51, 59, 51, 61, 64, 28, 14, -7, -21, -26,
-43, -36, -11, -25, -2, 20, 10, 15, -6, -2, -18, -33, -14, -4, 0, 8, 25, 27, 19,
10, 5, -12, -31, -32, -37, -43, -59, -48, -45, -38, -13, 9, -2, 5, 28, 23, 9,
-2, 18, 11, 14, 33, 60, 69, 56, 63, 54, 34, 0, -12, -21, -39, -48, -41, -24,
-18, -7, 11, 22, 16, 4, 1, -11, -23, -23, -13, 0, 3, 12, 22, 21, 12, 4, 1, -11,
-23, -28, -34, -42, -52, -52, -57, -34, 1, 3, -10, 30, 34, 23, -3, 9, 27, 7, 14,
26, 55, 43, 38, 50, 47, 27, -1, -6, -15, -35, -42, -33, -15, -14, 4, 4, 18, 5,
-5, -16, -24, -4, -8, -10, -15, 7, 22, 18, 18, 17, 19, 4, -7, -10, -41, -39,
-25, -53, -58, -57, -33, 14, -8, -20, 36, 30, 17, -3, 23, 39, 13, 18, 28, 58,
41, 34, 45, 46, 32, -1, -1, -7, -21, -37, -34, -23, -20, -15, -5, 11, 11, 7, 3,
-1, -2, -14, -15, -4, -2, 9, 4, 19, 15, 13, 5, -4, -5, -14, -16, -31, -34, -39,
-41, -40, -32, 5, 3, 6, 19, 25, 33, 14, 21, 24, 25, 21, 16, 35, 29, 26, 18, 13,
10, -4, -10, -13, -4, -5, -7, -13, -9, -2, -11, -4, -13, -12, -22, -22, -22,
-20, -18, -10, -5, -13, -8, -13, -20, -15, -28, -28, -23, -22, -16, -15, -6, -3,
-6, -7, -3, 4, 5, 8, 12, 24, 23, 25, 32, 33, 31, 21, 21, 20, 19, 13, 13, 16, 10,
6, 6, 11, 7, 1, 3, -4, -11, -21, -24, -24, -26, -27, -26, -20, -18, -14, -12,
-11, -9, -11, -13, -15, -13, -13, -11, -16, -9, -5, -9, -2, 1, -3, 8, 1, -2, 0,
-5, -1, 0, 8, 14, 20, 16, 16, 12, 8, 3, -5, -5, -6, -2, 2, 3, 9, 12, 14, 13, 14,
11, 8, 1, -9, -5, -5, 6, 10, 16, 15, 15, 28, 29, 24, 13, 13, 12, 6, 2, -3, -1,
3, 6, 5, 4, 4, 5, 3, 3, 3, 1, 1, 0, 0, 7, 9, 7, 7, 7, 3, -2, -4, -9, -8, -9, -7,
-5, -6, -3, -4, -1, -1, -4, -3, -5, -2, -2, 0, 0, 4, 8, 12, 15, 18, 21, 22, 18,
14, 13, 8, 3, -3, -5, -7, -4, -3, 0, 1, -1, -1, -3, -3, -5, -10, -11, -12, -11,
-10, -6, -5, -3, 0, -3, -5, -7, -7, -12, -14, -12, -13, -10, -10, -4, 0, -2, 2,
1, 4, 1, 3, 0, 0, 1, 1, 6, 5, 5, 5, 7, 9, 7, 10, 6, 8, 4, 4, 9, 14, 19, 27, 32,
31, 34, 33, 34, 32, 36, 42, 47, 53, 63, 64, 66, 68, 68, 64, 61, 57, 53, 55, 57,
58, 55, 58, 58, 56, 59, 60, 61, 60, 62, 58, 57, 47, 41, 39, 37, 34, 29, 25, 23,
18, 10, 1, 0, -11, -11, -14, -17, -20, -19, -18, -20, -22, -26, -32, -41, -46,
-55, -60, -58, -56, -62, -60, -61, -62, -70, -73, -78, -85, -89, -90, -98, -101,
-99, -97, -96, -91, -95, -90, -92, -88, -91, -88, -91, -86, -86, -78, -77, -73,
-71, -68, -66, -68, -67, -63, -65, -64, -61, -63, -60, -55, -52, -52, -46, -41,
-43, -45, -41, -42, -42, -41, -40, -32, -24, -20, -14, -10, -8, -13, -17, -15,
-13, -17, -16, -13, -7, -9, -2, -1, 2, 4, 8, 13, 18, 22, 19, 24, 29, 30, 36, 36,
35, 36, 40, 40, 44, 42, 44, 44, 44, 43, 41, 41, 36, 46, 41, 35, 34, 36, 31, 24,
29, 30, 29, 32, 40, 35, 41, 46, 45, 38, 38, 37, 30, 29, 27, 24, 22, 25, 26, 24,
29, 31, 29, 32, 33, 28, 34, 30, 26, 24, 32, 30, 31, 32, 33, 39, 37, 34, 31, 30,
26, 24, 19, 21, 19, 16, 20, 19, 21, 11, 10, 5, 7, 10, 6, 10, 9, 18, 14, 17, 15,
12, 6, 1, -1, -4, -3, -3, -6, -9, -5, -2, -4, -6, 0, -6, -3, -9, -8, -7, -10,
-5, -4, -2, -1, 2, -1, 2, 4, 2, 1, -3, 3, 2, -3, 1, 0, -1, -2, -2, -2, -2, -6,
-5, -12, -11, -13, -8, -4, -3, 2, 2, 1, 1, 0, -3, -3, 1, -6, -2, -3, -3, -8,
-10, -7, -6, -9, -7, -4, -4, -4, -9, -11, -8, -13, -13, -11, -5, -1, -1, 3, 8,
6, 2, -1, 1, -3, -7, -6, -1, 0, 0, -1, -1, -6, -8, -6, -10, -6, -7, -1, -5, -1,
2, 0, 3, 10, 3, 3, 2, 2, -1, 2, 5, 1, 1, -3, 1, -5, -5, -2, -2, -3, 3, -2, -1,
1, 3, -1, 5, 9, 3, 5, 8, 5, -1, 4, 2, -1, -3, -8, -5, -2, 0, -4, 5, 2, -3, -3,
-5, -2, -2, 1, -2, 0, -1, 0, -1, -7, -4, 3, -3, 0, -5, 0, -1, -4, -3, -5, -4,
-8, -10, -9, -9, -5, -9, -4, -6, -4, -2, -3, -3, -4, -4, -2, -1, -2, -4, -4, -6,
-9, -11, -16, -14, -11, -9, -6, -2, -7, -6, -6, -8, -10, -5, 2, 1, 0, 2, 0, -5,
-5, -6, -4, -1, 2, 2, 3, 3, 3, 2, 2, 6, -1, -1, 1, 3, 4, 4, 1, 4, 5, 2, 4, 2, 0,
-3, -3, -3, -6, -7, -6, -10, -9, -7, -13, -14, -9, -11, -12, -7, -8, -4, -7, -2,
-4, 2, 1, 3, 5, 5, 10, 4, 6, 5, 7, 1, -2, 5, 3, 0, 5, 10, 5, 4, 7, 4, -1, 3, 9,
5, 6, 10, 8, 6, 5, 2, 6, 5, 6, 7, 13, 12, 4, 7, 10, 5, 1, 6, 8, 5, 4, 2, 4, 4,
3, 10, 10, 12, 17, 17, 17, 17, 21, 20, 20, 18, 19, 21, 22, 26, 26, 21, 17, 18,
15, 14, 11, 8, 8, 7, 6, 6, 7, 10, 8, 8, 4, 2, 1, 1, -3, -2, -2, -2, -5, -8, -7,
-10, -18, -22, -21, -20, -23, -20, -22, -25, -26, -27, -25, -27, -28, -28, -31,
-35, -34, -35, -36, -41, -42, -43, -41, -43, -43, -39, -38, -39, -42, -38, -40,
-38, -36, -33, -31, -27, -26, -26, -24, -21, -17, -11, -5, 1, 3, 1, 3, 2, 3, 1,
3, 6, 10, 10, 13, 15, 20, 26, 28, 35, 42, 50, 55, 60, 64, 68, 72, 74, 73, 74,
73, 72, 73, 75, 72, 72, 73, 70, 67, 64, 60, 59, 55, 49, 42, 38, 31, 23, 19, 13,
8, 2, -1, -2, -2, -4, -1, 3, 7, 12, 15, 21, 23, 24, 24, 26, 28, 28, 24, 18, 16,
13, 7, 7, 6, 3, -1, -8, -9, -15, -15, -15, -12, -2, 11, 15, 15, 19, 22, 25, 20,
19, 14, 10, 4, -3, -9, -19, -27, -37, -44, -56, -66, -78, -87, -94, -102, -109,
-114, -115, -120, -124, -127, -126, -126, -127, -126, -127, -126, -127, -118,
-82, -50, -54, -56, -49, -29, -25, -38, -42, -30, 0, 8, 13, 8, 20, 29, 23, 8,
-6, -6, -9, -8, -17, -17, -12, -5, 2, 5, 11, 7, -3, -17, -23, -22, -20, -22,
-18, -9, -6, -5, -9, -7, -8, -10, -17, -25, -32, -29, -18, 14, 57, 93, 88, 87,
79, 85, 79, 59, 51, 53, 89, 104, 117, 103, 100, 96, 79, 56, 23, 14, 13, 31, 33,
34, 40, 46, 49, 37, 35, 29, 30, 20, 16, 18, 19, 20, 22, 25, 26, 21, 13, 3, -8,
-18, -28, -36, -47, -56, -56, -42, -5, 34, 48, 33, 32, 27, 42, 19, 12, 9, 40,
77, 91, 90, 70, 72, 59, 45, 10, -7, -6, 11, 27, 28, 36, 36, 43, 29, 11, -12,
-17, -4, 10, 20, 18, 16, 19, 26, 20, 13, 4, 9, 2, -13, -37, -51, -55, -59, -66,
-88, -101, -107, -86, -48, -10, -3, -17, -10, -14, -6, -39, -43, -46, -6, 20,
32, 27, 18, 24, 6, -13, -48, -55, -49, -28, -21, -21, -20, -22, -21, -43, -61,
-79, -75, -66, -56, -38, -14, 5, 3, -3, -21, -18, -21, -11, -16, -9, -7, -8,
-16, -36, -47, -58, -58, -79, -100, -114, -77, -16, 44, 49, 24, 20, 15, 18, -30,
-48, -44, 17, 59, 74, 64, 61, 69, 55, 25, -26, -33, -23, 12, 16, 14, 12, 18, 17,
-6, -28, -39, -23, -6, 7, 4, 14, 33, 51, 50, 24, 11, 5, 20, 18, 19, 17, 29, 35,
30, 14, -4, -12, -23, -33, -47, -52, -60, -62, -42, 2, 45, 39, 17, 5, 8, 12, -7,
-10, 1, 51, 74, 83, 57, 41, 29, 19, -6, -30, -28, -8, 26, 32, 32, 21, 20, 13, 1,
-14, -16, -5, 7, 11, 1, -4, -9, -9, -12, -5, 7, 16, 23, 25, 18, 12, 7, 10, 8,
11, 8, 7, 3, -5, -18, -29, -33, -36, -46, -58, -61, -23, 39, 69, 38, 9, -9, 3,
-21, -49, -62, -22, 43, 74, 73, 48, 49, 44, 32, -14, -33, -28, 12, 32, 30, 17,
13, 12, -4, -28, -48, -39, -18, -4, -11, -16, -17, -10, -13, -24, -26, -5, 26,
27, 13, 4, 9, 28, 32, 39, 37, 45, 33, 15, -12, -29, -37, -38, -45, -52, -60,
-65, -75, -65, -21, 40, 46, 24, 3, 1, 10, -21, -39, -47, 9, 44, 69, 42, 31, 26,
33, 12, -21, -29, -11, 23, 27, 16, -4, -3, -7, -15, -36, -38, -23, 3, 11, 8, 4,
5, 11, 3, -9, -11, 10, 29, 23, -3, -17, -14, -5, -3, 0, 9, 28, 37, 28, 10, -1,
2, 0, -10, -31, -43, -56, -65, -77, -51, 3, 47, 29, 15, -2, 16, -1, -26, -51,
-25, 23, 52, 51, 22, 24, 23, 25, -8, -21, -16, 25, 45, 45, 24, 15, 12, 0, -21,
-40, -34, -14, -3, -10, -17, -14, -3, 0, -5, -7, 10, 40, 52, 30, 5, -4, 7, 14,
12, 12, 22, 35, 26, 8, -16, -14, -14, -14, -34, -43, -55, -61, -79, -69, -26,
30, 27, 7, -10, -1, 11, -10, -24, -24, 29, 58, 69, 34, 28, 23, 27, -3, -26, -28,
3, 37, 45, 39, 28, 26, 15, -7, -33, -36, -24, -11, -15, -21, -24, -16, -14, -18,
-18, 1, 34, 52, 30, 6, -2, 13, 23, 12, 9, 11, 26, 12, -7, -26, -16, -4, 6, -9,
-20, -33, -44, -64, -63, -29, 20, 18, -3, -16, -8, 4, -17, -26, -20, 39, 70, 84,
54, 45, 35, 25, -10, -37, -37, -8, 22, 24, 18, 7, 9, -4, -21, -35, -23, -3, 14,
7, -4, -11, -14, -25, -36, -31, -6, 33, 52, 38, 18, 15, 22, 23, 12, 13, 18, 29,
10, -9, -30, -19, -15, -11, -24, -28, -31, -34, -50, -50, -16, 36, 37, 10, -6,
-4, 6, -22, -34, -38, 16, 44, 59, 31, 28, 29, 32, 4, -19, -20, 2, 23, 14, 7, -3,
3, -9, -24, -36, -21, -2, 9, -1, -13, -15, -13, -13, -23, -18, -8, 9, 10, 11,
13, 16, 10, 15, 17, 26, 23, 27, 22, 18, 7, -3, -7, -5, 4, 8, 5, -8, -18, -33,
-48, -64, -72, -73, -36, 19, 43, 10, -7, -21, -5, -32, -46, -46, 9, 54, 68, 54,
32, 36, 25, 10, -21, -13, 2, 25, 12, -1, -8, -1, -2, -15, -23, -12, 9, 14, 9,
-5, -3, -3, -9, -20, -17, -9, 4, 4, -2, -1, 6, 12, 9, 13, 20, 23, 19, 7, 5, 12,
14, 9, 3, 8, 9, 6, -5, -9, -6, 2, -7, -18, -31, -30, -36, -45, -64, -63, -26,
29, 34, 0, -11, -13, 4, -31, -39, -28, 30, 61, 59, 35, 27, 36, 21, 2, -20, 1,
18, 30, 10, 2, 4, 10, -5, -25, -26, -12, 5, -4, -14, -18, -9, -10, -20, -25,
-16, 0, 4, 1, -3, 2, 4, 4, -4, 3, 13, 26, 27, 26, 16, 8, 8, 7, 7, 8, 16, 22, 21,
7, 0, -1, -4, -5, -13, -9, -9, -13, -29, -33, -40, -44, -62, -58, -22, 26, 14,
-4, -11, 5, 10, -18, -18, -4, 38, 38, 35, 18, 30, 25, 18, 6, 16, 29, 27, 15, 8,
15, 12, 0, -13, -4, 2, 0, -16, -23, -19, -14, -17, -20, -11, 2, 3, -7, -13, -8,
1, 4, 6, 12, 17, 19, 16, 13, 12, 12, 16, 22, 26, 13, 10, 7, 12, 3, -1, -5, 4, 3,
2, -5, -10, -12, -15, -17, -22, -24, -29, -27, -23, -25, -37, -51, -45, -13, 20,
9, 1, 2, 17, 19, 6, 7, 15, 32, 33, 32, 20, 18, 12, 19, 18, 14, 4, 4, 8, 8, 0,
-10, -9, -8, -10, -17, -18, -18, -15, -20, -24, -23, -14, -10, -8, -7, -2, 1, 2,
1, 1, 0, 2, 5, 7, 10, 13, 13, 12, 7, 5, 5, 4, 4, 11, 19, 25, 15, 10, 5, 4, 2,
-2, -2, -1, 1, -2, -3, -8, -13, -16, -17, -18, -21, -19, -14, -9, -17, -24, -31,
-35, -44, -43, -19, 19, 18, 6, 3, 11, 11, 2, -1, 6, 19, 26, 29, 28, 21, 15, 6,
24, 11, -7, 5, -11, 14, -7, -1, -5, 2, -4, -3, -15, -5, -12, -7, -6, -2, -2, -1,
0, 2, 0, 0, 1, 2, 7, 7, 8, 7, 9, 5, 8, 5, 6, 7, 7, 9, 8, 6, 5, 1, 1, -4, -3, -5,
-2, -4, -5, -9, -7, -7, -5, -4, -3, 3, 7, 4, 2, 0, 1, 4, 9, 10, 16, 14, 14, 6,
-1, -7, -9, -11, -10, -16, -20, -25, -33, -34, -19, -1, -9, -12, -4, 7, 9, 10,
9, 10, 10, 12, 15, 14, 16, 23, 32, 29, 16, 6, 2, -2, -5, -8, -5, -2, -1, -6,
-11, -15, -16, -15, -15, -13, -9, -4, 1, 1, -1, -4, -2, -3, 0, 2, 8, 10, 11, 10,
12, 10, 5, 2, 2, 2, 6, 8, 9, 12, 20, 24, 18, 5, 2, 4, 8, 3, 2, 0, -1, -2, -1, 2,
-3, -8, -12, -12, -16, -17, -18, -11, -13, -13, -16, -16, -22, -21, -22, -22,
-23, -19, -3, 5, -2, -4, 6, 10, 9, 6, 9, 10, 11, 10, 11, 11, 12, 19, 23, 20, 14,
13, 14, 11, 4, 1, -1, -3, -5, -3, 2, 6, 4, 5, 3, -3, -2, 1, 1, -1, -1, 1, 3, 0,
-3, -3, -2, -5, -6, -10, -11, -11, -8, -5, -2, -4, -6, -1, -4, -6, -1, -1, -5,
-6, 3, -1, -7, -10, -3, -6, -12, -12, -8, -7, -8, -9, -12, -11, -7, -4, -2, 1,
11, 17, 9, 10, 15, 10, 2, 8, 19, 15, 14, 18, 18, 8, 1, 3, 0, -3, -2, 5, 2, -4,
-9, -7, -11, -13, -9, -3, -5, -6, -7, -4, -7, -14, -16, -16, -14, -13, -12, -10,
-7, -4, -4, -7, -6, -8, -11, -12, -15, -8, 2, 11, 12, 7, 7, 11, 15, 14, 16, 17,
17, 16, 18, 21, 21, 19, 14, 12, 11, 9, 7, 4, -4, -5, -1, 8, 4, -3, -8, -12, -18,
-18, -8, -3, -7, -11, -6, -3, -3, -5, 0, -4, -2, 0, 4, 0, -7, -4, -4, 0, 1, 6,
6, 3, 2, -6, -4, 2, 6, 6, 7, 5, 2, 1, 8, 10, 7, 7, 10, 11, 7, 1, 0, 3, 4, 11,
12, 11, 3, -1, -2, -4, -1, 0, 3, -2, -2, 0, -4, -4, -3, -3, -3, -1, -5, -6, -8,
-12, -18, -15, -9, -9, -8, -3, 1, 2, 1, 7, 10, -1, -6, 3, 8, 6, -1, -5, -6, -1,
5, 9, 5, -2, -2, -2, -5, -2, -1, 5, 2, -4, -9, -6, 0, 1, 4, 1, 5, 14, 26, 21,
10, 2, -2, -9, -11, -1, 4, -6, -13, -13, -16, -18, -14, -8, -6, -11, -10, 0, 1,
-7, -7, 0, 3, 3, 11, 21, 15, 1, 1, 4, 2, 7, 12, 8, -3, -6, -11, -9, -2, -3, -3,
-1, 0, -1, 2, 2, 5, 5, 8, 9, 16, 18, 5, -4, -13, -18, -16, -7, 6, 3, -1, -1, -7,
-16, -13, -9, -6, -13, -12, -1, 4, 0, -5, 7, 17, 17, 18, 14, 8, 4, -1, -2, -7,
-5, -12, -18, -13, -4, -3, -8, -7, 4, 5, 1, -4, -2, 3, -3, -2, 1, -3, -2, 6, 12,
9, -1, 4, -1, -11, -5, 7, 4, -8, -1, 6, -1, -11, -10, -6, -13, -16, -9, 5, 15,
13, 6, 4, 3, 3, 5, 5, 4, -1, -5, -5, -4, 2, 2, 1, 1, 6, 6, 11, 10, 2, -3, -1, 1,
-3, 2, 8, 0, -11, -10, -6, -2, 4, 5, 3, 2, 5, 10, 7, 6, 6, 0, -9, -9, -2, -5,
-12, -5, 2, 6, 6, 13, 16, 13, 9, 4, -2, -10, -14, -16, -24, -27, -13, 9, 15, 11,
15, 22, 23, 19, 21, 15, 5, -7, -10, -7, -4, -3, -7, -2, -3, -3, 1, 6, 6, 0, -6,
-6, -5, -7, -13, -8, -7, -6, 1, 6, 4, 7, 13, 17, 10, 11, 15, 13, 9, 5, -4, -16,
-18, -13, -12, -11, -6, -5, -7, -6, 7, 9, 7, 9, 8, 5, 2, 8, 8, 0, -2, 0, 0, 4,
8, 6, 7, 10, 9, 3, 0, 1, -2, -10, -13, -14, -17, -13, -7, -5, -8, -8, -7, -4, 3,
14, 19, 16, 12, 5, -2, -4, -7, -7, -4, -4, -6, -9, -10, -6, 2, 11, 13, 10, 4, 2,
8, 14, 12, 4, -4, -14, -11, -9, -4, 1, 0, -6, -12, -5, 1, 5, 5, 3, -4, -11, -11,
-8, -6, -4, -10, -15, -6, 6, 17, 19, 21, 22, 15, 12, 5, 1, 2, -3, -10, -17, -24,
-24, -20, -11, -5, 0, 2, 1, 3, 4, 7, 9, 8, 8, 7, 4, 5, 6, 6, 3, 1, 3, 8, 4, 0,
0, -1, -6, -8, -12, -15, -17, -19, -22, -22, -16, -15, -13, -5, 5, 12, 14, 18,
21, 19, 15, 9, 3, 1, 0, -2, -6, -7, -6, -8, -4, 2, 4, 4, 3, 1, -2, -3, -3, -3,
-1, -3, -2, -1, 2, 2, 8, 5, 1, 1, 4, 4, 4, 8, 9, 4, -1, -7, -9, -8, -2, -4, -6,
-8, -8, -2, 9, 14, 9, 7, -1, -4, -5, -3, -3, -5, -6, -8, -5, 0, 6, 11, 14, 12,
8, 5, 6, 3, 2, 3, 2, 0, -1, 3, 4, 6, 6, 3, 0, -5, -10, -11, -8, -7, -8, -8, -6,
-8, -3, 3, 8, 9, 9, 10, 10, 12, 16, 18, 14, 8, 7, 6, 3, 4, 9, 9, 8, 5, -1, -9,
-9, -7, -2, -2, -4, -1, 1, 0, 1, 6, 7, 12, 17, 19, 18, 19, 18, 15, 8, 4, -2, -3,
-3, -1, 8, 6, -2, 3, -5, -7, -16, -26, -27, -25, -20, -13, -9, 1, 7, 9, 10, 17,
18, 19, 15, 15, 10, 3, -5, -13, -12, -7, -5, -2, 4, 11, 10, 3, -3, -6, -10, -14,
-13, -6, -4, 0, 9, 10, 10, 13, 13, 7, 5, 6, 3, -3, -4, -8, -11, -18, -21, -23,
-17, -16, -13, -8, -3, -2, 0, -5, -6, -11, -8, -4, -3, 0, 2, 1, -2, 1, 4, 3, -2,
1, 1, -2, -8, -6, -3, -8, -6, -2, 1, 7, 16, 17, 10, 12, 8, 0, -7, -9, -11, -17,
-17, -16, -12, -8, -5, -1, 4, 3, -3, -1, -4, -8, -6, -3, 0, 1, 10, 11, 18, 22,
21, 18, 16, 8, 0, -7, -12, -16, -22, -17, -12, -9, -5, 5, 8, 9, 7, 8, 10, 8, 5,
3, 4, 5, 9, 6, 5, 7, 3, -1, -5, -7, -11, -13, -16, -16, -14, -14, -13, -8, -4,
1, 10, 14, 14, 15, 17, 15, 6, -2, -4, -3, 0, 5, 7, 5, 2, -8, -8, -6, -6, -4, -6,
-13, -17, -15, -12, -11, -6, 1, 4, 11, 20, 25, 22, 19, 14, 0, -9, -12, -15, -15,
-8, -7, -8, -5, -6, -9, -8, -8, -9, -8, -6, -8, -9, -9, -9, -7, -1, 4, 12, 19,
23, 22, 16, 8, -6, -15, -18, -19, -17, -15, -10, -6, -1, -3, -1, -2, -3, -4, -1,
1, 3, 8, 8, 4, 3, 8, 9, 15, 19, 19, 15, 9, 2, -5, -12, -18, -23, -23, -19, -14,
-11, -6, -7, -7, -4, -6, -7, -2, 4, 5, 7, 7, 5, 6, 9, 8, 7, 12, 13, 10, 9, 6, 1,
-6, -13, -16, -12, -9, -6, 1, 5, 1, 5, 7, 1, 3, 7, 5, 4, 9, 7, 3, 2, 3, 1, 1, 4,
8, 11, 8, 5, -2, -8, -13, -15, -15, -15, -13, -9, -6, -5, -2, 1, 0, 0, 2, 3, 1,
5, 9, 7, 5, 1, 2, 4, 7, 9, 11, 11, 7, 4, 2, -3, -6, -4, -5, -6, -2, 3, 2, 3, 1,
-4, -2, 3, 4, 5, 7, 8, 7, 4, 3, 3, 3, 3, 0, 3, 0, 1, -2, -4, -7, -7, -7, -8, -4,
-1, -1, -2, 0, -5, -7, -3, 2, 3, 7, 10, 11, 7, 4, 4, 6, 4, 3, 5, 1, -2, -3, -2,
-6, -7, -8, -11, -11, -7, -3, -3, 2, 2, 1, 1, 2, 2, 8, 11, 12, 10, 9, 4, 1, 3,
1, 1, 0, -4, -6, -4, -7, -7, -2, -4, -7, -6, -6, -6, -1, 3, -2, 0, 3, 3, 4, 7,
9, 11, 10, 9, 5, 5, 2, -3, -3, -2, -5, -5, -4, -3, -2, 3, 2, -3, -2, -1, 1, 2,
4, 4, 3, 2, 3, 5, 5, 6, 8, 8, 6, 5, 3, 1, -3, -3, -4, -6, -6, -4, -6, -5, 0, 1,
-2, 0, 3, 3, 2, 4, 4, 1, 3, 2, 3, 2, 3, 4, 4, 3, 1, 1, -2, -5, -7, -8, -8, -6,
-3, -1, -1, -1, -1, 0, 0, 1, -1, 2, 5, 8, 9, 9, 8, 7, 7, 5, 3, 4, 2, -1, -2, -2,
-7, -11, -11, -11, -11, -6, -2, 2, 3, 6, 7, 4, 2, 2, 1, 2, 2, 5, 4, 2, 3, 7, 6,
4, 5, 4, 0, -1, -1, -3, -6, -9, -13, -17, -15, -13, -10, -6, -2, -1, -1, 0, -1,
-1, 1, 2, 1, 3, -1, 0, 0, -2, -5, -4, -3, -1, 3, 2, 4, 5, 5, 4, 5, 4, 1, 2, 5,
6, 6, 7, 8, 5, 2, 0, -2, -5, -4, -6, -11, -10, -11, -12, -11, -14, -14, -11, -8,
-10, -7, -6, -6, -3, 2, 2, 3, 6, 7, 9, 12, 14, 13, 11, 8, 5, 2, 1, 4, 6, 5, 5,
6, 5, 3, 1, 1, 0, -4, -5, -4, -7, -8, -7, -10, -11, -9, -9, -8, -3, -2, -1, 2,
3, 2, 1, 1, 1, 4, 5, 5, 6, 6, 4, 0, -2, -1, -2, -2, 2, 2, 1, 2, 3, 0, -1, 0, -1,
-1, -1, -3, -6, -7, -8, -8, -7, -5, -1, 0, 2, 3, 4, 4, 2, 2, 3, 3, 2, 2, 3, 3,
3, 3, 2, 1, -1, -1, -2, -1, 1, 1, 4, 6, 6, 7, 8, 10, 10, 7, 8, 4, -3, -8, -12,
-15, -18, -18, -16, -15, -14, -11, -9, -7, -4, -2, -1, 0, 0, 2, 3, 5, 5, 8, 10,
12, 15, 16, 16, 17, 15, 12, 8, 8, 5, 5, 3, 1, -1, -1, 0, 0, -1, -3, -4, -6, -7,
-8, -10, -11, -9, -6, -3, -3, -3, -2, -2, -2, -3, -2, 0, 0, 2, 1, 2, 2, 4, 5, 4,
5, 6, 6, 9, 9, 8, 7, 5, 4, 5, 6, 8, 8, 7, 6, 5, 4, 2, 1, 0, -4, -9, -11, -15,
-15, -15, -13, -12, -9, -5, -4, 0, 0, -1, 1, 0, 0, 0, -1, 0, 3, 5, 5, 6, 10, 13,
14, 18, 15, 12, 10, 4, 2, 0, -2, -3, -4, -5, -5, -6, -6, -6, -8, -10, -13, -16,
-17, -18, -17, -16, -11, -7, -4, -1, 3, 6, 6, 4, 5, 2, 1, 1, 1, 2, 2, 3, 6, 6,
8, 9, 6, 5, 0, -1, -3, -4, -5, -4, -4, -2, -1, 2, 4, 5, 7, 5, 2, -1, -6, -11,
-14, -17, -17, -15, -13, -10, -5, -1, -1, 0, -1, -1, -1, 0, 1, 2, 1, 4, 4, 6, 7,
8, 9, 11, 10, 8, 8, 7, 3, 2, 1, -3, -3, 0, 1, 1, 1, -1, -1, -4, -5, -8, -12,
-12, -11, -8, -4, -1, 6, 12, 14, 15, 15, 13, 13, 8, 3, -2, -4, -10, };

#endif /* voll_table_H_ */