// #include<stdio.h>
// #define clrscr()100
// int main(){
//     clrscr();
//     printf("%d\n",clrscr());
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     printf("%p",main);
// }
// #include<stdio.h>
// int main(){
//     clrscr();
// }
// clrscr();
// #include<stdio.h>
// int main(){
//     int i=400,j=300;
//     printf("%d..%d");
// }
// #include<stdio.h>
// int main(){
//     int i;
//     printf("%d",scanf("%d",&i));
// }
// #include<stdio.h>
// int main(){
//     int number;
//     printf("please enter your number ");
//     scanf("%d",&number);
//     if(number<0){
//         printf("the number your enter is negative");
    
//     }
//     printf("the number you enter is false");
//     return 0;
// }
//  #include<stdio.h>
//  int main(){
//     int a , b, c, d;
//     float ratio;
//     printf("please enter the number");
//     scanf("%d,%d,%d,%d",&a,&b,&c,&d);
//     if(c-d!=0){
//         ratio = (float)(a+b)/(float)(c-d);
//         printf("RATIO = %f", ratio);
//     }
//     return 0;
//  }
// #include<stdio.h>
// int main(){
//     int number;
//     printf("please enter a number ");
//     scanf("%d", &number);
//     if(number%2==0){
//         printf(" %d the number you enter is even \n");

//     }
//     else 
//         printf("%d the number you enter is odd\n");
    
    
        
    
    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     float a , b, c;
//     printf("enter the three value ");
//     scanf("%f %f %f",&a,&b,&c);
//     printf("the largest value is ");
//     if(a>b)
//     {
//         if(a>c)
//         printf("%f\n",a);
//     else
//     printf("%f\n",c);
//     }
//     else
    
//        {
//         if(c>b)
//          printf("%f\n",c);

//         else
//         printf("%f",b);
//        }
    
// }
// #include<stdio.h>
// int main(){
//     int number1 ,number2;
//     printf("please enter two integer number");
//     scanf("%d %d",&number1 , &number2);
//     if(number1 == number2){
//         printf("Result: %d=%d", number1,number2);
//     }
//     else if (number1>number2){
//         printf("Result: %d > %d",number1,number2);
//     }
//     else
//     printf("Result: %d<%d",number1,number2);
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("please enter your marks");
//     scanf("%d",&marks);
//     if(marks>79){
//         printf("%d your grade is :honours",marks);
//     }
//     else if(marks>59){
//         printf("%d your grade is : first division",marks);
//     }
//     else if(marks>49){
//         printf("%d your mark is: second division",marks);
//     }
//     else if(marks>39){
//         printf("%d your grade is : third division ",marks);

//     }
//     else 
//     printf("%d your grade is :fail");

