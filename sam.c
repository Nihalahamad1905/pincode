#include<stdio.h>
int main ()
{
	int pin[6],ch,re;
    do {
   printf("\t***** Welcome to the Pin-Code Varification System *****\n\n");
   printf("\t1.Validate the Pin Code\n\n");
   printf("\t2.Show the Conditiond for varification of Pin Code\n\n");
   printf("\t3.Exit from the system \n\n");
   printf("\tEnter your Choice - \n\t");
   scanf("%d",&ch);
    
    switch(ch)
{
        case 1:
	printf("\tEnter the Pin Code x.x.x.x - x.x.x.x \n\n\t");
	scanf("%d %d %d %d %d %d",&pin[1],&pin[2],&pin[3],&pin[4],&pin[5],&pin[6]);
  
    if (pin[1]!=0 && pin[1]>=1 && pin[1]<=9 && pin[2]>=0 && pin[3]>=0 && pin[4]>=0 && pin[5]>=0 && pin[6]>=0 && pin[2]<=9 && pin[3]<=9 && pin[4]<=9 && pin[5]<=9 && pin[6]<=9)
    {
    	printf("\tValid pin Code\n\n");
    }
    else
    {
        printf("\tInvalid Pin Code\n\n");
    }
       do{ 
    printf("\tDo Want to vafity another Pin Code\n\n");
    printf("\t1.Yes\n\n");
    printf("\t2.No\n\n\t");
    scanf("%d",&re);
switch (re){
    case 1:printf("\tEnter the Pin Code x.x.x.x - x.x.x.x \n\n\t");
    scanf("%d %d %d %d %d %d",&pin[1],&pin[2],&pin[3],&pin[4],&pin[5],&pin[6]);
  
    if (pin[1]!=0 && pin[1]>=1 && pin[1]<=9 && pin[2]>=0 && pin[3]>=0 && pin[4]>=0 && pin[5]>=0 && pin[6]>=0 && pin[2]<=9 && pin[3]<=9 && pin[4]<=9 && pin[5]<=9 && pin[6]<=9)
    {
        printf("\tValid pin Code\n\n");
    }
    else
    {
        printf("\tInvalid Pin Code\n\n");
    }
    break;

    case 2: printf("");
    break;
    return 0;
    default : printf("\tEnter Correct Choics\n\n\t");
}
}while(re!=2);
break;
    case 2: printf("\n\tThe valid pin code of India must satisfy the following conditions - \n");
            printf("\n\t1.It can be only six digits.\n\n\t2.It should not start with zero.\n");
            printf("\n\t3.First digit of the pin code must be from 1 to 9.\n\n\t4.Next five digits of the pin code may range from 0 to 9.\n\n\n\n");
break;
case 3: printf("\t***** Thank You For Using This System *****\n\n");
break;

    default : printf("\tEnter Correct Choics\n\n\t");
}
	}while(ch!=3);
        
	return 0;
}

