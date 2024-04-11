/**************************************************
 *                        Cycles
 * 
 * In programming, cycles (often referred to as loops) are used to repeat a block of code
 * multiple times until a certain condition is met or for a specified number of iterations.
 * 
 * There are three main types of loops in C programming:
 * 
 * 1. 'for' loop: The 'for' loop is used to execute a block of code repeatedly until a
 *    specified condition is false. It consists of three parts: initialization, condition,
 *    and increment/decrement. The loop iterates as long as the condition remains true.
 * 
 * 2. 'while' loop: The 'while' loop is used to repeatedly execute a block of code as long
 *    as a specified condition is true. Unlike the 'for' loop, the initialization and
 *    increment/decrement are done outside the loop.
 * 
 * 3. 'do-while' loop: The 'do-while' loop is similar to the 'while' loop, but the condition
 *    is checked after the block of code is executed, meaning that the block of code is
 *    guaranteed to execute at least once.
 * 
 * Loops are fundamental in programming for performing repetitive tasks efficiently and
 * are widely used in various programming tasks, such as iterating through arrays, processing
 * input data, and implementing algorithms.
*/




for (int i = 0; i < 5; i++) {
    printf("Iteration %d\n", i);
}

/******************************************
 * The 'for' loop in this code snippet is used to execute a block of code repeatedly until
 * a specified condition is false. It consists of three parts:
 * 
 * 1. Initialization: int i = 0; - This part initializes a loop control variable 'i' and sets
 *    its initial value to 0.
 * 
 * 2. Condition: i < 5; - This part specifies the condition that is checked before each iteration
 *    of the loop. As long as this condition evaluates to true, the loop continues executing.
 * 
 * 3. Increment/Decrement: i++ - This part is executed after each iteration of the loop. It updates
 *    the loop control variable 'i', typically incrementing or decrementing its value to eventually
 *    make the condition false and terminate the loop.
 * 
 * Inside the loop, printf() function is used to print the current value of 'i', representing the
 * iteration number. This block of code will be executed five times because the condition 'i < 5'
 * will be true for the values of 'i' from 0 to 4.
 * 
 * The output of this code will be:
 * 
 * Iteration 0
 * Iteration 1
 * Iteration 2
 * Iteration 3
 * Iteration 4
 * 
 * After the fifth iteration, the condition 'i < 5' will become false, and the loop will terminate.
*/





while (i < 5) {
    printf("Iteration %d\n", i);
    i++;
}

/******************************************************
 * The 'while' loop in this code snippet is used to repeatedly execute a block of code as long as
 * a specified condition is true. The loop control variable 'i' is initialized outside the loop, and
 * its value is incremented inside the loop to eventually make the condition false and terminate the loop.
 * 
 * Inside the loop, the printf() function is used to print the current value of 'i', representing the
 * iteration number. After printing the value of 'i', it is incremented by 1 using the 'i++' statement.
 * This ensures that the loop control variable 'i' is updated with each iteration, preventing an infinite
 * loop and eventually making the condition 'i < 5' false when 'i' reaches or exceeds 5.
 * 
 * The output of this code will be similar to the 'for' loop example:
 * 
 * Iteration 0
 * Iteration 1
 * Iteration 2
 * Iteration 3
 * Iteration 4
 * 
 * After the fifth iteration, the condition 'i < 5' will become false, and the loop will terminate.
*/


do {
    printf("Iteration %d\n", i);
    i++;
} while (i < 5);

/************************************
 * The 'do-while' loop in this code snippet is similar to the 'while' loop, but with one key difference:
 * the condition is checked after the block of code is executed. This means that the block of code inside
 * the loop is guaranteed to execute at least once, even if the condition is initially false.
 * 
 * Inside the loop, the printf() function is used to print the current value of 'i', representing the
 * iteration number. After printing the value of 'i', it is incremented by 1 using the 'i++' statement.
 * This ensures that the loop control variable 'i' is updated with each iteration, eventually making
 * the condition 'i < 5' false when 'i' reaches or exceeds 5.
 * 
 * The output of this code will be similar to the previous examples:
 * 
 * Iteration 0
 * Iteration 1
 * Iteration 2
 * Iteration 3
 * Iteration 4
 * 
 * After the fifth iteration, the condition 'i < 5' will become false, and the loop will terminate.
*/
