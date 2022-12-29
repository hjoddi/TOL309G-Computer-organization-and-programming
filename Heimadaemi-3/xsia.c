
/***************************************************************
  Beinagrind að lausn á dæmi 4 í heimadæmum 3 í Tölvutækni
  og forritun, haust 2022
  
  Sjá lýsingu á dæmablaði
****************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_LEN 200

int main(int argc, char **argv) {
    char innstr[MAX_LEN];

    while (scanf("%s", innstr) != EOF) {
        if (strstr(innstr, "x") != NULL) {
            int l = strlen(innstr);
            for (int i = 0; i < l; i++) {
                printf("%s", "x");
            }
            printf("\n");
        }

        else if(strstr(innstr, "X") != NULL) {
            int l = strlen(innstr);
            for (int i = 0; i < l; i++) {
                printf("%s", "x");
            }
            printf("\n");
        }

        else {
            printf("%s\n", innstr);
        }
    }   
    
    
    return 0;
}
