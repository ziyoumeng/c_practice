#include <stdio.h>
/*
 * 回车后，用户输入阶段停止;
 * 可以输入多个字符，但getchar()一次只读一个。
 *
 * 猜想：getchar()的输入阶段，stdio会缓存用户输入直到碰到回车(注意回车也是一个字符),然后调用一次getchar()从stdio的缓存中读一个字符，读完缓存后，再调用getchar()又进入输入阶段.
 */
int main ()
{
   char c;

   printf("请输入字符："); 
   c = getchar();

   printf("输入的字符：");
   putchar(c);

   return(0);
}
