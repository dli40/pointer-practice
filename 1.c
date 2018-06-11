#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10];
	int id;	
} Student;

int main()
{
   char *names[] = {"Samantha", "Jimmy", "Tyler"};
   Student *class;
   Student *stdPtr;
   char *curName;
   int i=0;
   int *curID;
   char message[] = "nightmare!";

   class = (Student *)malloc(sizeof(Student) * 3);
   strcpy(class[i].name, "Garrett");
   class[i++].id = 14;
   strcpy(class[i].name, "Austin");
   class[i++].id = 32;
   strcpy(class[i].name, "Braden");
   class[i++].id = 2;

   stdPtr = class+2;
   curName = names[1]+2;
   curID = &(class->id);
   /* Draw memory at this point in execution! */

   message[0] = class[0].name[++i-4] + 1; 
   message[1] = *(*names+1);  
   message[2] = (class+2)->name[0] + *curID;  
   message[3] = (*(*(names+2)+4)-2);  
   message[4] = curName[5];  
   message[5] = *(curName-3)+ stdPtr[-1].id; 
   --stdPtr;
   message[6] = message[10] + message[class[2].id]-2; 
   message[7] = *(class->name+2)+7;  
   message[8] = (stdPtr+1)->name[0]/(stdPtr+1)->id; 
   message[9] = curName[-3];

   printf("%s\n",message);
	
   return 0;
}
