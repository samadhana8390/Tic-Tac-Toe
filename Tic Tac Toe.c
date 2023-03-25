#include <stdio.h>
int display();
int checkWin();
void system();

char tic[]={'0','1','2','3','4','5','6','7','8','9'};

int display()
{

    system("cls");
    printf("\n\n    TIC TAC TOE  \n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",tic[1],tic[2],tic[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",tic[4],tic[5],tic[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",tic[7],tic[8],tic[9]);
    printf("     |     |     \n");
    printf("\n\n");
}
int whichWin()
{
    if (tic[1] == tic[2] && tic[2] == tic[3])
        return 1;

    else if (tic[4] == tic[5] && tic[5] == tic[6])
        return 1;

    else if (tic[7] == tic[8] && tic[8] == tic[9])
        return 1;

    else if (tic[1] == tic[4] && tic[4] == tic[7])
        return 1;

    else if (tic[2] == tic[5] && tic[5] == tic[8])
        return 1;

    else if (tic[3] == tic[6] && tic[6] == tic[9])
        return 1;

    else if (tic[1] == tic[5] && tic[5] == tic[9])
        return 1;

    else if (tic[3] == tic[5] && tic[5] == tic[7])
        return 1;

    else if (tic[1] != '1' && tic[2] != '2' && tic[3] != '3' &&
            tic[4] != '4' && tic[5] != '5' && tic[6] != '6' && tic[7]
            != '7' && tic[8] != '8' && tic[9] != '9')

        return 0;
    else
        return  - 1;
}

int main()
{
    int player=1,in,s=-1; char op;
    display();
    while (s==-1)                    //loop move value -1//
    {
        if(player%2==0)             // true player 2 rather than player change //
        {
            player=2;
        }
        else
        {
            player=1;
        }
        if(player==1 )                             // playrer 1 op is x rather than o//
        {
             op='X' ;
        }
        else
        {
            op='O';
        }
        printf("enter posstion Player %d\n",player);
        scanf("%d",&in);
        if(in<1 || in>9)                                       // 1 to 9 op valid rather than invalid//
        {
            printf("invalid ");
        }
        tic[in]=op;                                          //input replece op match win or not //
        display();
        int stoar=whichWin();                                //call checkwin fun and stoar int//
        if(stoar==1)
        {
            printf("Player %d is Winner",player);
            return;                                           // true match is off//
        }
        else if(stoar==0)
        {
            printf("draw");
            return;
        }
        player++;                                                 // incress value player chenge  //
    }
}




