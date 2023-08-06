#include <stdio.h>

int main(){

  int arrayprint;
  int a = 10;
  int b = 20;
  int c = 30;
  int d = 40;
  int e = 10;
  int f = 20;
  int g = 30;
  int h = 40;
  int i = 10;
  int j = 20;
  int k = 30;
  int l = 40;
  int m = 10;
  int n = 20;
  int o = 30;
  int p = 40;
  int lowArray1[] = {a, b};
  int lowArray2[] = {c, d};
  int lowArray3[] = {e, f};
  int lowArray4[] = {g, h};
  int lowArray5[] = {i, j};
  int lowArray6[] = {k, l};
  int lowArray7[] = {m, n};
  int lowArray8[] = {o, p};
  int* array1[] = {lowArray1, lowArray2};
  int* array2[] = {lowArray3, lowArray4};
  int* array3[] = {lowArray5, lowArray6};
  int* array4[] = {lowArray7, lowArray8};
  int** topArray1[] = {array1, array2};
  int** topArray2[] = {array1, array2};
  int*** fourthDimensionalMaster[] = {topArray1, topArray2};
  int index;
  char mode;
  char answer;
  char onoff = 'Y';


while (onoff == 'Y'){
  printf("Edit mode or Print mode? (e / p):\n");
  scanf(" %c", &mode);
  switch(mode){

  case 'p':
  printf("Amount of matrix items to print? (Maximum 2):\n");
  scanf("%d", &arrayprint);
  printf("\nYou chose %d items.", arrayprint);
  
  for (index = 0; index < arrayprint; index++) {
    for (int jindex = 0; jindex < arrayprint; jindex++) {
        for (int kindex = 0; kindex < arrayprint; kindex++) {
          for (int lindex = 0; lindex < arrayprint; lindex++){
            printf("\n%d", fourthDimensionalMaster[index][jindex][kindex][lindex]);
          }
      //when dealing with square multidimensional arrays, the order of i and j don't matter.
    }
  }
  }
break;

case 'e':
    printf("\nWould you like to edit the arrays? (Y / n): \n", answer);
    scanf(" %c", &answer);
    while (answer == 'Y'){
        printf("Now editing.\n");

        printf("\nWhich array data point do you want to edit? (a-p): \n");
        scanf(" %c", &answer);
        switch(answer){
        case 'a':
            printf("\nWhat do you want to change it to? (currently %d)\n", a);
            scanf(" %d", &a);
            break;
        case 'b':
            printf("\nWhat do you want to change it to? (currently %d)\n", b);
            scanf(" %d", &b);
            break;
        case 'c':
            printf("\nWhat do you want to change it to? (currently %d)\n", c);
            scanf(" %d", &c);
            break;
        case 'd':
            printf("\nWhat do you want to change it to? (currently %d)\n", d);
            scanf(" %d", &d);
            break;
        // Need to add the rest of the cases here...
        default:
            printf("%c is not an existing data point (a, b, c...o, p)\n", answer);
            break;
        }



}
    break;


    default:
      printf("\nTerminating!");
}

    printf("\nContinue program? (Y / n):\n");
    scanf(" %c", &onoff);

}

}

