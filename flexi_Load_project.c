///::::::::::::::: A Flexi Load C Project Created by Mamun and Nitai, CSE 12th batch, MBSTU :::::::::::::::::::

#include <windows.h>
#include <stdio.h>                   ///printf,scanf, etc.
#include <conio.h>                   ///contains delay(),getch(),gotoxy(),etc.
#include <stdlib.h>                  ///Standard Library
#include <string.h>                  ///contains strcmp(),strcpy(),strlen(),etc
#include <ctype.h>                   ///contains toupper(), tolower(),etc
#include <dos.h>                     ///contains _dos_getdate
#include <time.h>
#define RETURNTI ME 15

char catagories[][15]= {"Grammenphone","Banglalink","Teletalk","Robi","Airtel","Citycell"};
void returnfunc(void);
void mainmenu(void);
void INPUT();
void my_account(void);
void show_account(void);
void recharge(void);
void show(void);
void closeapplication(void);
void nlist(void);
int t(void);
int money[10] = {0};
int tot = 0;
int g_p = 0;
int b_l = 0;
int t_l = 0;
int r_b = 0;
int c_t = 0;
int a_r = 0;
int s;
//long long num[1000];
int ll=0;

void Password();
void issuerecord();
void loaderanim();

COORD coord = {0,0};
/// sets coordinates to 0,0
COORD max_res,cursor_size;
/// ---------------------------------------------- X and Y coordinates ----------------------------------------------------
void gotoxy (int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
///------------------------------------------------ Delay Function ----------------------------------------------------------
void delay(unsigned int mseconds)
{
    clock_t
    goal = mseconds +clock();
    while(goal >clock());
}
///list of global files that can be accede form anywhere in program

///list of global variable

char password[10];

struct meroDate
{
    int mm,dd,yy;
};
struct g
{
    int num;
    int am;
} gp[1000];
struct Bl
{
    int num;
    int am;
} bl[1000];
struct Tl
{
    int num;
    int am;
} tl[1000];
struct Rb
{
    int num;
    int am;
} rb[1000];
struct Ar
{
    int num;
    int am;
} ar[1000];
struct Ct
{
    int num;
    int am;
} ct[1000];
struct Jk
{
    int num;
    int am;
} num[1000];
///----------------------------------------------- Main Function ---------------------------------------------
int main()
{
   // loaderanim();
    INPUT();
    //freopen("input.txt", "r", stdin);
    Password();
    return 0;
}

///---------------------------------------------- Take Input From Files --------------------------------------
void INPUT()
{
    ///read password//
    FILE* f;
    f = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\pas.txt","r");
    fscanf(f,"%s",&password);
    fclose(f);

    FILE* F;
    int i;
    F = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\Airtel.txt","r");
    i = 0 ;
    fscanf(F,"%d",&a_r);
    int X = a_r;
    while(X)
    {
        X--;
        fscanf(F,"%d%d",&ar[i].num,&ar[i].am);
        num[ll].num = ar[i].num;
        num[ll].am = ar[i].am;
        ll++;
        i++;
    }
    fclose(F);


    FILE* FF;
//    int i;
    FF = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\blk.txt","r");
    i = 0 ;
    fscanf(FF,"%d",&b_l);
    X = b_l;
    while(X)
    {
        X--;
        fscanf(FF,"%d%d",&bl[i].num,&bl[i].am);
        num[ll].num = bl[i].num;
        num[ll].am = bl[i].am;
        ll++;
        i++;
    }
    fclose(FF);
    FILE* F1;
    F1 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\gp.txt","r");
    i = 0 ;
    fscanf(F,"%d",&g_p);
    X = g_p;
    while(X)
    {
        X--;
        fscanf(F,"%d%d",&gp[i].num,&gp[i].am);
       // money[0]+=gp[i].am;
        num[ll].num = gp[i].num;
        num[ll].am = gp[i].am;
        ll++;
        i++;
    }
    fclose(F1);
    FILE* F2;
    F2 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\tl.txt","r");
    i = 0 ;
    fscanf(F2,"%d",&t_l);
    X = t_l;
    while(X)
    {
        X--;
        fscanf(F2,"%d%d",&tl[i].num,&tl[i].am);
        num[ll].num = tl[i].num;
        num[ll].am = tl[i].am;
        ll++;
        i++;
    }
    fclose(F2);

    FILE* F3;
    F3 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\robi.txt","r");
    i = 0 ;
    fscanf(F3,"%d",&r_b);
    X = r_b;
    while(X)
    {
        X--;
        fscanf(F3,"%d%d",&rb[i].num,&rb[i].am);
        num[ll].num = rb[i].num;
        num[ll].am = rb[i].am;
        ll++;
        i++;
    }
    fclose(F3);
    FILE* F4;
    F4 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\Citycell.txt","r");
    i = 0 ;
    fscanf(F4,"%d",&c_t);
    X = c_t;
    while(X)
    {
        X--;
        fscanf(F4,"%d%d",&ct[i].num,&ct[i].am);
        num[ll].num = ct[i].num;
        num[ll].am = ct[i].am;
        ll++;
        i++;
    }
    fclose(F4);

}
void wwrite()
{
    FILE* F;
    //int k = 0;
    // int i;
    F = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\Airtel.txt","w");
    int i = 0 ;
    fprintf(F,"%d\n",a_r);
    int X = a_r;
    while(X--)
    {
        //X--;
        fprintf(F,"0%d\t%d\n",ar[i].num,ar[i].am);
        i++;
    }
    fclose(F);


    FILE* FF;
    //int i;
    FF = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\blk.txt","w");
    i = 0 ;
    fprintf(FF,"%d\n",b_l);
    X = b_l;
    while(X--)
    {
        //X--;
        fprintf(FF,"%d\t%d\n",bl[i].num,bl[i].am);
//         num[ll].num = bl[i].num;
//         num[ll].am = bl[i].am;
//         ll++;
        i++;
    }
    fclose(FF);
    FILE* F1;
    F1 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\gp.txt","w");
    i = 0 ;
    fprintf(F,"%d\n",g_p);
    X = g_p;
    while(X--)
    {
        //X--;
        fprintf(F,"0%d\t%d\n",gp[i].num,gp[i].am);
//         money[0]+=gp[i].am;
//          num[ll].num = gp[i].num;
//         num[ll].am = gp[i].am;
//         ll++;
        i++;
    }
    fclose(F1);
    FILE* F2;
    F2 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\tl.txt","w");
    i = 0 ;
    fprintf(F2,"%d\n",t_l);
    X = t_l;
    while(X--)
    {
        fprintf(F2,"0%d\t%d\n",tl[i].num,tl[i].am);
//         num[ll].num = tl[i].num;
//         num[ll].am = tl[i].am;
//         ll++;
        i++;
    }
    fclose(F2);

    FILE* F3;
    F3 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\robi.txt","w");
    i = 0 ;
    fprintf(F3,"%d\n",r_b);
    X = r_b;
    while(X--)
    {
        X--;
        fprintf(F3,"0%d\t%d\n",rb[i].num,rb[i].am);
//          num[ll].num = rb[i].num;
//         num[ll].am = rb[i].am;
//         ll++;
        i++;
    }
    fclose(F3);
    FILE* F4;
    F4 = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\Citycell.txt","w");
    i = 0 ;
    fprintf(F4,"%d\n",c_t);
    X = c_t;
    while(X--)
    {
        //X--;
        fprintf(F4,"0%d\t%d\n",ct[i].num,ct[i].am);
//         num[ll].num = ct[i].num;
//         num[ll].am = ct[i].am;
//         ll++;
//         i++;
    }
    fclose(F4);

}


///------------------------------------------------ Main Menu ------------------------------------------------
void mainmenu()
{
    system("cls");
    int i;
    gotoxy(20,3);
    printf("****************MAIN MENU*****************");
    gotoxy(20,5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Add balance for your own account ");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Recharge customer number ");
    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Show current Balance for all Operator");
    gotoxy(20,11);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Show recharge history for operators");
    gotoxy(20,13);
    printf("\xDB\xDB\xDB\xDB\xB2 5. View Full number list and Balance ");
    gotoxy(20,15);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Change password");
    gotoxy(20,17);
    printf("\xDB\xDB\xDB\xDB\xB2 7. Close application");
    gotoxy(20,19);
    printf("------------------------------------------");
    gotoxy(20,28);
    t();
    gotoxy(20,21);
    printf("Enter your choice:");

    int qqq;

    switch(getch())
    {
    case '1':
        my_account();
        break;
    case '2':
        recharge();
        break;
    case '3':
        show_account();
        break;
    case '4':
        show();
        break;
    case '5':
        nlist();
    case '6':
    {
        char st[50];
        p:
        system("cls");
        printf("Enter old password : ");
        scanf("%s",st);
        if(strcmp(st,password)==0){
                 printf("Enter new password : ");
        scanf("%s",password);
        // strcpy(password,st);
        FILE* f;
        f = fopen("C:\\Users\\Nitai\\Dropbox\\Project - 1_2\\pas.txt","w");
        fprintf(f,"%s\n",password);
        fclose(f);
        printf("\nPassword changed sucessfully \n\n");
        mainmenu();}
        else{
                printf("wrong password\n\atry again\n\npress Enter : ");
                getch();
            goto p;}
    }
    break;
    case '7':
    {
        wwrite();
        system("cls");
        gotoxy(16,3);
        printf("Thanks for using the Program..");
        gotoxy(10,7);
        printf("Exiting Please Wait...........>");
        delay(5000);
        exit(0);
    }

    default:
    {
        gotoxy(10,23);
        printf("\aWrong Entry!!Please re-entered correct option");
        if(getch())
            mainmenu();
    }
    }
}
///--------------------------------------------- Own Account Recharge-----------------------------------------------------
void my_account(void)
{
    system("cls");
    int i;
    gotoxy(20,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Grameenphone");
    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Banglalink");
    gotoxy(20,11);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Teletalk");
    gotoxy(20,13);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Robi");
    gotoxy(20,15);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Airtel");
    gotoxy(20,17);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Citycell");
    gotoxy(20,19);
    printf("\xDB\xDB\xDB\xDB\xB2 7. Back to main menu");
    gotoxy(20,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,22);
    printf("Enter your choice:");
    scanf("%d",&s);
    if(s==7)
        mainmenu() ;
    system("cls");

    int mney;
    printf("Enter the amount to recharge: ");
    scanf("%d",&mney);
    money[s-1]+=mney;

    printf("Add more?(y / n):");
    if(getch()=='n')
        mainmenu();
    else
        system("cls");
    my_account();
}
///------------------------------------------------ RECHARGING NUMBERS ---------------------------------------------------
void recharge(void)
{
    system("cls");
    int i;
    gotoxy(20,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  SELECT CATEGORIES");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Grameenphone");
    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Banglalink");
    gotoxy(20,11);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Teletalk");
    gotoxy(20,13);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Robi");
    gotoxy(20,15);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Airtel");
    gotoxy(20,17);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Citycell");
    gotoxy(20,19);
    printf("\xDB\xDB\xDB\xDB\xB2 7. Back to main menu");
    gotoxy(20,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,22);
    printf("Enter your choice:");
    scanf("%d",&s);
    if(s==7)
        mainmenu() ;
    system("cls");

    int number, taka;
    printf("\nEnter Customer mobile number\n");
    scanf("%d",&number);
    printf("\nEnter Amount : \n");
    scanf("%d",&taka);
    tot+=taka;
    ///grameenphone recharge
    if(s == 1)
    {
        if(money[s-1]<taka)
        {
            system("cls");
            printf("\t\a\aInsufficient money.\n\tRecharge your own account\n");
            printf("\tYour balance is %d\n",money[s-1]);
        }
        else
        {
            num[ll].num = number;
            num[ll].am = taka;
            ll++;
            gp[g_p].num = number;
            gp[g_p].am = taka;
            g_p++;

            money[s-1]-=taka;
        }

    }
    ///Banglalink Recharge
    if(s == 2)
    {
        if(money[s-1]<taka)
        {
            system("cls");
            printf("\t\a\aInsufficient money.\n\tRecharge your own account\n");
            printf("\tYour balance is %d\n",money[s-1]);
        }
        else
        {
            num[ll].num = number;
            num[ll].am = taka;
            ll++;
            bl[b_l].num = number;
            bl[b_l].am = taka;
            b_l++;
            money[s-1]-=taka;
        }
    }
    ///Teletalk recharge
    if(s == 3)
    {
        if(money[s-1]<taka)
        {
            system("cls");
            printf("\t\a\aInsufficient money.\n\tRecharge your own account\n");
            printf("\tYour balance is %d\n",money[s-1]);
        }
        else
        {
            num[ll].num = number;
            num[ll].am = taka;
            ll++;
            tl[t_l].num = number;
            tl[t_l].am = taka;
            t_l++;
            money[s-1]-=taka;
        }
    }
    ///Robi recharge
    if(s == 4)
    {
        if(money[s-1]<taka)
        {
            system("cls");
            printf("\t\a\aInsufficient money.\n\tRecharge your own account\n");
            printf("\tYour balance is %d\n",money[s-1]);
        }
        else
        {
            num[ll].num = number;
            num[ll].am = taka;
            ll++;
            rb[r_b].num = number;
            rb[r_b].am = taka;
            r_b++;
            money[s-1]-=taka;
        }
    }
    ///Airtel recharge
    if(s == 5)
    {
        if(money[s-1]<taka)
        {
            system("cls");
            printf("\t\a\aInsufficient money.\n\tRecharge your own account\n");
            printf("\tYour balance is %d\n",money[s-1]);
        }
        else
        {
            num[ll].num = number;
            num[ll].am = taka;
            ll++;
            ar[a_r].num = number;
            ar[a_r].am = taka;
            money[s-1]-=taka;
            a_r++;
        }
    }
    ///Citycell recharge
    if(s == 6)
    {
        if(money[s-1]<taka)
        {
            system("cls");
            printf("\t\a\aInsufficient money.\n\tRecharge your own account\n");
            printf("\tYour balance is %d\n",money[s-1]);
        }
        else
        {
            num[ll].num = number;
            num[ll].am = taka;
            ll++;
            ct[c_t].num = number;
            ct[c_t].am = taka;
            c_t++;
            money[s-1]-=taka;
        }
    }
    printf("Recharge any more?(y / n):");
    if(getch()=='n')
        mainmenu();
    else
        system("cls");
    recharge();
}
///----------------------------------------------- Checking Own Balance ----------------------------------------------
void show_account(void)
{
    system("cls");
    int d;
    printf("    ************************Show account*******************************\n");

    int yy;
    for(yy = 0; yy<6; yy++)
        printf("\t%s   Balance    : %d\n\n",catagories[yy],money[yy]);
    char ss[10];
    getch();
    //  scanf("%s",ss);
    system("cls");

    mainmenu();
}
///---------------------------------------------- Showing Numbers and Amount -----------------------------------------
void show(void)
{
    system("cls");
    int i;
    gotoxy(20,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,7);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Grameenphone");
    gotoxy(20,9);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Banglalink");
    gotoxy(20,11);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Teletalk");
    gotoxy(20,13);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Robi");
    gotoxy(20,15);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Airtel");
    gotoxy(20,17);
    printf("\xDB\xDB\xDB\xDB\xB2 6. Citycell");
    gotoxy(20,19);
    printf("\xDB\xDB\xDB\xDB\xB2 7. Back to main menu");
    gotoxy(20,21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(20,22);
    printf("Enter your choice:");
    scanf("%d",&s);

    if(s==1)
    {
        system("cls");
        printf("\t\t***********Grameenphone*************\n\n");
        printf("\t\t\tNumber\t\tAmount\n");
        for(i=0; i<g_p; i++)
            printf("\t\t\t0%d\t%d\n",gp[i].num,gp[i].am);
    }
    if(s==2)
    {
        system("cls");
        printf("\t\t*************Banglalink*************\n\n");
        printf("\t\t\tNumber\t\tAmount\n");
        for(i=0; i<b_l; i++)
            printf("\t\t\t0%d\t%d\n",bl[i].num,bl[i].am);
    }
    if(s==3)
    {
        system("cls");
        printf("\t\t*************Teletalk*************\n\n");
        printf("\t\t\tNumber\t\tAmount\n");
        for(i=0; i<t_l; i++)
            printf("\t\t\t0%d\t%d\n",tl[i].num,tl[i].am);
    }
    if(s==4)
    {
        system("cls");
        printf("\t\t*************Robi*************\n\n");
        printf("\t\t\tNumber\t\tAmount\n");
        for(i=0; i<r_b; i++)
            printf("\t\t\t0%d\t%d\n",rb[i].num,rb[i].am);
    }
    if(s==5)
    {
        system("cls");
        printf("\t\t*************Airtel*************\n\n");
        printf("\t\t\tNumber\t\tAmount\n");
        for(i=0; i<a_r; i++)
            printf("\t\t\t0%d\t%d\n",ar[i].num,ar[i].am);
    }
    if(s==6)
    {
        system("cls");
        printf("\t\t*************Citycell*************\n\n");
        printf("\t\t\tNumber\t\tAmount\n");
        for(i=0; i<c_t; i++)
            printf("\t\t\t0%d\t%d\n",ct[i].num,ct[i].am);
    }

    if(s==7)
    {
        system("cls");
        mainmenu();
    }
    printf("\n\nSee another list?(y / n):");
    if(getch()=='n')
        mainmenu();
    else
        system("cls");
    show();
}
///---------------------------------------- Returning Function ----------------------------------------------------
void returnfunc(void)
{
    {
        printf("Press 'ENTER' to return to main menu");
    }
a:
    if(getch()==13)

        mainmenu();
    else
        goto a;
}
///------------------------------------------- Number List ----------------------------------------------------------
void nlist(void)
{
    system("cls");
    int ss;
    for(ss=0; ss<ll; ss++)
        printf("0%d %d\n",num[ss].num,num[ss].am);
   // printf("Press 'B' and then 'ENTER' to back");
    char x[10];
    //scanf("%s",x);
    getch();
    mainmenu();
    system("cls");

}
///----------------------------------------- Show Time And Date -----------------------------------------------------
int t(void)
///for time
{
    time_t t;
    time(&t);
    printf("Date and time:%s\n",ctime(&t));
    return 0 ;
}
///------------------------------------------ Password Function -------------------------------------------------------
void Password(void)
///for password option
{

    system("cls");
    char d[25]="Password Protected";

    char ch,pass[10];
    int i=0,j;

    gotoxy(8,4);
    for(j=0; j<20; j++)
    {
        delay(40);
        printf("*");
    }
    for(j=0; j<20; j++)
    {
        delay(40);
        printf("%c",d[j]);
    }
    for(j=0; j<20; j++)
    {
        delay(40);
        printf("*");
    }
    gotoxy(10,10);
    gotoxy(15,7);
    printf("Enter Password:");
    while(ch!=13)
    {
        ch=getch();
        if(ch!=13 && ch!=8)
        {
            putch('*');
            pass[i] = ch;
            i++;
        }
    }
    pass[i] ='\0';
    if(strcmp(pass,password)==0)
    {
        gotoxy(15,9);

        printf("Password match");
        gotoxy(17,12);
        printf("Press any key to countinue.....");
        getchar();
        mainmenu();
    }
    else
    {
        gotoxy(15,16);
        printf("\a\aWarning!! Incorrect Password");
        getch();
        Password();
    }
}
///--------------------------------------------For Loading -----------------------------------------------------------
void loaderanim()
{
    int loader;
    system("cls");
    gotoxy(20,10);
    printf("LOADING........");
    printf("\n\n");
    gotoxy(18,11);
    for(loader=1; loader<35; loader++)
    {
        delay(50);
        printf("%c",219);
    }
}

