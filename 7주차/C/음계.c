#include <stdio.h>

int arr[9];
int temp = 0;
int chePlus = 0, cheMinus = 0;

int main()
{
   for (int i = 0; i < 8; i++)
      scanf("%d", &arr[i]);

   for (int j = 0; j < 7; j++)
   {
      if (arr[j] < arr[j + 1])
         chePlus++;
      else
         cheMinus++;
   }

   // �� 7�� ��
   if (chePlus == 7)
      printf("ascending\n");
   else if (cheMinus == 7)
      printf("descending\n");
   else
      printf("mixed\n");

   return 0;
}
