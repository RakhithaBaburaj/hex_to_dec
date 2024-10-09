/*1.Title:Hexadecimal to Decimal
2.Question:Convert hexadecimal number to decimal
3.Name:Rakhitha Baburaj
4.9/10/24
*/


#include <stdio.h>
int main() 
{
    char hexDigits[17] = "0123456789ABCDEF"; 
    int decimal = 0, base = 1, i = 0, length;
    char hex[20];  
    char ch;
    printf("Enter a hexadecimal number: ");
    
    while (1) {
        scanf("%c", &ch);
        if (ch == '\n') {
            break;
        }
        hex[i] = ch;
        i++;
    }
    length = i;
    for (i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }  
        base =base* 16;
    } 
    printf("Decimal value: %d\n", decimal);
    return 0;
}
