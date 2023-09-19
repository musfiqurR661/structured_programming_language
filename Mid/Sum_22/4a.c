(a) Show the manual tracing (show the values of all the variables and array elements in each 
step) for the following code segment.
 int F[6] = {0};
 int i, n;
 n = 3;
 for(i = 0; i<6 ; i++){
 F[i] = n+i;
 if(F[i]%2 == 0){
 F[i] *= 2;
 }
 }

 /*


1. Initialize the array `F` with all elements set to 0: `F = {0, 0, 0, 0, 0, 0}`
2. Initialize variables `i` and `n`: `i = 0`, `n = 3`

**Iteration 1 (i = 0):**
- `F[0] = n + i = 3 + 0 = 3`
- Since `F[0] % 2` is not equal to 0 (`3 % 2` is 1), no modification is made.

**Iteration 2 (i = 1):**
- `F[1] = n + i = 3 + 1 = 4`
- Since `F[1] % 2` is equal to 0 (`4 % 2` is 0), `F[1]` is doubled: `F[1] = 4 * 2 = 8`

**Iteration 3 (i = 2):**
- `F[2] = n + i = 3 + 2 = 5`
- Since `F[2] % 2` is not equal to 0 (`5 % 2` is 1), no modification is made.

**Iteration 4 (i = 3):**
- `F[3] = n + i = 3 + 3 = 6`
- Since `F[3] % 2` is equal to 0 (`6 % 2` is 0), `F[3]` is doubled: `F[3] = 6 * 2 = 12`

**Iteration 5 (i = 4):**
- `F[4] = n + i = 3 + 4 = 7`
- Since `F[4] % 2` is not equal to 0 (`7 % 2` is 1), no modification is made.

**Iteration 6 (i = 5):**
- `F[5] = n + i = 3 + 5 = 8`
- Since `F[5] % 2` is equal to 0 (`8 % 2` is 0), `F[5]` is doubled: `F[5] = 8 * 2 = 16`

After all iterations, the final array `F` is `{3, 8, 5, 12, 7, 16}`.
*/