// return 0;
// }
// #include<stdio.h>
// int main(){
//     int number, factorial ;
//     printf("please enter your integer number");
//     scanf("%d",&number);
//     factorial = 1;
//     while(number>0){
//         factorial = factorial*number;
//     }
//     printf("Factorial = %||d",factorial);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     float ratio;
//     printf("enter the integer number");
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     if(c-d!=0){
//         ratio=(float)(a+b)/(float)(c-d);
//         printf("ratio=%f",ratio);
//     }
    
// }
// #include<stdio.h>
// int main(){
//     int count,i;
//     float weight,height;
//     count=0;
//     printf("enter the weight and heighrt of 10 boys");
//     for(i=1;i<=10;i++){
//         scanf("%f %f",&weight ,&height);
//         if(weight<50 && height<170)
//         count=count +1;

//     }
//     printf("number of boys weight<50");
//     printf("height>170");
    
// }
// #include<stdio.h>
// int main(){
//     float A,B,C;
//     printf("enter the three number");
//     scanf("%f %f %f",&A,&B,&C);
//     printf("the largest number is");
//     if(A>B){
//         if(A>C)
//         printf("%f",A);
//     else
//     printf("%f",C);
//     }
//     else{
//         if(C>B){
//             printf("%f",C);
//             else
//             ("%f",B);
//         }
//     }
// }
// #include<stdio.h>
// int main(){
//     int count,n;
//     float x,y;
//     printf("enter the values of x:");
//     scanf("%f %d",&x,&n);
//     y= 1.00;
//     count= 1;
//     while(count<=n)
//     {
//         y=y*x;
//         count++;

//     }
//     printf()
// }
// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1;i<=5;i=i+1){
//         printf("my world");
//     }
//     return 0;

// }
// #define first 360
// #define second 240
// #include<stdio.h>
// int main(){
//     int n,m,i,j,roll_number,total,marks;
//     printf("enetr number of students and subjects\n");
//     scanf("%d %d",&n,&m);
//     printf("\n");
//     for(i=1;i<n;++i){
//         printf("enter the roll number ");
//         scanf("%d", &roll_number);
//         total=0;
//         printf("\nEnter marks of %d subjects for ROLL NO %d\n",n,m,roll_number);
//         for(j=1; j<=m;j++)
//         {
//             scanf("%d",&marks);
//             total = total + marks;
//         }
//         printf("total marks =%d",total);
//         if(total>=first)
//         printf("(first division)\n\n");
//     else if(total>=second)
//     printf("(second division)\n\n");
//    else
//    printf("(fail)\n\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<conio.h>
// void  main(){
//     int num,i,y,x=40;
//     clrscr();
//     printf("\nEnter a number for\ngenerating the pyramid:\n:");
//     scanf("%d",&num);
//     for(y=0; y<=num;y++)
//     {
//         gotoxy(x, y+1);
//         for(i=0-y;i<=y;i++)
//         printf("%3d",abs(i));
//     x=x-3;
//     }
//     getch ();
// }
// #include<stdio.h>
// int main()
// {
//     int m;
//     float x,sum,average;
//     printf("this program computes the average of a set of numbers\n");
//     printf("enter the value one after another\n");
//     sum = 0;
//     for(m=1;m<=1000;++m)
//     {
//         scanf("%f",&x);
//         if(x<0)
//         break;
//     sum+=x;

//     }
//     average = sum/(float)(m-1);
//     printf("\n");
//     printf("number of values = %d\n",m-1);
//     printf("sum =%f\n",sum);
//     printf("average =%f\n",average);
// }
// #define loop 100
// #define acuracy 0.00001
// int main()
// {
//     int n;
//     float x,term,sum;
//     printf("input the value of x:");
//     scanf("%f",&x);
//     sum=0;
//     for(term=1,n=1,n<=loop,++n){
//         sum+= term;
//         if(term<=acuracy)
//         goto output;
//     term*= x;

//     }
//     printf("\nfinal value N is not sufficient\n ");
//     printf("to achieve desired acuracy\n");
//     goto end;
// }
#define  N 5
// #include<stdio.h>
// int main(){
//     int value[N];
//     int i,j,n,x;
//     for(n=0;n<N;++n)
//     {
//         printf("enter employes in group = %d:",n+1);
//         scanf("%d",&x);
//         value[n]=x;
//         printf("%d\n",value[n]);

//     }
//     printf("\n");
//     printf("|\n");
//     for(n=0;n<N;++n)
//     {
//         for(i=1;i<=3;i++)
//         {
//             if(i==2)
//             printf("group-%d"|,n+1);
//             else
//              printf("|");
//          for(j=1;j<=value[n];++j)
//          printf("*");
//      if(i==2)
//      printf("(%d)\n",value[n]);
//  else 
//  printf("\n");
//          }
//          printf("|\n");
//      }
//  }
// #include <stdio.h>
// int main() {
// 	int x, i;
// 	printf("Input an integer: ");
// 	scanf("%d", &x);
	
// 	for(i = 1; i <= 100; i++)
// 	{
// 		if((i%x) == 5) {
// 			printf("%d\n", i);
// 		}
// 	}
// 	return 0;
// }
#include <stdio.h>

// Function to print the game board
void printBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if a player has won
int checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1; // Horizontal win
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1; // Vertical win
    }

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1; // Diagonal win

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1; // Diagonal win

    return 0; // No win
}

// Function to check if the board is full (draw)
int checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0; // The board is not full
        }
    }
    return 1; // The board is full
}

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, col;
    char currentPlayer = 'X';

    do {
        
        printBoard(board);

        
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        
        board[row][col] = currentPlayer;

        
        if (checkWin(board, currentPlayer)) {
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        
        if (checkDraw(board)) {
            printf("It's a draw!\n");
            break;
        }
		if()

        
        
