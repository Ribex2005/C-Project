//ROCK PAPER SCISSORS
#include<stdio.h>
#include<stdlib.h>
void choice(int,int);
void main()
{
	int x,c,ch;
	while(1)
	{
		printf("\n\nEnter your choice=\n\t1.ROCK \n\t2.PAPER  \n\t3.SCISSOR \n\t4.exit\n\t");
		scanf("%d",&ch);
		if (ch==4)
			exit(0);
		x=rand();
		if (x<=40 || x>=5000)
			c=1;
		else if (x>40 && x<=1000)
			c=2;
		else if (x>1000 && x<5000)
			c=3;
		choice(c,ch); 
		
	}
	 
	
}
void choice (int c, int ch)
{
	switch (c)
	{
		case 1:
			printf("\n\tComputer chose ROCK\n");
			if (ch==1)
			{
				printf("\n\tYOU CHOSE ROCK TOO!! \n\t it's a draw!!");
				return;
			}
			if (ch==2)
			{
				printf("\n\tYOU CHOSE PAPER!! YOU WIN!!!!");
				return;
			}
			if (ch==3)
			{
				printf("\n\tYOU CHOSE SCISSORS!! YOU LOST BOHOOO");
				return;
			}
			break;
		case 2:
			printf("\n\tCOMPUTER CHOSE PAPER");
			if (ch==1)
			{
				printf("\n\tYOU CHOSE ROCK !! YOU LOST BOHOOO");
				return;
			}
			if (ch==2)
			{
				printf("\n\tYOU CHOSE PAPER too!! \n\t it's a draw!!");
				return;
			}
			if (ch==3)
			{
				printf("\n\tYOU CHOSE SCISSORS!! YOU WIN!!!!");
				return;
			}
			break;
		case 3:
			printf("\n\tCOMPUTER CHOSE SCISSORS");
			if (ch==1)
			{
				printf("\n\tYOU CHOSE ROCK !! YOU WIN!! ");
				return;
			}
			if (ch==2)
			{
				printf("\n\tYOU CHOSE PAPER!! YOU LOST BOHOOO!!");
				return;
			}
			if (ch==3)
			{
				printf("\n\tYOU CHOSE SCISSORS!! \n\t It's a draw!!!!");
				return;
			}
			
	}
}
