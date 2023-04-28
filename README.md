# Coins Problem 

## Problem Statement

Given 3 coins each coin has 2 colored faces, the colors for each is (WHITE, WHITE), (WHITE, BLACK), and (BLACK, BLACK). after sampling a coin, knowig the color of one of the faces is white, what is the probability that the other face is white?

## Mathmitical Solution
$$
\begin{align}
P(White) = P(Black)\ = \frac{1}{2} \\
P(White\ |\ White)\ = \frac{P(White \cap White)}{P(White)} = {2 \over 3}
\end{align}
$$

## Simulation Solution

```sh 
make run
```

## Results

```sh 
Samples: 9508482, White Draws: 4755587, All White: 3170232, P(W|W): 0.666633
```
