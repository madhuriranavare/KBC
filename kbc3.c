 #include<stdio.h>

void start1();
void start2();
void start3();
void help();


int main(){
	int ch,age,lvl;
	printf("\n\t\t________________________________________");
	printf("\n\t\t\t WELCOME......!!!!!!! ");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t BECOME A MILLIONAIRE!!!!!!!!!!! ") ;
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t HERE THE OPTION FOR THE GAME!!! ") ;
	printf("\n\t\t________________________________________");
	printf("\n\t\t________________________________________");
	printf("\n\t\t Press 1 to start the game");
	printf("\n\t\t press 2 for help ");
	printf("\n\t\t press 3 to view your score ");
	printf("\n\t\t press 4 to quit ");
	printf("\n\t\t________________________________________\n\n");


	
		
		
 				



		char c[100];
		while(1){
		printf("Enter your choice=\n");
		scanf("%d",&ch);
		
		
		switch(ch){
			case 1:
			//ar c[100];
		        printf("Enter name=");
		        scanf("%s",c);
			printf("welcome=%s",c);

			printf("\n\t\t SELECT LEVEL");
			printf("\n\t\t 1.EASY");
			printf("\n\t\t 2.MEDIUM");
			printf("\n\t\t 3.HARD");
			scanf("%d",&lvl);
	
		
			
			if(lvl == 1){
			start1();
			}
			else if(lvl == 2){
			start2();
			}
			else{
			start3();
			}
		
			break;
			case 2:
			help();
			break;
			case 3:
			//score();
			break;
			case 4:
			exit(0);
			break;
			default:
			break;
		}
         }
		return 0;
      }	




	void start1(){
	int i,n1=0,points=0; //n1 is no of correct answers
   int q_no;
   char p;
   FILE *fp1,*fp2,*f;
   char str[500],str1[500];

   fp1 = fopen("file1.txt","r"); 
   fp2 = fopen("soln1.txt","r");
   f = fopen("score.txt", "w");


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
	   fprintf(f, "%d", points);
           return 0;
           }	
   if(q_no == 10){ printf("Congratulations You have done all the questions!!.  Your score:%d\n",points);
break;
       }


   }
   fclose(fp1);
   fclose(fp2);
   //return 0;
		
}


	void start2(){
	int i,n1=0,points=0; //n1 is no of correct answers
   int q_no;
   char p;
   FILE *fp1,*fp2,*f;
   char str[500],str1[500];

   fp1 = fopen("file2.txt","r"); 
   fp2 = fopen("soln2.txt","r");
   f = fopen("score.txt", "w");


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
	   fprintf(f, "%d", points);
           return 0;
           }	
   if(q_no == 10){ 
  printf("Congratulations You have done all the questions!!.  Your score:%d\n",points);
break;
       }


   }
   fclose(fp1);
   fclose(fp2);
   //return 0;
		
}

		void start3(){
	int i,n1=0,points=0; //n1 is no of correct answers
   int q_no;
   char p;
   FILE *fp1,*fp2,*f;
   char str[500],str1[500];

   fp1 = fopen("file3.txt","r"); 
   fp2 = fopen("soln3.txt","r");
   f = fopen("score.txt", "w");


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
	   fprintf(f, "%d", points);
           return 0;
           }	
   if(q_no == 10){ printf("Congratulations You have done all the questions!!.  Your score:%d\n",points);
break;
       }


   }
   fclose(fp1);
   fclose(fp2);
   //return 0;
		
}

	void help(){
	FILE *fptr;	
	char c; // Open file
	fptr = fopen("help.txt", "r");
	if (fptr == NULL){

		printf("Cannot open file \n");
		//exit(0);
	}
		// Read contents from file
		c = fgetc(fptr);
		while (c != EOF){
		
			printf ("%c", c);
			c = fgetc(fptr);
		}
		fclose(fptr);	
 
}	

/*int score(){
int a[1000];
   FILE *fptr;
   if ((fptr=fopen("score.txt","r"))==NULL){
       printf("Error! opening file");
       exit(1);         Program exits if file pointer returns NULL.
   }
   fscanf(fptr,"%[^\n]",a);
   printf("Data from file:\n%d",a);
   fclose(fptr);
   return 0;
}*/
