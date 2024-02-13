char* intToRoman(int num) {
    if (num < 1 || num > 3999) {
        printf("Invalid input. Please enter a number between 1 and 3999.\n");
        return 0;
    }
    char *romansymbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","VI","I"};
    int romanvalue[]={1000,900,500,400,100,90,50,10,9,5,4,1};
    printf("roman numerical representation:");
    int i;
	for(i=0;i<=13;i++){
    	while(num>=romanvalue[i])
    	{
    	printf("%s", romansymbols[i]);
            num -= romanvalue[i];	
    		
		}
	}
	printf("\n");
}
int main()
{
	int num,romanvalue,i;
	char romansymbols[2000],a;
	scanf("%d",&num);
	a= intToRoman(num);
	printf("%s",a);
	
}
