#include <stdio.h>
#include <ctype.h>

int main() {
    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
    char ch;

    printf("Enter a stream of characters. Enter -1 to end input.\n");

    while (1) {
        printf("Enter a character: ");
        scanf("%c", &ch);
        
        // Check if character is a vowel
        if (ch == 'a')
            aCount++;
        else if (ch == 'e')
            eCount++;
        else if (ch == 'i')
            iCount++;
        else if (ch == 'o')
            oCount++;
        else if (ch == 'u')
            uCount++;
        else if(ch == '1')
            break;

    
    }

    printf("A- %d times\n", aCount);
    printf("E- %d times\n", eCount);
    printf("I- %d times\n", iCount);
    printf("O- %d times\n", oCount);
    printf("U- %d times\n", uCount);

    return 0;
}