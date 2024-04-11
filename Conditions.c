/********************************************
 *                   Conditions
 * 
 * Conditions are used to make decisions in a program. They are employed whenever the program 
 * needs to execute different blocks of code based on whether certain conditions are true or false. 
 * 
 * In C programming, there are typically three main types of conditional statements: 'if', 'else if', 
 * and 'else'. These statements allow the program to execute different blocks of code depending on 
 * the outcome of one or more conditions. Conditions are used extensively in various programming 
 * tasks, including input validation, error handling, and implementing different paths of execution 
 * based on user input or program state.
 * 
 * Conditions play a pivotal role in controlling the flow of execution in a program and are essential 
 * for implementing logic and making decisions.
*/



if (condition) {
    // code block to be executed if the condition is true
}

/********************************************************
 * The 'if' statement is used to execute a block of code if a specified condition is true.
 * 
 * It's a fundamental control structure in programming, allowing for conditional execution of code
 * based on the evaluation of a condition. The condition can be any expression that returns a
 * boolean value (true or false). If the condition evaluates to true, the code block enclosed
 * within the curly braces following the 'if' statement is executed. If the condition evaluates
 * to false, the code block is skipped.
 * 
 * Example:
 * 
 * int x = 10;
 * 
 * if (x > 5) {
 *     printf("x is greater than 5");
 * }
 * 
 * In this example, the message "x is greater than 5" is printed if the condition 'x > 5' is true.
 * If the condition is false, the message is not printed, and the program continues to the next
 * statement after the 'if' block.
*/


else {
    // code block to be executed if the condition is false
}
/***************************************************************
 * The 'else' statement is used to execute a block of code if the preceding 'if' statement evaluates
 * to false. It provides an alternative path of execution when the condition specified in the 'if'
 * statement is not met.
 * 
*/


else if (condition) {
    // code block to be executed if the condition is true
}

/*******************************************************
 * The 'else if' statement is used to execute a block of code if the preceding 'if' statement
 * evaluates to false and the condition specified in the 'else if' statement is true.
 * 
 * It allows for chaining multiple conditions together, providing alternative paths of execution
 * when the initial condition is not met. Each 'else if' statement is evaluated sequentially
 * after the preceding 'if' or 'else if' statements. If a condition evaluates to true, the
 * corresponding code block is executed, and subsequent 'else if' and 'else' blocks are skipped.
 * 
 * Example:
 * 
 * int x = 10;
 * 
 * if (x > 10) {
 *     printf("x is greater than 10");
 * } else if (x < 10) {
 *     printf("x is less than 10");
 * } else {
 *     printf("x is equal to 10");
 * }
 * 
 * In this example, the message "x is equal to 10" is printed if none of the preceding conditions
 * are true. If 'x' is greater than 10, the first block is executed. If 'x' is less than 10, the
 * second block is executed. The 'else' block is only executed if none of the preceding conditions
 * are true.
*/
