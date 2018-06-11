#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char *name;
	int id;	
} Student;

char *names[] = {"Kun", "Nick", "Bryant", "Alex",
                 "Alina", "Zachary"};

int main()
{
   Student *class;
   Student *stdPtr;
   char *curName;
   int i; 
   int *curID;
   char message[] = "CSC nightmare";

   class = (Student *)malloc(sizeof(Student) * 6);

   for(i=0;i<6;i++){
      class[i].name = names[i];
      class[i].id = i*i;
   }

   stdPtr = class+2;
   curName = class[4].name+2;
   curID = &(class->id);
   /* Draw memory at this point in execution! */

   message[6] = ' ';
   message[1] = class[2].name[5];
   message[(*curID)+4] = (stdPtr+1)->name[4]+32;
   message[i-4] = *((class+1)->name)+4;
   (*curID)++;
   message[5] = *(class[(*curID)+1].name+1);
   message[8] = *(curName+1)-(class[4].id*2);

   stdPtr++;
   class++;
   curName = class[4].name;

   message[class->id-1] = (class-1)->name[4]+2;
   message[stdPtr->id+1] = *(curName-i-3)-2;
   message[7] = (class+2)->name[0]-class[4].id-7;
   message[9] = *(stdPtr[2].name)+ '$' - 21;
   message[12] = class->name[4];
   message[11] = class[class[1].id].name[1]+4;
   message[3] = **(names+4)+18;
   printf("%s\n",message);
	
	return 0;
}
