#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    int s = 0;
    int m = 0;
    int h = 0;
    int s1;
    int m1;
    int h1;
    scanf ("%d %d %d", &h1, &m1, &s1);

    while(1) {
            printf("Relogio do amor\n %dh %dm %ds", h, m, s);

        s++;
        if(s==59) {
            s=00;
            m++;
        }
        if(m==60) {
            m=00;
            h++;
        }
        if(h==24)  {
            h=00;
            s++;
        }
        if (h==h1, m==m1, s==s1)  {
            printf ("Acorda aeeeeeeee\n %dh %dm %ds",h1, m1, s1);
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main () {
    int s = 0;
    int m = 0;
    int h = 0;
    int s1;
    int m1;
    int h1;
    scanf ("%d %d %d", &h1, &m1, &s1);

    while(1) {
            printf("Relogio do amor\n %dh %dm %ds", h, m, s);

        s++;
        if(s==59) {
            s=00;
            m++;
        }
        if(m==60) {
            m=00;
            h++;
        }
        if(h==24)  {
            h=00;
            s++;
        }
        if (h==h1, m==m1, s==s1)  {
            printf ("Acorda aeeeeeeee\n %dh %dm %ds",h1, m1, s1);
            PlaySound("My Heart Will Go On (Titanic Theme) - Celine Dion.wav", NULL, SND_ASYNC);
        }

     Sleep(1000);
  }
  return 0;

}

        }

     Sleep(1000);
  }
  return 0;

}
