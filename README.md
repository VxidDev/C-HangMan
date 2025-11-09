# Hangman in C

A simple command-line Hangman game written in C.  
This is my first C project after learning the basics for just a few hours.  

## How to Play

1. Run the program in a terminal.
2. The program will randomly select a word from a list.
3. Guess the word **letter by letter**.
4. You have a limited number of attempts — if you run out, you lose.

## Features

- Random word selection from a list of 25 words.
- Input validation to accept only single lowercase letters.
- Tracks attempts and partially guessed words.
- Win/Lose detection.

## How to Run

Compile with `gcc`:

```bash
gcc main.c -o hangman
./hangman
```
## Notes

This project was created as a beginner exercise in C.

Feedback and suggestions are welcome!
