#include<stdio.h>
int main()
{
	int currplayer,p1cpos=0,p2cpos=0,dicevalue;
	int temp,startFlag1=0,startFlag2=0;
	currplayer=1;
	while(1)
	{
		scanf("%d",&dicevalue);
		if(currplayer==1)
		{
			if(dicevalue==1&&startFlag1==0)
			{
				p1cpos=p1cpos+1;
				if(startFlag1==0)
					startFlag1=1;
			}
			else
			{
				if(startFlag1==1)
				{
					temp=p1cpos+dicevalue;
					if(temp>30)
					{
						currplayer=2;
						continue;
					}
					if(temp<=30)
					{
						if(temp==12)
							p1cpos=20;
						else if(temp==13)
							p1cpos=25;
						else if(temp==14)
							p1cpos=2;
						else if(temp==28)
							p1cpos=24;
						else if(temp==30)
						{
							printf("player 1 wins");
							break;
						}
						else
							p1cpos=temp;
					}
				}
			}
			currplayer=dicevalue==6?1:2;
		}
		else
		{
				if(dicevalue==1&&startFlag2==0)
			{
				p2cpos=p2cpos+1;
				if(startFlag2==0)
					startFlag2=1;
			}
			else
			{
				if(startFlag2==1)
				{
					temp=p2cpos+dicevalue;
					if(temp>30)
					{
						currplayer=1;
						continue;
					}
					if(temp<=30)
					{
						if(temp==12)
							p2cpos=20;
						else if(temp==13)
							p2cpos=25;
						else if(temp==14)
							p2cpos=2;
						else if(temp==28)
							p2cpos=24;
						else if(temp==30)
						{
							printf("player 2 wins");
							break;
						}
						else
							p2cpos=temp;
					}
				}
			}
			currplayer=dicevalue==6?2:1;	
		}
	}
	
	return 0;
}
