#include <stdio.h>
int main() {
 char data[20], stuffedData[30];
 int i, j, count;
 printf("Enter the data: ");
 scanf("%s", data);

 i = 0;
 j = 0;
 count = 0;
 
 while (data[i] != '\0') {
 stuffedData[j] = data[i];
 if (data[i] == '1') {
 count++;
 } else {
 count = 0;
 }
 if (count == 5) {
 stuffedData[++j] = '0';
 count = 0;
 }
 i++;
 j++;
 }
 stuffedData[j] = '\0';
 printf("Original Data: %s\n", data);
 printf("After Bit stuffing: %s\n", stuffedData);
 return 0;
}
