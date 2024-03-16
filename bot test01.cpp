#include<stdio.h>
#include<stdlib.h>

int opt,chance=1,flag=0,put,BT=1,cse=1,PC=1,P1C,P2C,P3C,P4C;
char a1,a2,a3,a4,a5,a6,a7,a8,a9;
int b1=1,b2=1,b3=1,b4=1,b5=1,b6=1,b7=1,b8=1,b9=1;

int draw();
int player();
int win();
int check();
int setup();
int bot();
int main()
{
	printf("press 1 to play : ");
	scanf("%d",&opt);
	if(opt==1)
		bot();
}
int bot()
{
	if(BT==1)
	{
		BT=2;
		b1=0;
		a1=88;
		setup();
	}
	if(P1C==5)
	{   
		if(BT==2)
		{
			BT=3;
			a9=88;
			b9=0;
			setup();	
		}
		else if(P2C==2)
		{
			if(BT==3)
			{
				BT=4;
				a8=88;
				b8=0;
				setup();	
			}
			else if(P3C==3)//1.1.1.1
			{
				if(BT==4)
				{
					BT=5;
					a7=88;
					setup();	
				}
			}
			else if(P3C==4)//1.1.1.2
			{
				if(BT==4)
				{
					BT=5;
					a7=88;
					setup();
				}
			}
			else if(P3C==6)//1.1.1.3
			{
				if(BT==4)
				{
					BT=5;
					a7=88;
					setup();
				}
			}
			else if(P3C==7)//1.1.1.4
			{
				if(BT==4)
				{
					BT=5;
					a3=88;
					b3=0;
					setup();
				}
				else if(P4C==4)//1.1.1.4.1
				{
					a6=88;
					setup();
				}
				else if(P4C==6)//1.1.1.4.2
				{
					a4=88;
					flag=4;
					setup();
				}
			}	
		}
		else if(P2C==3)//1.1.4
		{
			if(BT==3)
			{
				BT=4;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==2)//1.1.4.1
			{
				a8=88;
				setup();
			}
			else if(P3C==4)//1.1.4.2
			{
				a8=88;
				setup();
			}
			else if(P3C==6)//1.1.4.3
			{
				a4=88;
				setup();
			}
			else if(P3C==8)//1.1.4.4
			{
				a4=88;
				setup();
			}
		}
		else if(P2C==4)//1.1.2
		{
			if(BT==3)
			{
				BT=4;
				a6=88;
				b6=0;
				setup();
			}
			else if(P3C==2)//1.1.2.1
			{
				a3=88;
				setup();
			}
			else if(P3C==3)//1.1.2.2
			{
				if(BT==4)
				{
					BT=5;
					a7=88;
					b7=0;
					setup();
				}
				if(P4C==2)//1.1.2.2.1
				{
					a8=88;
					setup();
				}
				else if(P4C==8)//1.1.2.2.2
				{
					a2=88;
					flag=4;
					setup();
				}
			}
			else if(P3C==7)//1.1.2.3
			{
				a3=88;
				setup();
			}
			else if(P3C==8)//1.1.2.4
			{
				a3=88;
				setup();
			}	
		}
		else if(P2C==6)//1.1.5
		{
			if(BT==3)
			{
				BT=4;
				a4=88;
				b4=0;
				setup();
			}
			else if(P3C==2)//1.1.5.1
			{
				a7=88;
				setup();
			}
			else if(P3C==3)//1.1.5.2
			{
				a7=88;
				setup();
			}
			else if(P3C==7)//1.1.5.3
			{
				if(BT==4)
				{
					BT=5;
					a3=88;
					b3=0;
					setup();
				}
				if(P4C==2)//1.1.5.3.1
				{
					a8=88;
					flag=4;
					setup();
				}
				else if(P4C==8)//1.1.5.3.2
				{
					a2=88;
					setup();
				}
			}
			else if(P3C==8)//1.1.5.4
			{
				a7=88;
				setup();
			}
		}
		else if(P2C==7)//1.1.3
		{
			if(BT==3)
			{
				BT=4;
				a3=88;
				b3=0;
				setup();
			}
			else if(P3C==2)//1.1.3.1
			{
				a6=88;
				setup();
			}
			else if(P3C==4)//1.1.3.2
			{
				a6=88;
				setup();
			}
			else if(P3C==6)//1.1.3.3
			{
				a2=88;
				setup();
			}
			else if(P3C==8)//1.1.3.4
			{
				a2=88;
				setup();
			}
		}
		else if(P2C==8)//1.1.6
		{
			if(BT==3)
			{
				BT=4;
				a2=88;
				b2=0;
				setup();
			}
			else if(P3C==3)//1.1.6.1
			{
				if(BT==4)
				{
					BT=5;
					a7=88;
					b7=0;
					setup();
				}
				if(P4C==4)//1.1.6.1.1
				{
					a6=88;
					flag=4;
					setup();
				}
				else if(P4C==6)//1.1.6.1.2
				{
					a4=88;
					setup();
				}
			}
			else if(P3C==4)//1.1.6.2
			{
				a3=88;
				setup();
			}
			else if(P3C==6)//1.1.6.3
			{
				a3=88;
				setup();
			}
			else if(P3C==7)//1.1.6.4
			{
				a3=88;
				setup();
			}
		}	
	}
	else if(P1C==2)//2.1
	{
		if(BT==2)
		{
			BT=3;
			a7=88;
			b7=0;
			setup();	
		}
		else if(P2C==3)//2.1.1
		{
			a4=88;
			setup();
		}
		else if(P2C==4)//2.1.2
		{
			if(BT==3)
			{
				BT=4;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==3)//2.1.2.1
			{
				a8=88;
				setup();
			}
			else if(P3C==5)//2.1.2.2
			{
				a8=88;
				setup();
			}
			else if(P3C==6)//2.1.2.3
			{
				a8=88;
				setup();
			}
			else if(P3C==8)//2.1.2.4
			{
				a5=88;
				setup();
			}
		}
		else if(P2C==5)//2.1.3
		{
			a4=88;
			setup();
		}
		else if(P2C==6)//2.1.4
		{
			a4=88;
			setup();
		}
		else if(P2C==8)//2.1.5
		{
			a4=88;
			setup();
		}
		else if(P2C==9)//2.1.6
		{
			a4=88;
			setup();
		}	
	}
	else if(P1C==3)
	{
		if(BT==2)
		{
			BT=3;
			a7=88;
			b7=0;
			setup();
		}
		else if(P2C==2)//3.1.1
		{
			a4=88;
			setup();
		}
		else if(P2C==4)//3.1.2
		{
			if(BT==3)
			{
				BT=4;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==2)//3.2.2.1
			{
				a5=88;
				setup();
			}
			else if(P3C==5)//3.2.2.2
			{
				a8=88;
				setup();
			}
			else if(P3C==6)//3.2.2.3
			{
				a5=88;
				setup();
			}
			else if(P3C==8)//3.2.2.4
			{
				a5=88;
				setup();
			}
		}
		else if(P2C==5)//3.1.3
		{
			a4=88;
			setup();
		}
		else if(P2C==6)//3.1.4
		{
			a4=88;
			setup();
		}
		else if(P2C==8)//3.1.5
		{
			a4=88;
			setup();
		}
		else if(P2C==9)//3.1.6
		{
			a4=88;
			setup();
		}
	}
	else if(P1C==4)
	{
		if(BT==2)
		{
			BT=3;
			a3=88;
			b3=0;
			setup();
		}
		else if(P2C==2)//4.1.1
		{
			if(BT==3)
			{
				BT=4;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==5)//4.1.1.1
			{
				a6=88;
				setup();
			}
			else if(P3C==6)//4.1.1.2
			{
				a5=88;
				setup();
			}
			else if(P3C==7)//4.1.1.3
			{
				a5=88;
				setup();
			}
			else if(P3C==8)//4.1.1.4
			{
				a5=88;
				setup();
			}
		}
		else if(P2C==5)//4.1.2
		{
			a2=88;
			setup();
		}
		else if(P2C==6)//4.1.3
		{
			a2=88;
			setup();
		}
		else if(P2C==7)//4.1.4
		{
			a2=88;
			setup();
		}
		else if(P2C==8)//4.1.5
		{
			a2=88;
			setup();
		}
		else if(P2C==9)//4.1.6
		{
			a2=88;
			setup();
		}
	}
	else if(P1C==6)
	{
		if(BT==2)
		{
			BT=3;
			a3=88;
			b3=0;
			setup();
		}
		if(P2C==2)//5.1.1
		{
			if(BT==3)
			{
				BT=4;
				a7=88;
				b7=0;
				setup();
			}
			else if(P3C==4)//5.1.1.1
			{
				a5=88;
				setup();
			}
			else if(P3C==5)//5.1.1.2
			{
				a4=88;
				setup();
			}
			else if(P3C==8)//5.1.1.3
			{
				a4=88;
				setup();
			}
			else if(P3C==9)//5.1.1.4
			{
				a4=88;
				setup();
			}
		}
		else if(P2C==4)//5.1.2
		{
			a2=88;
			setup();
		}
		else if(P2C==5)//5.1.3
		{
			a2=88;
			setup();
		}
		else if(P2C==7)//5.1.4
		{
			a2=88;
			setup();
		}
		else if(P2C==8)//5.1.5
		{
			a2=88;
			setup();
		}
		else if(P2C==9)//5.1.6
		{
			a2=88;
			setup();
		}
	}
	else if(P1C==7)
	{
		if(BT==2)
		{
			BT=3;
			a3=88;
			b3=0;
			setup();
		}
		if(P2C==2)//6.1.1
		{
			if(BT==3)
			{
				BT=4;
				a9=88;
				b9=0;
				setup();
			}
			else if(P3C==4)//6.1.1.1
			{
				a5=88;
				setup();
			}
			else if(P3C==5)//6.1.1.2
			{
				a6=88;
				setup();
			}
			else if(P3C==6)//6.1.1.3
			{
				a5=88;
				setup();
			}
			else if(P3C==8)//6.1.1.4
			{
				a5=88;
				setup();
			}
		}
		else if(P2C==4)//6.1.2
		{
			a2=88;
			setup();
		}
		else if(P2C==5)//6.1.3
		{
			a2=88;
			setup();
		}
		else if(P2C==6)//6.1.4
		{
			a2=88;
			setup();
		}
		else if(P2C==8)//6.1.5
		{
			a2=88;
			setup();
		}
		else if(P2C==9)//6.1.6
		{
			a2=88;
			setup();
		}	
	}
	else if(P1C==8)
	{
		if(BT==2)
		{
			BT=3;
			a7=88;
			b7=0;
			setup();
		}
		if(P2C==2)//7.1.1
		{
			a4=88;
			setup();
		}
		else if(P2C==3)//7.1.2
		{
			a4=88;
			setup();
		}
		else if(P2C==4)//7.1.3
		{
			if(BT==3)
			{
				BT=4;
				a3=88;
				b3=0;
				setup();
			}
			if(P3C==2)//7.1.3.1
			{
				a5=88;
				setup();
			}
			else if(P3C==5)//7.1.3.2
			{
				a2=88;
				setup();
			}
			else if(P3C==6)//7.1.3.3
			{
				a2=88;
				setup();
			}
			else if(P3C==9)//7.1.3.4
			{
				a2=88;
				setup();
			}
		}
		else if(P2C==5)//7.1.4
		{
			a4=88;
			setup();
		}
		else if(P2C==6)//7.1.5
		{
			a4=88;
			setup();
		}
		else if(P2C==9)//7.1.6
		{
			a4=88;
			setup();
		}
	}
	else if(P1C==9)
	{
		if(BT==2)
		{
			BT=3;
			a3=88;
			b3=0;
			setup();
		}
		if(P2C==2)//8.1.1
		{
			if(BT==3)
			{
				BT=4;
				a7=88;
				b7=0;
				setup();
			}
			if(P3C==4)//8.1.1.1
			{
				a5=88;
				setup();
			}
			else if(P3C==5)//8.1.1.2
			{
				a4=88;
				setup();
			}
			else if(P3C==6)//8.1.1.3
			{
				a4=88;
				setup();
			}
			else if(P3C==8)//8.1.1.4
			{
				a4=88;
				setup();
			}
		}
		else if(P2C==4)//8.1.2
		{
			a2=88;
			setup();
		}
		else if(P2C==5)//8.1.3
		{
			a2=88;
			setup();
		}
		else if(P2C==6)//8.1.4
		{
			a2=88;
			setup();
		}
		else if(P2C==7)//8.1.5
		{
			a2=88;
			setup();
		}
		else if(P2C==8)//8.1.6
		{
			a2=88;
			setup();
		}
	}
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
		P4C=put;
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
