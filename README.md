# Coins Problem 

## Problem Statement

Given 3 coins each coin has 2 colored faces, the colors for each is (WHITE, WHITE), (WHITE, BLACK), and (BLACK, BLACK). after sampling a coin, knowig the color of one of the faces is white, what is the probability that the other face is white?

## Mathmitical Solution

$P(White) = 0.5$

$P(Black) = 0.5$

$P(White|White)\ =\ \frac{P(White \cap White)}{P(White)} =\ \frac{0.33333}{0.5} = 0.66666$

## Simulation Solution

```bash 
gcc main.c -o main
./main
```

## Results

```bash 
Samples: 9508482, White Draws: 4755587, All White: 3170232, P(W|W): 0.666633
```
