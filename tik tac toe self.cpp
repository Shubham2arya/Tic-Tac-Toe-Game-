#include<stdio.h>
#include<stdlib.h>
int END=1,flag=2,chance=0,cnt=1,opt,i,f=0;
int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0;
char a1,a2,a3,a4,a5,a6,a7,a8,a9;

int instruction();
int bot();
int print();
int draw(int);
int winner();
int input();
int setup();
int main()
{
	if(END==1)
	{
		printf("\n ");
		for(i=0;i<110;i++)
			printf("*");
		
		printf("\n * ");
		for(i=0;i<106;i++)
			printf("*");
		
		printf(" *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t:::WELCOME TO TIC TAC TOE:::\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t-:Choose An Option Below:-\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t[1] Play With Bot    \t\t[2] Two Player\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n * *\t\t\t\t\t\t\t\t\t\t\t\t\t    * *\n");
		printf(" * ");
		for(i=0;i<106;i++)
			printf("*");
		
		printf(" *\n ");
		for(i=0;i<110;i++)
			printf("*");
		
		scanf("%d",&opt);
		system("cls");
		switch(opt)
		{
			case 1:
			{
				bot();	
			}
			case 2:
			{
				instruction();
			}	
		}
	}
}
int instruction()
{
	printf("\n  ");
	printf("* *");
	for(i=0;i<110;i++)
		printf("*");
	
	printf("\n  ");
	printf("* *");
	for(i=0;i<108;i++)
		printf("*");
	
	printf(" *");		
	printf("\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t-:GAME INSTRUCTION:-\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *\t(a) Press Any Number Between 1 to 9 At Your Chance.\t\t\t\t\t\t\t* *\n");
	printf("  * *\t(b) Each Number Holds The Specific position Which Is Shown In The Below Diagram.\t\t\t* *\n");
	printf("  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t1 | 2 | 3\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *\t\t\t----------\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *\t\t\t4 | 5 | 6\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *\t\t\t----------\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *\t\t\t7 | 8 | 9\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *\t(c) 1st & 2nd Player's Chance Are Represented By 'O' & 'X' Respectivily.\t\t\t\t* *\n");
	printf("  * *\t(d) Who Will Make Its Representative In A Serise (Horizontaly, Verticaly & Diagonaly) First Will Win.\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n  * *\t\t\t\t\t\t\t\t\t\t\t\t\t\t* *\n");
	printf("  * *");
	for(i=0;i<108;i++)
		printf("*");
	
	printf(" *");
	printf("\n  ");
	printf("* *");
	for(i=0;i<110;i++)
		printf("*");
	
	printf("\n");
	system("pause");
	switch(opt)
	{
		case 1:
		{
			bot();	
		}
		case 2:
		{
			setup();
		}	
	}
}
int bot()
{
	
	printf("\n\n\n\n\t\t\tWORK IS IN PROGRESS\n\t               RE-CHOOSE THE  OPTION\n\n\n\t\t\t  !..THANK YOU..!\n\n\n\n");
	system("pause");
	system("cls");
	main();
}
setup()
{
	system("cls");
	printf("\n\n\t      ");
	for(i=0;i<54;i++)
		printf("*");
	
	printf("\n\t      * ");
	for(i=0;i<25;i++)
		printf("*+");
	
	printf(" *\n\t      * +\t\t\t\t\t\t * *\n\t      * *\t\t''_''GAME''_''\t\t\t + *\n\t      * +\t       ---TIC TAC TOE---\t\t * *\n\t      * +\t\t\t\t\t\t * *\n\t      * ");
	for(i=0;i<25;i++)
 		printf("*+");
	
	printf(" *\n\t      * +\t\t\t\t\t\t + *\n\t      * *\t\t\t\t\t\t * *\n\t      * +\t\t    %c | %c | %c\t\t\t + *\n",a1,a2,a3);
	printf("\t      * *\t\t  -----------\t\t\t * *\n");
	printf("\t      * +\t\t    %c | %c | %c\t\t\t + *\n",a4,a5,a6);
	printf("\t      * *\t\t  -----------\t\t\t * *\n");
	printf("\t      * +\t\t    %c | %c | %c\t\t\t + *\n",a7,a8,a9);
	printf("\t      * *\t\t\t\t\t\t * *\n\t      * +\t\t\t\t\t\t + *\n\t      * *\t\t\t\t\t\t * *\n\t      * ");
	for(i=0;i<25;i++)
		printf("*+");
	
	printf(" *");
	winner();
}
winner()
{
	if(a1==88 && a2==88 && a3==88)
	{
		f=1;
		print();
	}
	else if(a4==88 && a5==88 && a6==88)
	{
		f=1;
		print();
	}
	else if(a7==88 && a8==88 && a9==88)
	{
		f=1;
		print();
	}
	else if(a1==88 && a4==88 && a7==88)
	{
		f=1;
		print();
	}
	else if(a2==88 && a5==88 && a8==88)
	{
		f=1;
		print();
	}
	else if(a3==88 && a6==88 && a9==88)
	{
		f=1;
		print();
	}
	else if(a1==88 && a5==88 && a9==88)
	{
		f=1;
		print();
	}
	else if(a3==88 && a5==88 && a7==88)
	{
		f=1;
		print();
	}
	else if(a1==79 && a2==79 && a3==79)
	{
		f=2;
		print();
	}
	else if(a4==79 && a5==79 && a6==79)
	{
		f=2;
		print();	
	}
	else if(a7==79 && a8==79 && a9==79)
	{
		f=2;
		print();
	}
	else if(a1==79 && a4==79 && a7==79)
	{
		f=2;
		print();
	}
	else if(a2==79 && a5==79 && a8==79)
	{
		f=2;
		print();
	}
	else if(a3==79 && a6==79 && a9==79)
	{
		f=2;
		print();
	}
	else if(a1==79 && a5==79 && a9==79)
	{
		f=2;
		print();
	}
	else if(a3==79 && a5==79 && a7==79)
	{
		f=2;
		print();
	}
	else if(chance==9)
	{
		f=3;
		print();
	}	
	else
	{
		input();
	}		
}
input()
{
	if(flag==1)
	{
		printf("\n\t      * *\t\t\t\t\t\t * *\n\t      * +\t\tIts %dst player chance\t\t + *\n\t      * *\t\t\t\t\t\t * *\n\t      * ",flag);
		for(i=0;i<25;i++)
			printf("*+");
		
		printf(" *\n\t      ");
		for(i=0;i<54;i++)
			printf("*");
		
	}
	else if(flag==2)
	{
		printf("\n\t      * *\t\t\t\t\t\t * *\n\t      * +\t\tIts %dnd player chance\t\t + *\n\t      * *\t\t\t\t\t\t * *\n\t      * ",flag);
		for(i=0;i<25;i++)
			printf("*+");
		
		printf(" *");
		printf("\n\t      ");
		for(i=0;i<54;i++)
			printf("*");
		
	}
	int put;
	scanf("%d",&put);
	draw(put); 
}
draw(int n)
{
	if(chance%2==0)
	{
		if(n==1)
		{
			if(b1==0)
			{
				flag=1;
				a1=88;
				b1=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}	
		}
		else if(n==2)
		{
			if(b2==0)
			{
				flag=1;
				a2=88;
				b2=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==3)
		{
			if(b3==0)
			{
				flag=1;
				a3=88;
				b3=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==4)
		{
			if(b4==0)
			{
				flag=1;
				a4=88;
				b4=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==5)
		{
			if(b5==0)
			{
				flag=1;
				a5=88;
				b5=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==6)
		{
			if(b6==0)
			{
				flag=1;
				a6=88;
				b6=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			};
		}
		else if(n==7)
		{
			if(b7==0)
			{
				flag=1;
				a7=88;
				b7=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==8)
		{
			if(b8==0)
			{
				flag=1;
				a8=88;
				b8=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==9)
		{
			if(b9==0)
			{
				flag=1;
				a9=88;
				b9=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
	}	
	else if(chance%2==1)
	{
		if(n==1)
		{
			if(b1==0)
			{
				flag=2;
				a1=79;
				b1=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==2)
		{
			if(b2==0)
			{
				flag=2;
				a2=79;
				b2=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==3)
		{
			if(b3==0)
			{
				flag=2;
				a3=79;
				b3=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==4)
		{
			if(b4==0)
			{
				flag=2;
				a4=79;
				b4=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==5)
		{
			if(b5==0)
			{
				flag=2;
				a5=79;
				b5=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==6)
		{
			if(b6==0)
			{
				flag=2;
				a6=79;
				b6=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==7)
		{
			if(b7==0)
			{
				flag=2;
				a7=79;
				b7=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==8)
		{
			if(b8==0)
			{
				flag=2;
				a8=79;
				b8=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
		else if(n==9)
		{
			if(b9==0)
			{
				flag=2;
				a9=79;
				b9=1;
				chance++;
				setup();
			}
			else
			{
				f=4;
				print();	
			}
		}
	}
}
int print()
{
	if(f==1)
	{
		printf("\n\n\t\t\t  < <   PLAYER 2nd WIN   > >\n\n\n\n");
		END=0;
		main();
	}
	else if(f==2)
	{
		printf("\n\n\t\t\t  < <   PLAYER 1st WIN\n\n\n\n");
		END=0;
		main();
	}
	else if(f==3)
	{
		printf("\n\n\t\t\t  < <   IT'S 'DRAW   > >\n\n\n\n");
		END=0;
		main();
	}
	else if(f==4)
	{
		printf("\n\n\t\t!!!...INVALID INPUT RE-SELECT THE POSITION...!!!\n\n\n\n\n");
		system("pause");
		setup();
	}	
}
