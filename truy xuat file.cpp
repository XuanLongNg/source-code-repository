#include <stdio.h>

int main ()
{
   FILE *fp;
   fp = freopen("baitapc.txt", "w+", stdout);
   printf("Dong text nay duoc ghi vao baitapc.txt\n");
   fclose(fp);
   
   return(0);
}
