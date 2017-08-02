
#ifndef __MINE_H__
#define __MINE_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 9 
#define COL 9
#define ROWS 7
#define COLS 7
#define MINECOUNT 8

extern char board[ROW][COL];
extern char show[ROWS][COLS];
extern int count;

void menu();
void game();
void init(char board[ROW][COL] ,char ch,int len);
void init_show(char show[ROWS][COLS], char ch, int len);
void display(char show[ROWS][COLS]);
void display_board(char board[ROW][COL]);
void set_mine(char board[ROW][COL]);
char is_mine(char board[ROW][COL],int x,int y);
void set_show(char show[ROWS][COLS],int x,int y,char ch);
int is_win(char board[ROW][COL], int x, int y);


#endif // __MINE_H__

