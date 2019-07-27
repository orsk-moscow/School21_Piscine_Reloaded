# School21_Piscine_Reloaded

An essential set of exercises after C_Piscine.

List of functons with description:
Exercise 06 : ft_print_alphabet
    Function that displays the alphabet in lowercase, on a single line, by
    ascending order, starting from the letter ’a’.
    Here’s how it should be prototyped :
    void ft_print_alphabet(void);

Exercise 07 : ft_print_numbers
    Function that displays all digits, on a single line, by ascending order.
    Here’s how it should be prototyped :
    void ft_print_numbers(void);

Exercise 08 : ft_is_negative
    Function that displays ’N’ or ’P’ depending on the integer’s sign entered
    as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.
    Here’s how it should be prototyped :
    void ft_is_negative(int n);
    
Exercise 09 : ft_ft
    Function that takes a pointer to int as a parameter, and sets the value "42"
    to that int.
    Here’s how it should be prototyped :
    void ft_ft(int *nbr);
    
Exercise 10 : ft_swap
    Function that swaps the value of two integers whose addresses are entered
    as parameters.
    Here’s how it should be prototyped :
    void ft_swap(int *a, int *b);
    
Exercise 11 : ft_div_mod
    Function ft_div_mod prototyped like this :
    void ft_div_mod(int a, int b, int *div, int *mod);
    This function divides parameters a by b and stores the result in the int pointed by
    div. It also stores the remainder of the division of a by b in the int pointed by mod.
  
Exercise 12 : ft_iterative_factorial
    Iterated function that returns a number. This number is the result of a
    factorial operation based on the number given as a parameter.
    If there’s an error, the function return 0.
    Here’s how it should be prototyped :
    int ft_iterative_factorial(int nb);
    Function return its result in less than two seconds.

Exercise 13 : ft_recursive_factorial
    Recursive function that returns the factorial of the number given as a
    parameter.
    If there’s an error, the function return 0.
    Here’s how it should be prototyped :
    int ft_recursive_factorial(int nb);
    
Exercise 14 : ft_sqrt
    Function that returns the square root of a number (if it exists), or 0 if the
    square root is an irrational number.
    Here’s how it should be prototyped :
    int ft_sqrt(int nb);
    Function return its result in less than two seconds.
    
Exercise 15 : ft_putstr
    Function that displays a string of characters on the standard output.
    Here’s how it should be prototyped :
    void ft_putstr(char *str);
    
Exercise 16 : ft_strlen
    Reproduction of the function strlen.
    Here’s how it should be prototyped :
    int ft_strlen(char *str);
    
Exercise 17 : ft_strcmp
    Reproduction of the function strcmp.
    Here’s how it should be prototyped :
    int ft_strcmp(char *s1, char *s2);
    
Exercise 18 : ft_print_params
    Create a program that displays its given arguments.
    
Exercise 19 : ft_sort_params
    Program that displays its given arguments sorted by ascii order, except for argv[0].
    All arguments have their own line.
    
Exercise 20 : ft_strdup
    Reproduction the function strdup.
    Here’s how it should be prototyped :
    char *ft_strdup(char *src);
    
Exercise 21 : ft_range
    Function ft_range returns an array of ints. This int array should
    contain all values between min and max. Min included - max excluded.
    Here’s how it should be prototyped :
    int *ft_range(int min, int max);
    If min´value is greater or equal to max’s value, a null pointer should be returned.
    
Exercise 22 : ft_abs.h
    Macro ABS which replaces its argument by it absolute value :
    #define ABS(Value)
    
Exercise 23 : ft_point.h
    File ft_point.h that compile the following main :
    
    #include "ft_point.h"
    void set_point(t_point *point)
    {
        point->x = 42;
        point->y = 21;
    }
    
    int main(void)
    {
        t_point point;
        set_point(&point);
        return (0);
    }
    
Exercise 24 : Makefile
    Create the Makefile that compile your libft.a.
    The Makefile get its source files from the "srcs" directory.
    The Makefile get its header files from the "includes" directory.
    The lib at the root of the exercise.
    The Makefile also implement the following rules: clean, fclean and re as
    well as all.
    fclean does the equivalent of a make clean and also erases the binary created
    during the make. re does the equivalent of a make fclean followed by a make.
    Only the following 5 mandatory functions of your lib be handled : (ft_putchar,
    ft_putstr, ft_strcmp, ft_strlen and ft_swap).
    
Exercise 25 : ft_foreach
    Function ft_foreach which, for a given ints array, applies a function on
    all elements of the array. This function apply following the array’s order.
    Here’s how the function should be prototyped :
    void ft_foreach(int *tab, int length, void(*f)(int));
    For example, the function ft_foreach could be called as follows in order to display
    all ints of the array :
    ft_foreach(tab, 1337, &ft_putnbr);  

Exercise 26 : ft_count_if
    Function ft_count_if which will return the number of elements of the
    array that return 1, passed to the function f.
    Here’s how the function should be prototyped :
    int ft_count_if(char **tab, int(*f)(char*));
    The array will be delimited by 0.
    
Exercise 27 : display_file
    Program ft_display_file displays, on the standard output,
    only the content of the file given as argument.
    The submission directory have a Makefile with the following rules : all,
    clean, fclean. The binary called ft_display_file.
    The malloc function is forbidden. You can only do this exercise by declaring a
    fixed-sized array.
    Only valid arguments hadled.
    Error messages displayed on their reserved output.
