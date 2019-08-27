# include <stdio.h>
# include <string.h>
# include <windows.h>
# include <stdlib.h>
# include <conio.h>
# include <time.h>
# include <math.h>
# include<iostream>
using namespace std;
#pragma warning(disable:4996)
#define de_lenth 4//�߳�ʼ����
#define Row_max 20//��ͼ��
#define Line_max 30//��ͼ��
char map[Row_max][Line_max];
int snake[Row_max][Line_max];
int Head_x = Line_max / 2;
int Head_y = Row_max / 2;
int Tail_x;
int Tail_y;
int Head_v = 5;//ͷ���ƶ�
int timen=5;//��ʱ�̶�(���˶��ٶ�)
int food_x;
int food_y;
int score=0;//����
char direct = 's';//�ߵ��˶�����
void Creatmap(char map[Row_max][Line_max]);
void Creatsnake(int snake[Row_max][Line_max]);
void Creatfood(char map[Row_max][Line_max], int snake[Row_max][Line_max]);
bool Judgewall(int Head_y, int Head_x);
void printmap(char map[Row_max][Line_max], int snake[Row_max][Line_max]);
void Late();
void Run(char map[Row_max][Line_max], int snake[Row_max][Line_max]);
void Movetail();
bool Eatfood(char map[Row_max][Line_max]);
void Result();
void Creatmap(char map[Row_max][Line_max]) {//����ͼ
for (int i = 0; i <= Line_max - 1; ++i){
map[Row_max - 1][i] = '#';
map[0][i] = '#';
}
for (int i = 1; i <= Row_max - 2; ++i) {
map[i][0] = '#';
map[i][Line_max - 1] = '#';
}
}
void Creatsnake(int snake[Row_max][Line_max]) {//����
int n = de_lenth;
for (int i = Head_y; i >= Head_y - 5; --i) {
snake[i][Head_x] = n--;
if (i == Head_y - 5) {//����β�͸�λ��
Tail_y = i;
Tail_x = Head_x;
}
}
}
void Creatfood(char map[Row_max][Line_max], int snake[Row_max][Line_max]) {//�϶���2��ɵ��
do{
food_x = rand() % (Line_max - 2) + 1;
food_y = rand() % (Row_max - 2) + 1;
} while (snake[food_y][food_x] != 0||map[food_y][food_x]=='#');
map[food_y][food_x] = '*';
}
bool Eatfood(char map[Row_max][Line_max]) {//�ж��Ƿ�Ե�ʳ��
if (map[Head_y][Head_x] == '*'){
map[Head_y][Head_x] = ' ';
return true;
}
else return false;
}
bool Judgewall(int Head_y,int Head_x) {//�ж��Ƿ�ײǽ
if (Head_x == 0 || Head_x == Line_max - 1 || Head_y == 0 || Head_y == Row_max - 1)
return false;
else return true;
}
void printmap(char map[Row_max][Line_max], int snake[Row_max][Line_max]) {
for (int i = 0; i <= Row_max-1; ++i) {
for (int j = 0; j <= Line_max-1; ++j) {
//��ͼ����һ���ӡ
if (snake[i][j] == 0)cout << map[i][j];
else {
if (snake[i][j] == Head_v)cout << "Q";
else cout << "*";
}
}
cout << endl;
}
}
void Movetail() {//�ƶ�β��
if (snake[Tail_y][Tail_x] + 1 == snake[Tail_y + 1][Tail_x]) {
snake[Tail_y][Tail_x] = 0;
++Tail_y;
}
else if (snake[Tail_y][Tail_x] + 1 == snake[Tail_y - 1][Tail_x]) {
snake[Tail_y][Tail_x] = 0;
--Tail_y;
}
else if (snake[Tail_y][Tail_x] + 1 == snake[Tail_y][Tail_x + 1]) {
snake[Tail_y][Tail_x] = 0;
++Tail_x;
}
else {
snake[Tail_y][Tail_x] = 0;
--Tail_x;
}
}
void Result() {
system("cls");
cout << "Game Over!" << endl;
cout << "Your score is " << score * 10 << " !" << endl << "Press any key to exit!" << endl;
getch();
}
void Run(char map[Row_max][Line_max], int snake[Row_max][Line_max]) {//�ߵ��ƶ�
/*
�� -32 0xffffffe0 72 H
�� -32 0xffffffe0 80 P
�� -32 0xffffffe0 75 K
�� -32 0xffffffe0 77 M
*/
//�����Ϊ��ϼ�
char ch, sh;
while (1) {
if (Judgewall(Head_y,Head_x)) {
if (kbhit()) {//kbhit()�����жϼ����Ƿ��û���ͷ�ļ�"conio.h"
ch=getch();
if (ch == -32) {
sh=getch();
if (direct == 'a') {
if (sh == 'M')continue;
}
else if (direct == 'd') {
if (sh == 'K')continue;
}
else if (direct == 'w') {
if (sh == 'P')continue;
}
else {
if (sh == 'H')continue;
}
//תͷ
switch (sh) {
case'H':direct = 'w';
break;
case'P':direct = 's';
break;
case'K':direct = 'a';
break;
case 'M':direct = 'd';
break;
}
}
else {
if (direct == 'a') {
if (ch == 'd' || ch == 'D')continue;
}
else if (direct == 'd') {
if (ch == 'a' || ch == 'A')continue;
}
else if (direct == 'w') {
if (ch == 's' || ch == 'S')continue;
}
else {
if (ch == 'w' || ch == 'W')continue;
}
switch (ch) {
case 'a':case 'A': direct = 'a'; break;
case 'w':case 'W': direct = 'w'; break;
case 's':case 'S': direct = 's'; break;
case 'd':case 'D': direct = 'd'; break;
}

}
}
//�߶�һ��
if (direct == 'a') {
if (snake[Head_y][Head_x - 1] != 0)return;//�Ե��Լ�

--Head_x;
if (Eatfood(map)) {//����Ե���ʳ�β�Ͳ��������ӷ���
++score;
snake[Head_y][Head_x] = ++Head_v;
Creatfood(map, snake);
}
else {//û�Ե���ֻ�ƶ�ͷ��β��
snake[Head_y][Head_x] = ++Head_v;
Movetail();
}
}
else if (direct == 'd') {
if (snake[Head_y][Head_x + 1] != 0)return;
++Head_x;
if (Eatfood(map)) {
++score;
snake[Head_y][Head_x] = ++Head_v;
Creatfood(map, snake);
}
else {
snake[Head_y][Head_x] = ++Head_v;
Movetail();
}
}
else if (direct == 'w') {
if (snake[Head_y - 1][Head_x] != 0)return;

--Head_y;
if (Eatfood(map)) {
++score;
snake[Head_y][Head_x] = ++Head_v;
Creatfood(map, snake);
}
else {
snake[Head_y][Head_x] = ++Head_v;
Movetail();
}
}
else {
if (snake[Head_y + 1][Head_x] != 0)return;

++Head_y;
if (Eatfood(map)) {
++score;
snake[Head_y][Head_x] = ++Head_v;
Creatfood(map, snake);
}
else {
snake[Head_y][Head_x] = ++Head_v;
Movetail();
}
}
//gotoxy(30, 30);
//����
system("cls");
//��ӡһ��
printmap(map, snake);
//��ʱ
Late();
}
else return;
}
}
void Late() {//��ʱ����
for (int i = 0; i <= pow(22, timen); ++i)
;
}
int main()
{
	system("mode con cols=30 lines=21");
	system("color 64");
	MessageBox(NULL,"����̨����س���ʼ","TFjf-Tcs",MB_OK|MB_ICONINFORMATION); 
	getch();
	Creatsnake(snake);
	Creatmap(map);
	Creatfood(map, snake);
	Run(map, snake);
	Result();
	MessageBox(NULL,"��������������","TFjf-Tcs",MB_OK|MB_ICONINFORMATION);
}
