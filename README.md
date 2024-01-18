0x1B. C - Sorting algorithms & Big O
# Sorting Algorithms Project

This project implements various sorting algorithms in C. The goal is to gain a deep understanding of different sorting algorithms, their time complexities, and how to implement them.

## Table of Contents
- [Introduction](#introduction)
- [Project Requirements](#project-requirements)
- [File Structure](#file-structure)
- [How to Compile and Run](#how-to-compile-and-run)
- [Sorting Algorithms Implemented](#sorting-algorithms-implemented)
- [Learning Objectives](#learning-objectives)
- [Authors](#authors)

## Introduction

This project focuses on implementing and understanding sorting algorithms, including Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. Each algorithm is implemented in a separate C file.

## Project Requirements

- This project is meant to be done by teams of two students.
- The project must be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- All code files should follow the Betty style guide.
- Each sorting algorithm is implemented in its own C file and has a corresponding big O notation file.

## File Structure

- `0-bubble_sort.c`: Bubble Sort implementation.
- `1-insertion_sort_list.c`: Insertion Sort implementation for doubly linked lists.
- `2-selection_sort.c`: Selection Sort implementation.
- `3-quick_sort.c`: Quick Sort implementation.
- `sort.h`: Header file containing function prototypes.
- `print_array.c` and `print_list.c`: Functions to print arrays and doubly linked lists.

## How to Compile and Run

Compile each sorting algorithm individually. For example:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble_sort
./bubble_sort



Authors
Abayo Akinyi
Antony Chigodi
