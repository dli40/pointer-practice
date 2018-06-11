#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char *name;
	int id;	
} Student;

char *names[] = {"Ryan", "Tony", "Emily", "Jiahe", "Frank", "Ben"};

int main()
{
   Student *class;
   Student *stdPtr;
   char *curName;
   int i=0;
   int *curID;
   char message[] = "nightmare!";

   class = (Student *)malloc(sizeof(Student) * 3);
   class[i].name = names[3];
   class[i++].id = 34;
   class[i].name = names[4];
   class[i++].id = 2;
   class[i].name = names[5];
   class[i++].id = 51;

   stdPtr = class+2;
   curName = names[1]+2;
   curID = &(class[1].id);
   /* Draw memory at this point in execution! */

   message[0] = class->id;
   message[1] = *(curName-5) - stdPtr[-1].id - 30;
   message[2] = names[2][i] - class->name[0];
   stdPtr = stdPtr - 2;;
   message[3] = *(message+10) + ' ';
   message[4] = *(*(names+1)+1)+1;
   message[5] = curName[6];
   message[6] = *(stdPtr->name-6);
   message[7] = class[2].name[1];
   message[8] = **(names+1) + 6;
   message[9] = (*names)[0] - 19;

   printf("%s\n",message);
	
   return 0;
}
