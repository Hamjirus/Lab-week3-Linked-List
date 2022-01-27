#include "node.h"

int main(){
  NODE *head,*temp,*back,*front ;
  head=(NodePtr) malloc(sizeof(NODE));
  temp = head;
  back = NULL;
  int Rec_ID = 0;
  char *Rec_Name;
  Rec_Name = (char*) malloc(sizeof(char)*50);
  
  for(int i=1 ; i>0; i++)
  {
    printf("Input ID :");
    if(scanf("%i",&Rec_ID)){};

    if(Rec_ID!=0){
      printf("Input Name :");
      if(scanf(" %s",Rec_Name)){};
      temp->id = Rec_ID;
      strcpy(temp->name,Rec_Name);
    }

    if(Rec_ID == 0){
      free(temp);
      head = back;
      break;  
    }
    else{
      temp->next = (NodePtr)malloc(sizeof(NODE));
      front = temp->next;
      temp->next = back;
      back = temp;
      temp = front;
    }
  }
  free(Rec_Name);

  printf("------------------------------\n"); 
  for(temp=head; temp!=NULL ;temp=front){
      front = temp->next;
      printf("\nID : %i\nName : %s\n",temp->id,temp->name);
      free(temp);
  }
  printf("\n------------------------------\n");
}