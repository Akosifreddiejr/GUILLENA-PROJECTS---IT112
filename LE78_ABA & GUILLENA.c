#include <stdio.h>

int main (){
    
    int Element;
     
    while(1) {
    printf("Enter number of elements in the array: ");
    scanf("%d", &Element);
    
    
    if(Element <=0){
        printf("Invalid number! Enter again:\n\n");
    }else {
        break;
    }
  }
     
    int array[Element];
    printf("Enter %d elements: \n", Element);
    for(int i = 0; i < Element; i++){
        scanf("%d", &array[i]);
 }

    int largest = array[0];
    for(int i = 1; i < Element; i++){
    if(array[i] > largest){
        largest = array[i];
    }
 } 
    printf("The largest element in the array is: %d\n", largest);
    getchar();

    char string[250];
    int VowelCount = 0;
   

    printf("Enter a word/sentence: ");
    getchar();
    fgets(string, sizeof(string), stdin);

    for( int j = 0; string[j] != '\0'; j++) {

    char vowels = string[j];
    if(vowels == 'a' || vowels == 'e' || vowels == 'i' || vowels == 'o' || vowels == 'u' || vowels == 'A' || vowels == 'E' || vowels == 'I' || vowels == 'O' || vowels == 'U'){
    VowelCount ++;
    }
 }
    printf("The number of vowels in the string: %d", VowelCount);

    return 0;
}
