# push_swap

![mark](https://github.com/rubenoid/push_swap/blob/main/push_swap_mark.png?raw=true)

(80% to pass, 18% is bonus points)


The Push_swap project is a very simple and highly effective algorithm project: data will
need to be sorted. You have at your disposal a set of int values, 2 stacks and a set of
instructions to manipulate both stacks.

Project consists of two programs:
- The first, named `checker` which takes integer arguments and reads instructions on
the standard output. Once read, checker executes them and displays OK if integers
are sorted. Otherwise, it will display KO.
- The second one called `push_swap` which calculates and displays on the standard
output the smallest program using Push_swap instruction language that sorts integer arguments received.

## Allowed functions
`write`, `read`, `malloc`, `free`, `exit`

## Game rules
- The game is composed of 2 stacks named `a` and `b`.
- To start with:
  - `a` contains a random number of either positive or negative numbers without any duplicates
  - `b` is empty
- The goal is to sort in ascending order numbers into stack `a`.
  - To do this you have the following operations at your disposal:
  - `sa` : swap `a` - swap the first 2 elements at the top of stack `a`. Do nothing if there
is only one or no elements).
  - `sb` : swap `b` - swap the first 2 elements at the top of stack `b`. Do nothing if there
is only one or no elements).
  - `ss` : `sa` and `sb` at the same time.
  - `pa` : push `a` - take the first element at the top of `b` and put it at the top of `a`. Do
nothing if `b` is empty.
  - `pb` : push `b` - take the first element at the top of `a` and put it at the top of `b`. Do
nothing if `a` is empty.
  - `ra` : rotate `a` - shift up all elements of stack `a` by 1. The first element becomes
the last one.
  - `rb` : rotate `b` - shift up all elements of stack `b` by 1. The first element becomes
the last one.
  - `rr` : `ra` and `rb` at the same time.
  - `rra` : reverse rotate `a` - shift down all elements of stack `a` by 1. The last element
becomes the first one.
  - `rrb` : reverse rotate `b` - shift down all elements of stack `b` by 1. The last element
becomes the first one.
  - `rrr` : `rra` and `rrb` at the same time.

You can read more about it in the [subject](https://github.com/rubenoid/push_swap/blob/main/push_swap.pdf).
