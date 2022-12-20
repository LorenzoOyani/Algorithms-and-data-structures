#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/**
 * CS50 problem set2
 * problem set 2: readability... 

*/

    bool is_alpha_num(char c);
    bool is_space(char c);
    bool is_end(char c);

int main(void)
{
    int coleman_liau_index_formula(char* text);
    void print_grade(int grade);

    int grade;
    char text;

    printf("Enter text:   ");
    grade= coleman_liau_index_formula(text);
    print_grade(grade);
    
}

int coleman_liau_index_formula(char* text)
{

    int formula(letters, words, sentences);
    int i =0, letters = 0, words =0, sentences =0;
    bool is_alpha_num(char c);
    bool is_space(char c);
    bool is_end(char c);

    bool is_word = true;

    while(text[i])
    {
        char characters = text[i];
        if(is_alpha_num(characters)){
            is_word = true;
            letters++;
        } else if (characters = '-' && is_word ){
            is_word = true;
        } else if((is_space(characters) || (characters == ',')) && is_word){
            words ++;
            is_word = false;

        } else if (is_end(characters) && is_word){
            words++;
            is_word = false;
            sentences++;
        }
        i++;
    }

    return formula(letters, words, sentences);


}

bool is_alpha_num(char c)
{
    return  ((c >= 'A') && (c <= 'Z')) ? true:
            ((c >='a') && (c <='z')) ? true:
            ((c >= '0') && (c <= '9')) ? true : false;
}

bool is_space(char c)
{
    return c == ' ' ? true: false;
}

bool is_end(char c)
{
    return  c == '.' ? true:
            c == '!' ? true:
            c == '?' ? true : false;
}

int formula( letters, words, sentences)
{
    float L, S;

    L = (float) letters / words * 100;

    S = (float) sentences / words * 100;

    return (int) round(0.0588 * L - 0.296 * S - 15.8);
}