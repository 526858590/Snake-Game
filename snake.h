#ifndef SNAKE_H
#define SNAKE_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

// 常量定义
#define MAP_WIDTH 80
#define MAP_HEIGHT 25
#define INIT_SNAKE_LENGTH 5
#define MAX_SNAKE_LENGTH 100
#define MAX_FOOD 5
#define MIN_FOOD 1
#define FOOD_INTERVAL_MIN 3000
#define FOOD_INTERVAL_MAX 8000

// 方向定义
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

// 颜色定义
#define COLOR_SNAKE 14  // 黄色
#define COLOR_FOOD_NORMAL 12   // 红色
#define COLOR_FOOD_GOLD 14     // 金色
#define COLOR_FOOD_BLUE 9      // 蓝色
#define COLOR_WALL 15   // 白色
#define COLOR_TEXT 10   // 绿色

// 食物类型
#define FOOD_TYPE_NORMAL 0
#define FOOD_TYPE_GOLD 1
#define FOOD_TYPE_BLUE 2

// 位置结构体
typedef struct {
    int x;
    int y;
    int active;
    int type;  // 食物类型
    int score; // 食物得分
} Position;

// 蛇结构体
typedef struct {
    Position pos[MAX_SNAKE_LENGTH];
    int length;
    int direction;
    int speed;
    int score;
    int is_accelerated;
    int base_score;
    int move_count;  // 移动计数，用于动画
} Snake;

// 游戏统计结构体
typedef struct {
    int total_score;
    int games_played;
    int highest_score;
    int total_food_eaten;
    int total_gold_food;
    int total_blue_food;
    int total_play_time;  // 总游戏时间（秒）
} GameStats;

// 函数声明
void initConsole(void);
void gotoxy(int x, int y);
void setColor(int color);
void printsnake(void);
void welcometogame(void);
void createMap(void);
void scoreandtips(void);
void File_out(void);
void initsnake(void);
void createfood(void);
int biteself(void);
void cantcrosswall(void);
void speedup(void);
void speeddown(void);
void snakemove(void);
void keyboardControl(void);
void gameOver(void);
void explation(void);
void saveScore(int score);
void createSingleFood(void);
void initFoodSystem(void);
void updateFoodSystem(void);
void initGameStats(void);
void updateGameStats(void);
void showGameStats(void);

#endif // SNAKE_H