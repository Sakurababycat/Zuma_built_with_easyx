//
// Created by AMD on 2020/4/7.
//

#ifndef ZUMA_V1_0_APPEARANCE_H
#define ZUMA_V1_0_APPEARANCE_H

#include <direct.h>
#include <atlstr.h>
#include <conio.h>
#include <graphics.h>
#include <windows.h>
#include "Multi_tread.h"

#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "MSIMG32.LIB")

#define WINDOWWITH 800 //���ڵĿ��
#define WINDOWHEIGHT 650 //���ڵĸ߶�
#define LifeDist 100 //�۳������İ뾶
#define numOfMusic 7 //��������
#define numOfMusOperate 3 //ÿ�����ֲ���������
#define MAX_COUNT 100 //���а��ܼ�¼��
#define setPicRadius 60 //��Ϸ���������ð�ť����
#define setPicR 640 //���������ұ߽�
#define newGameL 70 //����Ϸ��߽�
#define newGameR 170 //����Ϸ�ұ߽�
#define ScoreL 190 //���а���߽�
#define ScoreR 280 //���а��ұ߽�
#define endGameL 300 //������Ϸ��߽�
#define endGameR 420 //������Ϸ�ұ߽�
#define setL 440 //������߽�
#define setR 505 //�����ұ߽�
#define nextl 540 //���а���һҳ��ť��߽�
#define nextr 570 //���а���һҳ��ť�ұ߽�
#define pastl 230 //���а���һҳ��ť��߽�
#define pastr 260 //���а���һҳ��ť�ұ߽� 
#define buttonWEIGHT 30 //���а�ťֱ��
#define buttonUp 590 //���а�ҳ��ť�ϱ߽�
#define recl 100 //���а������߽�
#define rankr 200 //���а�rank���ұ߽�
#define namer 600 //���а�name���ұ߽�
#define recr 700 // ���а�����ұ߽�
#define recu 125 // ���а�����ϱ߽�
#define recd 565 //���а�����±߽�
#define textHeight 40 //���а�ÿ������ռ�ÿ��

//������Ƶ�ӿ�

enum MusS
{
    bgm, shoot, hurt, insert, erase, button, move
};
static MusS music[numOfMusic] = {bgm, shoot, hurt, insert, erase, button, move};
const static CString musics[numOfMusic][numOfMusOperate] =
        {
                {"open .\\resource\\flower_dance.mp3 alias myMusic", "play myMusic repeat", "close myMusic"},
                {"open .\\resource\\shoot.mp3 alias shoot", "play shoot", "close shoot"},
                {"open .\\resource\\hurt.mp3 alias hurt", "play hurt", "close hurt"},
                {"open .\\resource\\insert.wav alias insert", "play insert", "close insert"},
                {"open .\\resource\\erase.mp3 alias erase", "play erase", "close erase"},
                {"open .\\resource\\button.mp3 alias butMus", "play butMus", "close butMus"},
                {"open .\\resource\\move.mp3 alias move", "play move", "close move"}
        };
//const CString load("open .\\resource\\flower_dance.mp3 alias myMusic"), play("play myMusic repeat"), close("close myMusic");
//const CString loadShoot("open .\\resource\\boom.mp3 alias shoot"), playShoot("play shoot"), closeShoot("close shoot");
//const CString loadHurt("open .\\resource\\hurt.mp3 alias hurt"), playHurt("play hurt"), closeHurt("close hurt");
//const CString loadIns("open .\\resource\\insert.mp3 alias insert"), playIns("play insert"), closeIns("close insert");
//const CString loadErase("open .\\resource\\erase.mp3 alias erase"), playErase("play erase"), closeErase("close erase");
//const CString loadBut("open .\\resource\\button.mp3 alias butMus"), playBut("play butMus"), closeBut("close butMus");
//const CString loadMov("open .\\resource\\move.mp3 alias move"), playMov("play move"), closeMov("close move");

//ͼƬ�ӿ�
const static CString gameWallImg(".\\resource\\gamewall.jpg");
const static CString difWallPaper(".\\resource\\wallpaper.jpg");
const static CString setting(".\\resource\\setting.jpg");
const static CString scorePic(".\\resource\\scores.jpg");
const static CString posS[8] = {".\\resource\\0Odiff.png",
                         ".\\resource\\1Odiff.png",
                         ".\\resource\\2Odiff.png",
                         ".\\resource\\3Odiff.png",
                         ".\\resource\\0Xdiff.png",
                         ".\\resource\\1Xdiff.png",
                         ".\\resource\\2Xdiff.png",
                         ".\\resource\\3Xdiff.png"};

//������ɫ
const static COLORREF ballColorTable[] = {
        0xffa2a2/*���*/, 0xfeff88/*����(PS��Ϊ��ɫ)*/,\
        0x42ff00/*����*/, 0x71fff0/*���(PS��Ϊ��ɫ)*/, \
        0xff0090/*����*/, 0xde00ff/*õ��*/, 0xeadddf/*����*/
};

//��ť��С
typedef struct
{
    int width = 200;
    int height = 100;
}choiceButton;

//��λ��ť���λ��
int findMouse(int x, int y);

//��ʾ͸��pngͼƬ,��ԭͼ�д���ɫ����
void putTransPic(LPCTSTR buffer, int leftPos, int upPos, int width, int height, \
                int leftPosOri, int upPosOri, int widthOri, int heightOri, long color = 0xffffff);

//��ʾ�Ѷ�ѡ��
void difChoicePic(int order[8]);

//��ʾ��ӭ����
void startGame();

//����ѡ���Ѷ�
int chooseDifficulty();

//���ò˵�
void setMenu();

//���а�
void scoreBoard(TCHAR newName[MAX_COUNT] = NULL, long newNum = 0);

#endif //ZUMA_V1_0_APPEARANCE_H
