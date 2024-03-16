#include<stdio.h>
#include<stdlib.h>

int opt,chance=1,flag=0,put,BT=1,PC=1,P1C,P2C,P3C,P4C,P5C;
char a1,a2,a3,a4,a5,a6,a7,a8,a9;
int b1=1,b2=1,b3=1,b4=1,b5=1,b6=1,b7=1,b8=1,b9=1;

int player();
int setup();
int draw();
int win();
int check();
int bot();
int main()
{
	printf("press 1 to play : ");
	scanf("%d",&opt);
	if(opt==1)
		setup();
}
int setup()
{
	system("cls");
	printf("\t %c | %c | %c \n",a1,a2,a3);
	printf("\t----------\n");
	printf("\t %c | %c | %c \n",a4,a5,a6);
	printf("\t----------\n");
	printf("\t %c | %c | %c \n",a7,a8,a9);
	check();
}
int check()
{
	if(a1==88 && a2==88 && a3==88)
	{
		flag=1;
		win();
	}
	else if(a4==88 && a5==88 && a6==88)
	{
		flag=1;
		win();
	}
	else if(a7==88 && a8==88 && a9==88)
	{
		flag=1;
		win();
	}
	else if(a1==88 && a4==88 && a7==88)
	{
		flag=1;
		win();
	}
	else if(a2==88 && a5==88 && a8==88)
	{
		flag=1;
		win();
	}
	else if(a3==88 && a6==88 && a9==88)
	{
		flag=1;
		win();
	}
	else if(a7==88 && a5==88 && a3==88)
	{
		flag=1;
		win();
	}
	else if(a1==88 && a5==88 && a9==88)
	{
		flag=1;
		win();
	}
	else if(a1==79 && a2==79 && a3==79)
	{
		flag=2;
		win();
	}
	else if(a4==79 && a5==79 && a6==79)
	{
		flag=2;
		win();
	}
	else if(a7==79 && a8==79 && a9==79)
	{
		flag=2;
		win();
	}
	else if(a1==79 && a4==79 && a7==79)
	{
		flag=2;
		win();
	}
	else if(a2==79 && a5==79 && a8==79)
	{
		flag=2;
		win();
	}
	else if(a3==79 && a6==79 && a9==79)
	{
		flag=2;
		win();
	}
	else if(a1==79 && a5==79 && a9==79)
	{
		flag=2;
		win();
	}
	else if(a7==79 && a5==79 && a3==79)
	{
		flag=2;
		win();
	}
	else if(flag==4)
	{
		win();
	}
	else
	{
		if(chance==1)
		{
			chance=2;
			player();
		}
		else if(chance==2)
		{
			chance=1;
			bot();
		}
	}
}
int player()
{
	printf("\n\n\tits your chance: ");
	scanf("%d",&put);
	if(PC==1)
	{
		PC=2;
		P1C=put;		
	}
	else if(PC==2)
	{
		PC=3;
		P2C=put;	
	}
	else if(PC==3)
	{
		PC=4;
		P3C=put;
	}
	else if(PC==4)
	{
		PC=5;
		P4C=put;
	}
	else if(PC==5)
	{
		P5C=put;
	}
	draw();
}
int draw()
{
	if(put==1)
	{
		if(b1==1)
		{
			a1=79;
			b1=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==2)
	{
		if(b2==1)
		{
			a2=79;
			b2=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==3)
	{
		if(b3==1)
		{
			a3=79;
			b3=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==4)
	{
		if(b4==1)
		{
			a4=79;
			b4=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==5)
	{
		if(b5==1)
		{
			a5=79;
			b5=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==6)
	{
		if(b6==1)
		{
			a6=79;
			b6=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==7)
	{
		if(b7==1)
		{
			a7=79;
			b7=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==8)
	{
		if(b8==1)
		{
			a8=79;
			b8=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}
	else if(put==9)
	{
		if(b9==1)
		{
			a9=79;
			b9=0;
	    	setup();	
		}
		else
		{
			flag=3;
			win();
		}
	}	
}
int win()
{
	if(flag==1)
	{
		printf("\n\tYOU LOOSE");
	}
	else if(flag==2)
	{
		printf("\n\tyou win");
	}
	else if(flag==3)
	{
		printf("\n\tINVALID INPUT");
		PC--;
		player();
	}
	else
	{
		printf("\n\tits draw");
	}
}
int bot()
{
	if(P1C==1)//1
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		if(P2C==2)//1.1
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==4 || P3C==6 || P3C==8 || P3C==9)//1.1.1 ,1.1.2 ,1.1.4 ,1.1.5  
			{
				if(BT==3)
				{
					a7=88;
					b7=0;
					setup();
				}
			}
			else if(P3C==7)//1.1.3
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==6)//1.1.3.1
				{
					if(BT==4)
					{
						BT=5;
						a8=88;
						b8=0;
						flag=4;
						setup();
					}
				}
				else if(P4C==8 || P4C==9)//1.1.3.2 , 1.1.3.3
				{
					if(BT==4)
					{
						a6=88;
						b6=0;
						setup();
					}
				}
			}
		}
		else if(P2C==3)//1.2
		{
			if(BT==2)
			{
				BT=3;
				a2=88;
				b2=0;
				setup();
			}
			if(P3C==4 || P3C==6 || P3C==7 || P3C==9)//1.2.1, 1.2.2, 1.2.3, 1.2.5
			{
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==8)//1.2.4
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==9 || P4C==7)//1.2.4.3, 1.2.4.2
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//1.2.4.1
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//1.3
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==2 || P3C==6 ||P3C==8 || P3C==9)//1.3.1, 1.3.3, 1.3.4, 1.3.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//1.3.2
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();	
				}
				else if(P4C==6 || P4C==9)//1.3.2.1, 1.3.2.3
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//1.3.2.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//1.4
		{
			if(BT==2)
			{
				BT=3;
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==3 || P3C==4 || P3C==7 || P3C==9)//1.4.1, 1.4.2, 1.4.3, 1.4.5
			{
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==8)//1.4.4
			{
				if(BT==3)
				{
					BT=4;
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==4 || P4C==9)//1.4.4.2, 1.4.4.3
				{
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==3)//1.4.4.1
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//1.5
		{
			if(BT==2)
			{
				BT=3;
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==8 || P3C==9)//1.5.1, 1.5.2, 1.5.4, 1.5.5
			{
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==6)//1.5.3
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==3 || P4C==9)//1.5.3.1, 1.5.3.3
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//1.5.3.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//1.6
		{
			if(BT==2)
			{
				BT=3;
				a4=88;
				b4=0;
				setup();
  			}
			else if(P3C==2 || P3C==3 || P3C==7 || P3C==9)//1.6.1, 1.6.2, 1.6.4, 1.6.5
			{
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==6)//1.6.3
			{
				if(BT==3)
				{
					BT=4;
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==2 || P4C==9)//1.6.3.1, 1.6.3.3
				{
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==7)//1.6.3.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//1.7
		{
			if(BT==2)
			{
				BT=3;
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==3 || P3C==4 || P3C==6 || P3C==7)//1.7.1, 1.7.2, 1.7.3, 1.7.4
			{
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==8)//1.7.5
			{
				if(BT==3)
				{
					BT=4;
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//1.7.5.2, 1.7.5.3
				{
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==3)//1.7.5.1
				{
					a6=88;
					b6=0;
					flag=4;
					setup();
				}
			}
		}						
	}
	else if(P1C==2)//1.2
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//2.1
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==4 || P3C==6 || P3C==8|| P3C==9)//2.1.1, 2.1.2, 2.1.4, 2.1.5
			{
				a7=88;
				b8=0;
				setup();
			}
			else if(P3C==7)//2.1.3
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==8 || P4C==9)//2.1.3.2, 2.1.3.3
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//2.1.3.1
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==3)//2.2
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==4 || P3C==6 || P3C==7 || P3C==8)//2.2.1, 2.2.2, 2.2.3, 2.2.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//2.2.5
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==7 || P4C==8)//2.2.5.2, 2.2.5.3
				{
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==4)//2.2.5.1
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//2.3
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==3 || P3C==6 || P3C==7 || P3C==8)//2.3.1, 2.3.2, 2.3.3, 2.3.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//2.3.5
			{
				if(BT==3)
				{
					BT=4;
					a3=88;
					b8=0;
					setup();
				}
				else if(P4C==6 || P4C==8)//2.3.5.1, 2.3.5.3
				{
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==7)//2.3.5.2
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//2.4
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==8 || P3C==9)//2.4.1, 2.4.2, 2.4.4, 2.4.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//2.4.3
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==4 || P4C==8)//2.4.3.1, 2.4.3.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==9)//2.4.3.3
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//2.5
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==3 || P3C==4 || P3C==6 || P3C==8)//2.5.1, 2.5.2, 2.5.3, 2.5.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//2.5.5
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//2.5.5.2, 2.5.5.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
				else if(P4C==3)//2.5.5.1
				{
					a6=88;
					b6=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//2.6
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==6 || P3C==9)//2.6.1, 2.6.2, 2.6.3, 2.6.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//2.6.4
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//2.6.4.1, 2.6.4.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==9)//2.6.4.3
				{
					a4=88;
					b4=0;
					setup();
				}
			}
		}
		else if(P2C==9)//2.7
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==6 || P3C==8)//2.7.1, 2.7.2, 2.7.3, 2.7.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//2.7.4
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//2.7.4.2, 2.7.4.3
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
				else if(P4C==1)//2.7.4.1
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
			}
		}
	}
	if(P1C==3)//3
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//3.1
		{
			if(BT==2)
			{
				BT=3;
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==4 || P3C==6 || P3C==7 || P3C==9)//3.1.1, 3.1.2, 3.1.3, 3.1.5
			{
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==8)//3.1.4
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==7 || P4C==9)//3.1.4.2, 3.1.4.3
				{
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==4)//3.1.4.1
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//3.2
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==4 || P3C==6 || P3C==7 ||P3C==8)//3.2.1, 3.2.2, 3.3.3, 3.3.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//3.2.5
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==7 || P4C==8)//3.2.5.2, 3.2.5.3
				{
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==4)//3.2.5.1
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//3.3
		{
			if(BT==2)
			{
				BT=3;
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==1 || P3C==6 || P3C==7 || P3C==9)//3.3.1, 3.3.2, 3.3.3, 3.3.5
			{
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==8)//3.3.4
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==6 || P4C==7)//3.3.4.2, 3.3.4.3
				{
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==1)//3.3.4.1
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//3.4
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==4 || P3C==7 || P3C==8)//3.4.2, 3.4.3, 3.4.3, 3.4.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//3.4.1
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==4 || P4C==7)//3.4.1.1, 3.4.1.2
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//3.4.1.3
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//3.5
		{
			if(BT==2)
			{
				BT=3;
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==6 || P3C==9)//3.5.1, 3.5.2, 3.5.3, 3.5.5
			{
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==8)//3.5.4
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//3.5.4.2, 3.5.4.3
				{
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==1)//3.5.4.1
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//3.6
		{
			if(BT==2)
			{
				BT=3;
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==7 || P3C==9)//3.6.1, 3.6.2, 3.6.4, 3.6.5
			{
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==4)//3.6.3
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==2 || P4C==7)//3.6.3.1, 3.6.3.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==9)//3.6.3.3
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//3.7
		{
			if(BT==2)
			{
				BT=3;
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==7 || P3C==8)//3.7.1, 3.7.2, 3.7.4, 3.7.5
			{
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==4)//3.7.3
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==1 || P4C==7)//3.7.3.1, 3.7.3.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//3.7.3.2
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
			}
		}
	}
	else if(P1C==4)//4
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//4.1
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==2 || P3C==6 || P3C==8 || P3C==9)//4.1.1, 4.1.3, 4.1.4, 4.1.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//4.1.2
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==6 || P4C==9)//4.1.2.1, 4.1.2.3
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//4.1.2.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//4.2
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==3 || P3C==6 || P3C==7 ||P3C==8)//4.2.1, 4.2.2, 4.2.3, 4.2.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//4.2.5
			{
				if(BT==3)
				{
					BT=4;
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==6 || P4C==8)//4.2.5.1, 4.2.5.3
				{
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==7)//4.2.5.2
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==3)//4.3
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==2 || P3C==6 || P3C==7 || P3C==8)//4.3.1, 4.3.2, 4.3.3, 4.3.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//4.3.5
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==2 || P4C==7)//4.3.5.1, 4.3.5.2
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
				else if(P4C==8)//4.3.5.3
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//4.4
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==8 || P3C==9)//4.4.1, 4.4.2, 4.4.4, 4.4.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//4.4.3
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==8 || P4C==9)//4.4.3.2, 4.4.3.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//4.4.3.1
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//4.5
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==6 || P3C==8)//4.5.1, 4.5.2, 4.5.3, 4.5.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//4.5.5
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==3 || P4C==6)//4.5.5.2, 4.5.5.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//4.5.5.1
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//4.6
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==6 || P3C==9)//4.6.1, 4.6.2, 4.6.4, 4.6.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//4.6.3
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==2 || P4C==6)//4.6.3.2, 4.6.3.3
				{
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==1)//4.6.3.1
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//4.7
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==6 || P3C==8)//4.7.1, 4.7.2, 4.7.4, 4.7.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//4.7.3
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==2 || P4C==8)//4.7.3.2, 4.7.3.3
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
				else if(P4C==1)//4.7.3.1
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
	}
	else if(P1C==5)//55555555555555555555555555555555555555555555555555
	{
		if(BT==1)
		{
			BT=2;
			a3=88;
			b3=0;
			setup();
		}
		else if(P2C==1)//5.1
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==4 || P3C==7 || P3C==8)//5.1.1, 5.1.2, 5.1.4, 5.1.5
			{
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==6)//5.1.3
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==2 || P4C==7)//5.1.3.1, 5.1.3.2
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
				else if(P4C==8)//5.1.3.3
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//5.2
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==1)//5.2.1
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==4 || P4C==7)//5.2.1.1 , 5.2.1.3
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//5.2.1.2
				{
					a7=88;
					b7=0;
					setup();
				}
			}
			else if(P3C==4)//5.2.2
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==1 || P4C==7)//5.2.2.1, 5.2.2.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==9)//5.2.2.3
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P3C==6)//5.2.3
		{
			if(BT==2)/////////////////////////////////////////
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==2 || P3C==6 || P3C==7 || P3C==8)//4.3.1, 4.3.2, 4.3.3, 4.3.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//4.3.5
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==2 || P4C==7)//4.3.5.1, 4.3.5.2
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
				else if(P4C==8)//4.3.5.3
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//4.4
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==8 || P3C==9)//4.4.1, 4.4.2, 4.4.4, 4.4.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//4.4.3
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==8 || P4C==9)//4.4.3.2, 4.4.3.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//4.4.3.1
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//4.5
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==6 || P3C==8)//4.5.1, 4.5.2, 4.5.3, 4.5.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//4.5.5
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==3 || P4C==6)//4.5.5.2, 4.5.5.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//4.5.5.1
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//4.6
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==6 || P3C==9)//4.6.1, 4.6.2, 4.6.4, 4.6.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//4.6.3
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==2 || P4C==6)//4.6.3.2, 4.6.3.3
				{
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==1)//4.6.3.1
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//4.7
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==6 || P3C==8)//4.7.1, 4.7.2, 4.7.4, 4.7.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//4.7.3
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==2 || P4C==8)//4.7.3.2, 4.7.3.3
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
				else if(P4C==1)//4.7.3.1
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
	}
	else if(P1C==6)//6
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//6.1
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==2 || P3C==4 || P3C==8 || P3C==9)//6.1.1, 6.1.2, 6.1.4, 6.1.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//6.1.3
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==2 || P4C==9)//6.1.3.1, 6.1.3.3
				{
					a8=88;
					b8=0;
					flag=4;
					setup();
				}
				else if(P4C==8)//6.1.3.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//6.2
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==8 ||P3C==9)//6.2.1, 6.2.2, 6.2.4, 6.2.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//6.2.3
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==4 || P4C==8)//6.2.3.2, 6.2.3.3
				{
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==1)//6.2.3.1
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==3)//6.3
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==4 || P3C==7 || P3C==8)//6.3.2, 6.3.3, 6.3.4, 6.3.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//6.3.1
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==4 || P4C==7)//6.3.1.1, 6.3.1.2
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//6.3.1.3
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//6.4
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==7 || P3C==8)//6.4.1, 6.4.2, 6.4.3, 6.4.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//6.4.5
			{
				if(BT==3)
				{
					BT=4;
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==2 || P4C==8)//6.4.5.1, 6.4.5.3
				{
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==7)//6.4.5.2
				{
					a2=88;
					b2=0;
					setup();
				}
			}
		}
		else if(P2C==7)//6.5
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==4 || P3C==8)//6.5.2, 6.5.3, 6.5.4, 6.5.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//6.5.1
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==2 || P4C==8)//6.5.1.1, 6.5.1.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
				else if(P4C==3)//6.5.1.2
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//6.6
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==4 || P3C==7)//6.6.2, 6.6.3, 6.6.4, 6.6.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//6.6.1
			{
				if(BT==3)
				{
					BT=4;
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==2 || P4C==4)//6.6.1.1, 6.6.1.3
				{
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==3)//6.6.1.2
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//6.7
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==4 || P3C==8)//6.7.1, 6.7.2, 6.7.3, 6.7.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//6.7.4
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==1 || P4C==4)//6.7.4.1, 6.7.4.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//6.7.4.2
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
			}
		}
	}
	else if(P1C==7)//7
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//7.1
		{
			if(BT==2)
			{
				BT=3;
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==8 || P3C==9)//7.1.1, 7.1.2, 7.1.4, 7.1.5
			{
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==6)//7.1.3
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==3 || P4C==9)//7.1.3.1, 7.1.3.3
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//7.1.3.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//7.2
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==3 || P3C==4 || P3C==6 ||P3C==8)//7.2.1, 7.2.2, 7.2.3, 7.2.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//7.2.5
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==3 || P4C==4)//7.2.5.1, 7.2.5.2
				{
					a6=88;
					b6=0;
					flag=4;
					setup();
				}
				else if(P4C==6)//7.2.5.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==3)//7.3
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==6 || P3C==9)//7.3.1, 7.3.3, 7.3.4, 7.3.5
			{
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==2)//7.3.2
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//7.3.2.1, 7.3.2.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==9)//7.3.2.3
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//7.4
		{
			if(BT==2)
			{
				BT=3;
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==6 || P3C==8)//7.4.1, 7.4.2, 7.4.3, 7.4.4
			{
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==9)//7.4.5
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==2 || P4C==6)//7.4.5.1, 7.4.5.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
				else if(P4C==3)//7.4.5.2
				{
					a6=88;
					b6=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//7.5
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==1 || P3C==3 || P3C==4 || P3C==9)//7.5.1, 7.5.3, 7.5.4, 7.5.5
			{
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==2)//7.5.2
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==3 || P4C==4)//7.5.2.1, 7.5.2.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==9)//7.5.2.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//7.6
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==4 || P3C==6)//7.6.2, 7.6.3, 7.6.4, 7.6.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//7.6.1
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==2 || P4C==3)//7.6.1.1, 7.6.1.2
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//7.6.1.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//7.7
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==1 || P3C==3 || P3C==4 || P3C==6)//7.7.1, 7.7.3, 7.7.4, 7.7.5
			{
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==2)//7.7.2
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==1 || P4C==3)//7.7.2.1, 7.7.2.2
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//7.7.2.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
	}
	else if(P1C==8)//8
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//8.1
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==2 || P3C==4 || P3C==6 || P3C==9)//8.1.1, 8.1.3, 8.1.4, 8.1.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//8.1.2
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==4 || P4C==9)//8.1.2.1, 8.1.2.3
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//8.1.2.2
				{
					a9=88;
					b9=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//8.2
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==4 || P3C==6 ||P3C==9)//8.2.1, 8.2.2, 8.2.3, 8.2.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//8.2.4
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==1 || P4C==4)//8.2.4.1, 8.2.4.2
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//8.2.4.3
				{
					a1=88;
					b1=0;
					setup();
				}
			}
		}
		else if(P2C==3)//8.3
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==4 || P3C==6 || P3C==7)//8.3.2, 8.3.3, 8.3.4, 8.3.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//8.3.1
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//8.3.1.1, 8.3.1.2
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
				else if(P4C==7)//8.3.1.3
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//8.4
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==6 || P3C==9)//8.4.1, 8.4.2, 8.4.4, 8.4.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//8.4.3
			{
				if(BT==3)
				{
					BT=4;
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==2 || P4C==6)//8.4.3.2, 4.4.3.3
				{
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==1)//8.4.3.1
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//8.5
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==4 || P3C==6)//8.5.2, 8.5.3, 8.5.4, 8.5.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//8.5.1
			{
				if(BT==3)
				{
					BT=4;
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==2 || P4C==4)//8.5.1.1, 8.5.1.3
				{
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==3)//8.5.1.2
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//8.6
		{
			if(BT==2)
			{
				BT=3;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2 || P3C==3 || P3C==4 || P3C==6)//8.6.2, 8.6.3, 8.6.4, 8.6.5
			{
				a1=88;
				b1=0;
				setup();
			}
			else if(P3C==1)//8.6.1
			{
				if(BT==3)
				{
					BT=4;
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==2 || P4C==3)//8.6.1.1, 8.6.1.2
				{
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==6)//8.6.1.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==9)//8.7
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==4 || P3C==6)//8.7.1, 8.7.2, 8.7.4, 8.7.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//8.7.3
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==1 || P4C==2)//8.7.3.1, 8.7.3.2
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
				else if(P4C==4)//8.7.3.3
				{
					a2=88;
					b2=0;
					flag=4;
					setup();
				}
			}
		}
	}
	else if(P1C==9)//999999999999999999999999999999999999999999999999999999999999999999999
	{
		if(BT==1)
		{
			BT=2;
			a5=88;
			b5=0;
			setup();
		}
		else if(P2C==1)//9.1
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==3 || P3C==4 || P3C==6 || P3C==7)//9.1.2, 9.1.3, 9.1.4, 9.1.5
			{
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==2)//8.1.1
			{
				if(BT==3)
				{
					BT=4;
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==4 || P4C==6)//9.1.1.1, 9.1.1.2
				{
					a9=88;
					b9=0;
					setup();
				}
				else if(P4C==7)//9.1.1.3
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==2)//9.2
		{
			if(BT==2)
			{
				BT=3;
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==1 || P3C==3 || P3C==7 ||P3C==8)//9.2.1, 9.2.2, 9.2.4, 9.2.5
			{
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==4)//9.2.3
			{
				if(BT==3)
				{
					BT=4;
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==1 || P4C==8)//9.2.3.1, 9.2.3.3
				{
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==3)//9.2.3.2
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==3)//9.3
		{
			if(BT==2)
			{
				BT=3;
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==7 || P3C==8)//9.3.1, 9.3.2, 9.3.4, 9.3.5
			{
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==4)//9.3.3
			{
				if(BT==3)
				{
					BT=4;
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==1 || P4C==7)//9.3.3.1, 9.3.3.2
				{
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==8)//9.3.9.3
				{
					a7=88;
					b7=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==4)//9.4
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==1 || P3C==3 || P3C==6 || P3C==7)//9.4.1, 9.4.3, 9.4.4, 9.4.5
			{
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==2)//9.4.2
			{
				if(BT==3)
				{
					BT=4;
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==1 || P4C==6)//9.4.2.1, 9.4.2.2
				{
					a7=88;
					b7=0;
					setup();
				}
				else if(P4C==7)//9.4.2.3
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==6)//9.5
		{
			if(BT==2)
			{
				BT=3;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==4 || P3C==8)//9.5.1, 9.5.2, 9.5.3, 9.5.5
			{
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==7)//9.5.4
			{
				if(BT==3)
				{
					BT=4;
					a8=88;
					b8=0;
					setup();
				}
				else if(P4C==1 || P4C==4)//9.5.4.1, 9.5.4.3
				{
					a2=88;
					b2=0;
					setup();
				}
				else if(P4C==2)//9.5.4.2
				{
					a4=88;
					b4=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==7)//5.6
		{
			if(BT==2)
			{
				BT=3;
				a8=88;
				b8=0;
				setup();
			}
			else if(P3C==1 || P3C==3 || P3C==4 || P3C==6)//9.6.1, 9.6.3, 9.6.4, 9.6.5
			{
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==2)//9.6.2
			{
				if(BT==3)
				{
					BT=4;
					a1=88;
					b1=0;
					setup();
				}
				else if(P4C==3 || P4C==4)//9.6.2.1, 9.6.2.2
				{
					a6=88;
					b6=0;
					flag=4;
					setup();
				}
				else if(P4C==6)//9.6.2.3
				{
					a3=88;
					b3=0;
					flag=4;
					setup();
				}
			}
		}
		else if(P2C==8)//9.7
		{
			if(BT==2)
			{
				BT=3;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==1 || P3C==2 || P3C==4 || P3C==6)//9.7.1, 9.7.2, 9.7.4, 9.7.5
			{
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==3)//9.7.3
			{
				if(BT==3)
				{
					BT=4;
					a6=88;
					b6=0;
					setup();
				}
				else if(P4C==1 || P4C==2)//9.7.3.1, 9.7.3.2
				{
					a4=88;
					b4=0;
					setup();
				}
				else if(P4C==4)//9.7.3.3
				{
					a1=88;
					b1=0;
					flag=4;
					setup();
				}
			}
		}
	}					
}
