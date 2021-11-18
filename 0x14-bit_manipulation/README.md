#Genral

###BINARY MATH INTRODUCTION

The bitwise operators utilize something called Binary Math. If you already know binary math, skip ahead. Binary math is a BASE 2 numbering system, where as our normal everyday numbering system is a BASE 10 system. Think back to elementary school where we learned numbers this way...

Think of the number 4768. That's a normal everyday decimal number.

If you write that out full its 4 THOUSAND, 7 HUNDRED, 6 TENS, 8 ONES
or (4 * 103) + (7 * 102) + (6 * 101) + (8 * 100) = 4768

The BASE 2 system has the same concept however it goes by 2's instead of 10s. So you can only have a value of 0 or 1. Lets look at a binary number
00101101 = (0 * 27) + (0 * 26) + (1 * 25) + (0 * 24) + (1 * 23) + (1 * 22) + (0 * 21) + (1 * 20) = 32 + 8 + 4 + 1 = 45

Wow that's a lot of math. Lets break it down piece by piece starting with the first parentheses.

(0 * 27) which means 0 TIMES 2 to the POWER of 7 or 0 * ( 2 * 2 * 2 * 2 * 2 * 2 * 2) which basically comes out to 0 * 128 which equals 0 (0 times anything is 0)

So going down our binary number we can see it calculates like this:

0 - (0 * 128) = 0<br>
0 - (0 * 64) = 0<br>
1 - (1 * 32) = 32<br>
0 - (0 * 16) = 0<br>
1 - (1 * 8) = 8<br>
1 - (1 * 4) = 4<br>
0 - (0 * 2) = 0<br>
1 - (1 * 1) = 1<br>

So add those all up together 32 + 8 + 4 + 1 and you get 45

What is a bit? A bit is a representation of 1 or 0. Basically OFF and ON. Why do computers use such simple math? Well computers process with electric current so if the current is over a certain level the computer considers that to mean ON or 1 and if it is under that level it is set to OFF or 0.

What is a byte? A byte is made up of 8 bits and the highest value of a byte is 255, which would mean every bit is set.
