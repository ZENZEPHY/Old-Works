#include <stdio.h>
#include <stdlib.h>

int arr[] = {50, 20, 40, 10, 60, 0};
#define MAX_SIZE 6
int i, j, temp, flag;



void bubble()
{
   for (i = 0; i < 6; i++)
   {
      for (j = 0; j < 6 - i - 1; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            flag = 1;
         }
      }
      if (flag == 0)
      {
         printf("All Members are sorted.");
         break;
      }
   }
   printf("\nSORTED ARRAY IS: ");
   for (i = 0; i < 6; i++)
   {
      printf("%d\t", arr[i]);
   }
}

void selection()
{
   int min;
   for (i = 0; i < MAX_SIZE - 1; i++)
   {
      min = i;
      for (j = i + 1; j < MAX_SIZE; j++)
      {
         if (arr[i] > arr[j])
         {
            min = j;
         }
      }
      if (min != i)
      {
         temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
      }
   }
   printf("\nSORTED ARRAY IS: ");
   for (i = 0; i < 6; i++)
   {
      printf("%d\t", arr[i]);
   }
}

void insertion()
{
   int i, j, item;

   for (i = 1; i < MAX_SIZE; i++)
   {
      item = arr[i];
      j = i - 1;
      /* Move elements that are greater than the key to one position ahead of their current position */
      while (j >= 0 && arr[j] > item)
      {
         arr[j + 1] = arr[j];
         j--;
      }
      arr[j + 1] = item;
   }
   // printing sorted array using loop
   printf("\nSORTED ARRAY IS: ");
   for (i = 0; i < 6; i++)
   {
      printf("%d\t", arr[i]);
   }
}


void quicksort(int l,int r,int arr[20])
{
      if(l<r)
      {
         int q = partition(l,r,arr);
         quicksort(l,q-1,arr);
         quicksort(q,r,arr);   
      }
   
}
   void main()
   {
      int ch;
      do
      {
         printf("\nENTER YOUR CHOICE:\n1)BUBBLE \n2)Selection \n3)Insertion 4)\n");
         scanf("%d", &ch);
         switch (ch)
         {
         case 1:

            bubble();
            break;

         case 2:

            selection();
            break;

         case 3:

            insertion();
            break;

         case 4:

            quicksort(0,6,arr);
            break;

         case 5:

            // display();
           // break;

         case 6:

            exit(0);
            break;

         default:
            printf("No Options Found.\n");
         }
      } while (ch != 7);
   }