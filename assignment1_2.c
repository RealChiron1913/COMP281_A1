#include <stdio.h>


int main() {
    //input string
    char input;
    //counters
    int number_of_english_characters  = 0, number_of_digits  = 0, number_of_spaces = 0, umber_of_other_characters = 0;
    while ((scanf("%c", &input)) != EOF){//read until EOF
        if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z'){
            number_of_english_characters ++;//English characters
        } else if (input >= '0' && input <= '9'){
            number_of_digits ++;//digits
        } else if (input == ' '){
            number_of_spaces ++;//spaces
        } else {
            umber_of_other_characters ++;//other characters
        }
    }
    //output
    printf("%d %d %d %d", number_of_english_characters , number_of_digits , number_of_spaces, umber_of_other_characters);
    return 0;
}