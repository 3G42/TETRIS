#include<stdio.h>
#include<conio2.h>
#include<windows.h>
void gerapeca(int peca[8][12],int tela[48][30])
{
    int n,m,i=0,j=0,flag=0;
    for(i=0,m=0;i<8;i++)
    {
        for(j=0,n=9;j<12;j++)
        {
            if(peca[i][j] != 0)
            {
                tela[m][n] = peca[i][j];
                flag=1;
            }
            n++;
        }
        if(flag == 1)
        {
            m++;
        }
    }
}
void printapeca(int peca[8][12],int jogo[48][30])
{
    int i,j,x,y;
    x=67;
    y=2;
    gotoxy(x,y);
    for(i=0;i<42;i++)
    {
        for(j=0;j<30;j++)
        {
            textbackground(DARKGRAY);
            textcolor(BLACK);
            if(jogo[i][j]==1)
                printf("\xC8");
            else if(jogo[i][j]==2)
                printf("\xC9");
            else if(jogo[i][j]==3)
                printf("\xCD");
            else if(jogo[i][j]==4)
            {
                printf("\xBC");
            }
            else if(jogo[i][j]==5)
            {
                printf("\xBB");
            }

        }
        x=67;
        y++;
        gotoxy(x,y);
    }
}
int main()
{
    printf("Pressione enter pra iniciar");
    getch();
    system("cls");
    keybd_event(VK_MENU  , 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU  , 0x38, KEYEVENTF_KEYUP, 0);
    int jogo[48][30];
    int L[8][12]= {{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,2,3,5,0,0,0,0,0,0},{0,0,0,1,3,4,0,0,0,0,0,0},{0,0,0,2,3,5,0,0,0,0,0,0},{0,0,0,1,3,4,0,0,0,0,0,0},{2,3,5,2,3,5,0,0,0,0,0,0},{1,3,4,1,3,4,0,0,0,0,0,0}};
    int i,j,x=55,y=2;
    gotoxy(x,y);
    for(i=0;i<42;i++)
    {
        for(j=0;j<30;j++)
        {
            jogo[i][j]=0;
            gotoxy(x,y);
            x++;
            printf("\xDB");
            textbackground(DARKGRAY);
        }
        x=55;
        y++;
    }
    gerapeca(L,jogo);
    printapeca(L,jogo);

textcolor(WHITE);
textbackground(BLACK);

}
