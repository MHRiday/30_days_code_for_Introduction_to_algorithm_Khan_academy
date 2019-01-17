Binary search is a searching algorithm!Here we need a sorted array!
The pseodu code of binary search is:

1.Let min = 0 and max = n-1.
2.Compute guess as the average of max and min, rounded down (so that it is an integer).
3.if array[guess] equals target, then stop. You found it! Return guess.
4.If the guess was too low, that is, array[guess] < target, then set min = guess + 1.
5.Otherwise, the guess was too high. Set max = guess - 1.
6.Go back to step 2.

Pseudo code is taken from khan Academy!

Lets implement the code using C++.

If you have any question feel free to ask me!