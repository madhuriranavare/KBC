#include<stdio.h>
void start();
void help();

int main(){
   int ch,y=0;
   
    printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME......!!!!!!! ");
     
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");

     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   HERE THE OPTION FOR THE GAME!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");

     printf("\n\t\t  Press 1 to start the game");
     printf("\n\t\t  press 2 for help            ");
     printf("\n\t\t  press 3 to quit             ");
     printf("\n\t\t________________________________________\n\n");

	
	
	do{
	printf("Enter your choice=\n");
	scanf("%d",&ch);
	char c[50];
	printf("Enter name=");
	scanf("%s",c);
	printf("welcome=%s",c);

	
	
     switch(ch){
	
	case 1:
	start();
	break;
	
	case 2:
	help();
	break;
	
	case 3:
	exit(1);
	break;

	default:
	break;
	
       }
return 0;
}
	printf("do u want to continue\n");
	scanf("%d",&y);	
}while(y==1);
}	






void start(){   
   int i,n1=0,points=0; //n1 is no of correct answers
   int q_no;
   char p;
   FILE *fp1,*fp2;
   char str[100],str1[100];

   fp1 = fopen("file1.txt","r"); 
   fp2 = fopen("soln.txt","r");
   

   for(q_no=1;n1 == q_no-1;q_no++)
   {
   for(i=0;i<6;i++)
   	 {
   		if( fgets (str, 100, fp1)!=NULL ) 
   		puts(str);         // writing content to stdout
	 }
   printf("Type your answer(a/b/c/d):\n");
   scanf(" %c",&p);
   fgets (str1, 100, fp2);

   if (p == str1[0])
	   {
	   printf("Correct Answer,You get 10 points for this!!!\n\n");
	   points += 10;
	   n1++;
	   }
   else
           {
	   printf("Wrong Answer!!!!!!  Game Over\n");
           printf("Your points:%d\n",points);
           //return 0;
           }	
   if(q_no == 4){ 

	printf("Congratulations You have done all the questions!!.  Your score:%d\n",points);
break;
}
}
}

void help(){
	
    FILE *fptr;
 
    char filename[100], c;
 
    
 
    // Open file
    fptr = fopen("help.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
 
    // Read contents from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
 
    fclose(fptr);
    return 0;
}
		
		 
