#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>
using namespace std;
int pl,tu=1,i=5,j,flag=0,draw=0,ch,in=0;
char a[6][6];
void turn();
void display();
void win();
void intro();
int main()
{
	CP:
	system("cls");
	cout<<"\n\n=====MADE BY CHINTAN PATEL=====";
	cout<<"\n\n-----GAME BOARD-----";
	cout<<"\n\n 1  2  3  4  5  6";
	cout<<"\n  |  |  |  |  |  ";
	cout<<"\n=================";
	cout<<"\n  |  |  |  |  |  ";
	cout<<"\n=================";
	cout<<"\n  |  |  |  |  |  ";
	cout<<"\n=================";
	cout<<"\n  |  |  |  |  |  ";
	cout<<"\n=================";
	cout<<"\n  |  |  |  |  |  ";
	cout<<"\n=================";
	cout<<"\n  |  |  |  |  |  ";
	if(in!=1)
	{
		cout<<"\n\nPRESS 0 FOR INTRODUCTION";
		cout<<"\n\nPRESS 1 TO CONTINUE:";
		cin>>ch;
	}
	if(ch==0)
	{
		intro();
		in=1;
		goto CP;
	}
	else
	{
		while(tu!=0)
		{
			turn();
			display();
			win();
		}
	}
	return 0;
}
void turn()
{
	cout<<"\n\nEnter 10 anytime to exit...";
	if(tu==1)
	{
		cout<<"\n\nPlayer 1 turn...";
		cout<<"\nChoice your column(1-6):";
		cin>>j;
		j--;
		chintan:
		if(j==9)
			tu=0;
		else if(j>5||i<0||j<0)
			flag=1;
			//cout<<"\nPlease enter valid choice...";
		else
		{
			//chintan:
			if(a[i][j]=='*'||a[i][j]=='$')
			{
				i--;
				goto chintan;
			}
			a[i][j]='*';
			tu=2;
			draw++;
			i=5;
		}
	}
	else if(tu==2)
	{
		cout<<"\n\nPlayer 2 turn...";
		cout<<"\nChoice your column(1-6):";
		cin>>j;
		j--;
		patel:
		if(j==9)
			tu=0;
		else if(j>5||i<0||j<0)
			flag=1;
			//cout<<"\nPlease enter valid choice...";
		else
		{
			//patel:
			if(a[i][j]=='*'||a[i][j]=='$')
			{
				i--;
				goto patel;
			}
			a[i][j]='$';
			tu=1;
			draw++;
			i=5;
		}
	}
}
void display()
{
	system("cls");
	cout<<"\n\n=====MADE BY CHINTAN PATEL=====";
	cout<<"\n\nCurrent status...\n";
	cout<<"\n 1  2  3  4  5  6\n";
	cout<<"\n "<<a[0][0]<<"| "<<a[0][1]<<"| "<<a[0][2]<<"| "<<a[0][3]<<"| "<<a[0][4]<<"| "<<a[0][5];
	cout<<"\n=================";
	cout<<"\n "<<a[1][0]<<"| "<<a[1][1]<<"| "<<a[1][2]<<"| "<<a[1][3]<<"| "<<a[1][4]<<"| "<<a[1][5];
	cout<<"\n=================";
	cout<<"\n "<<a[2][0]<<"| "<<a[2][1]<<"| "<<a[2][2]<<"| "<<a[2][3]<<"| "<<a[2][4]<<"| "<<a[2][5];
	cout<<"\n=================";
	cout<<"\n "<<a[3][0]<<"| "<<a[3][1]<<"| "<<a[3][2]<<"| "<<a[3][3]<<"| "<<a[3][4]<<"| "<<a[3][5];
	cout<<"\n=================";
	cout<<"\n "<<a[4][0]<<"| "<<a[4][1]<<"| "<<a[4][2]<<"| "<<a[4][3]<<"| "<<a[4][4]<<"| "<<a[4][5];
	cout<<"\n=================";
	cout<<"\n "<<a[5][0]<<"| "<<a[5][1]<<"| "<<a[5][2]<<"| "<<a[5][3]<<"| "<<a[5][4]<<"| "<<a[5][5];
	if(flag==1)
	{
		cout<<"\nPlease enter valid choice...";
		i=5;
		flag=0;
	}
}
void win()
{
	for(int x=5;x>=0;x--)
	{
		for(int y=0;y<6;y++)
		{
			if(a[x][y]=='*'&&a[x-1][y]=='*'&&a[x-2][y]=='*'&&a[x-3][y]=='*')
			{
				cout<<"\n\nPlayer 1 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
			else if(a[x][y]=='$'&&a[x-1][y]=='$'&&a[x-2][y]=='$'&&a[x-3][y]=='$')
			{
				cout<<"\n\nPlayer 2 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
			else if(a[x][y]=='*'&&a[x][y+1]=='*'&&a[x][y+2]=='*'&&a[x][y+3]=='*')
			{
				cout<<"\n\nPlayer 1 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
			else if(a[x][y]=='$'&&a[x][y+1]=='$'&&a[x][y+2]=='$'&&a[x][y+3]=='$')
			{
				cout<<"\n\nPlayer 2 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
			else if(a[x][y]=='*'&&a[x-1][y+1]=='*'&&a[x-2][y+2]=='*'&&a[x-3][y+3]=='*')
			{
				cout<<"\n\nPlayer 1 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				getch();
				tu=0;
				break;
			}
			else if(a[x][y]=='$'&&a[x-1][y+1]=='$'&&a[x-2][y+2]=='$'&&a[x-3][y+3]=='$')
			{
				cout<<"\n\nPlayer 2 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
			else if(a[x][y]=='*'&&a[x-1][y-1]=='*'&&a[x-2][y-2]=='*'&&a[x-3][y-3]=='*')
			{
				cout<<"\n\nPlayer 1 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
			else if(a[x][y]=='$'&&a[x-1][y-1]=='$'&&a[x-2][y-2]=='$'&&a[x-3][y-3]=='$')
			{
				cout<<"\n\nPlayer 2 wins...";
				cout<<"\n\nPRESS ANY KEY TO EXIT...";
				tu=0;
				getch();
				break;
			}
		}
	}
	if(draw>36)
	{
		cout<<"\n\nMATCH DRAWED...";
		cout<<"\n\nPRESS ANY KEY TO EXIT...";
		tu=0;
		getch();
	}
}
void intro()
{
	system("cls");
	cout<<"\nPlayer 1 symbol:*\tPlayer 2 symbol:$";
	cout<<"\n\nWinning condition:";
	cout<<"\nAny same 4 symbols in vertical($) or horizontal(*) or inclined(# or @) manner...";
	cout<<"\n\n#| | | | |@";
	cout<<"\n===========";
	cout<<"\n |#| | |@| ";
	cout<<"\n===========";
	cout<<"\n | |#|@| |$";
	cout<<"\n===========";
	cout<<"\n | |@|#| |$";
	cout<<"\n===========";
	cout<<"\n | | | | |$";
	cout<<"\n===========";
	cout<<"\n*|*|*|*| |$";
	cout<<"\n\nCredits: \nCHINTAN R PATEL";
	cout<<"\nBE IT SEM 3(06-NOV-2015)";
	cout<<"\nLDRP-ITR";
	cout<<"\n\nPRESS ANY KEY TO RETURN IN THE GAME";
	ch=1;
	getch();
}
