/* Author: Md. Anuvob Pradan
    Date: 12-02-2018
*/
#include<stdio.h>
#include <windows.h>

char a[4][4]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};

int cal()
{
    int p1=0,p2=0,p=0;
    int fi,fj;
    //for row 1
    for(fi=1;fi<4;fi++)
    {
        if((a[1][fi]==88))
           p1++;
        if((a[1][fi]==79))
           p2++;

           if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }
    //for row 2

    p1=0;
    p2=0;

    for(fi=1;fi<4;fi++)
    {
        if((a[2][fi]==88))
           p1++;
        if((a[2][fi]==79))
           p2++;

           if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }

    //for row 3

    p1=0;
    p2=0;
    for(fi=1;fi<4;fi++)
    {
        if((a[3][fi]==88))
           p1++;
        if((a[3][fi]==79))
           p2++;

           if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }
    //for column 1
    p1=0;
    p2=0;
    for(fi=1;fi<4;fi++)
    {
        if((a[fi][1]==88))
           p1++;
        if((a[fi][1]==79))
           p2++;

           if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }

    //for column 2
    p1=0;
    p2=0;
    for(fi=1;fi<4;fi++)
    {
        if((a[fi][2]==88))
           p1++;
        if((a[fi][2]==79))
           p2++;

           if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }

    //for column 3
    p1=0;
    p2=0;
    for(fi=1;fi<4;fi++)
    {
        if((a[fi][3]==88))
           p1++;
        if((a[fi][3]==79))
           p2++;

           if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }

    //for cross 1

    p1=0;
    p2=0;
    for(fi=1;fi<4;fi++)
    {
        if((a[fi][fi]==88))
            p1++;
        if((a[fi][fi]==79))
            p2++;

        if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }

    //for cross 2
    p1=0;
    p2=0;
    int i=1;
    for(fi=3;fi>=1;fi--)
    {
        if((a[i][fi]==88))
            p1++;
        if((a[i][fi]==79))
            p2++;
            i++;

        if(p1==3)
            return 1;
           if(p2==3)
            return 2;

    }

    //over all
    for(fi=1;fi<4;fi++)
        for(fj=1;fj<4;fj++)
        p=p+a[fi][fj];

    if(p==756)
       return p;


    return 0;






}
main()
{

    int i,j,r,c,turn=1,che=0,key=0,exit;

    while(che==0)
    {
        lv:
        printf("\n\t\t\t**** Welcome to Tic Tac Toe ****\n\n");


            if(key==1)
            {
                printf("Invalid Position entered, Please enter a valid position!\n\n");
                key=0;
            }

        for(i=1;i<4;i++)
        {
            printf("\t\t\t\t");
            for(j=1;j<4;j++)
                printf("%c    ",a[i][j]);
                printf("\n");
        }

        if(turn%2!=0)
            printf("\n\tPlayer 1(X)\n\n");
        else
            printf("\n\tPlayer 2 (O)\n\n");

        printf("\tEnter your position:\n\n\tROW:");
        scanf("%d",&r);
        printf("\n\tCOLUMN:");
        scanf("%d",&c);

        if(turn%2!=0)
        {
            if(a[r][c]!='-')
            {
                key=1;
                system("cls");
                goto lv;
            }

            a[r][c]='X';
        }

        else
        {
            if(a[r][c]!='-')
            {
                key=1;
                system("cls");
                goto lv;
            }

            a[r][c]='O';
        }

        system("cls");
        turn++;
        che=cal();

    }
    printf("\n\t\t\t**** Welcome to Tic Tac Toe ****\n\n");

    for(i=1;i<4;i++)
        {
            printf("\t\t\t\t");
            for(j=1;j<4;j++)
                printf("%c    ",a[i][j]);
                printf("\n");
        }

    if(che==1)
        printf("\n\n\t\tCongratulations!!! Player 1 is the winner");
    else if(che==2)
        printf("\n\n\t\tCongratulations!!!Player 2 is the winner");

        else
            printf("\n\n\t\t   No Winner decided play again");

        printf("\n\nEnter 1 to continue or any key to exit:");
        scanf("%d",&exit);

            if(exit==1)
            {
                system("cls");
                for(i=1;i<4;i++)
                {
                    for(j=1;j<4;j++)
                        a[i][j]='-';
                }
                turn=1;
                goto lv;

            }

            else
                return 0;

}
