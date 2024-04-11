/************************************************************************************************
 *                                      DATA TYPES
 * 
 * In C programming, data types define the type of data that a variable can hold. These types
 * include fundamental types like integers, floating-point numbers, characters, and void, as well
 * as derived types like arrays, pointers, structures, and unions. Each data type has a specific
 * range of values it can represent and occupies a certain amount of memory. Choosing the
 * appropriate data type is crucial for efficient memory usage and ensuring compatibility
 * with the operations performed on the data. Understanding data types is fundamental to
 * writing robust and efficient C programs.
*/



//------------------------------------------------------------------------------------------------

int i; // integer data type

/****************************
 * The integer data type represents whole numbers, which can be positive, negative, or zero.
 * Integers can be further classified into signed and unsigned types, which determine whether
 * the number can be negative or not. The size of an integer data type depends on the
 * architecture of the system and the compiler used. Common integer data types include:
 * 
 * - short int: Typically 2 bytes in size, used for small integers.
 * - int: Varies in size, but usually 2 or 4 bytes, used for general-purpose integers.
 * - long int: At least 4 bytes in size, used for larger integers.
 * - long long int: At least 8 bytes in size, used for very large integers.
 * 
 * Additionally, integer data types can be modified using qualifiers like 'signed' and 'unsigned',
 * which affect the range of values they can represent. For example:
 * 
 * - signed int: Represents both positive and negative numbers.
 * - unsigned int: Represents only non-negative numbers (zero and positive).
 * 
 * It's important to choose the appropriate integer data type based on the range of values
 * you expect your variable to hold, as using a larger data type than necessary can waste memory,
 * while using a smaller data type can lead to overflow or loss of precision.
 */

//------------------------------------------------------------------------------------------------

float f; // floating-point data type

/*************************************
 * The floating-point data type represents real numbers with a fractional part. Floating-point
 * numbers can be positive, negative, or zero, and can have decimal points or exponents. The
 * size of a floating-point data type depends on the architecture of the system and the compiler
 * used. Common floating-point data types include:
 * 
 * - float: Typically 4 bytes in size, used for single-precision floating-point numbers.
 * - double: Typically 8 bytes in size, used for double-precision floating-point numbers.
 * - long double: Size varies, used for extended precision floating-point numbers.
 * 
 * Floating-point numbers have limited precision, which can lead to rounding errors in
 * calculations. It's important to be aware of these limitations when working with
 * floating-point data types, especially in critical applications where precision is crucial.
 */

//------------------------------------------------------------------------------------------------

char c; // character data type

/*************************************
 * The character data type represents a single character, such as a letter, digit, or symbol.
 * Characters are stored as integer values in memory, typically using the ASCII or Unicode
 * encoding schemes. The size of a character data type is usually 1 byte, but this can vary
 * depending on the compiler and system architecture. Common character data types include:
 * 
 * - char: Typically 1 byte in size, used for storing characters.
 * - signed char: Same as char, but explicitly signed.
 * - unsigned char: Same as char, but explicitly unsigned.
 * 
 * Characters are enclosed in single quotes (' '), and special characters can be represented
 * using escape sequences, such as '\n' for newline or '\t' for tab. It's important to note that
 * characters are different from strings, which are sequences of characters terminated by a null
 * character ('\0').
 */

//------------------------------------------------------------------------------------------------

void *ptr; // void data type

/***********************************
 * The void data type represents an empty or unspecified type. It is commonly used to declare
 * pointers that can point to objects of any data type. For example, a void pointer can be used
 * to create a generic function that operates on different types of data without knowing the
 * specific type in advance. However, void pointers cannot be dereferenced directly, as the
 * compiler does not know the size or type of the data they point to. To access the data, a void
 * pointer must be cast to a specific data type before dereferencing it.
 * 
 * Usage of void pointers requires caution, as improper use can lead to type mismatches
 * and undefined behavior. They are often used in low-level programming, such as in
 * memory allocation functions like malloc(), where a generic pointer is needed to
 * accommodate any data type.
*/

//------------------------------------------------------------------------------------------------

int *iptr; // integer pointer data type

/***********************************
 * The integer pointer data type represents a pointer that points to an integer value. It can be
 * used to store the memory address of an integer variable. Integer pointers allow for direct
 * access to the value stored at the memory location they point to, by dereferencing them using
 * the '*' operator. For example:
 * 
 * int x = 10;
 * int *iptr = &x; // iptr now holds the memory address of x
 * printf("%d", *iptr); // prints the value stored in x, which is 10
*/

//------------------------------------------------------------------------------------------------

char *cptr; // character pointer data type

/***********************************
 * The character pointer data type represents a pointer that points to a character value. It can
 * be used to store the memory address of a character variable. Character pointers allow for
 * direct access to the value stored at the memory location they point to, by dereferencing them
 * using the '*' operator. For example:
 * 
 * char c = 'A';
 * char *cptr = &c; // cptr now holds the memory address of c
 * printf("%c", *cptr); // prints the value stored in c, which is 'A'
 * 
 * Character pointers are commonly used in string manipulation, where they point to the first
 * character of a string terminated by a null character ('\0').
*/

//------------------------------------------------------------------------------------------------

struct person {
    char letter;
    int age;
    float height;
}; // structure data type

/******************************************
 * The structure data type represents a collection of related data items grouped together under
 * a single name. Each data item in a structure is called a member or field, and can have a
 * different data type. Structures allow you to create custom data types that can store multiple
 * values of different types, making it easier to organize and manipulate complex data.
 * 
 * In the example above, we define a structure named 'person' that contains three members:
 * 
 * - 'letter': a character representing the first letter of the person's name.
 * - 'age': an integer representing the person's age.
 * - 'height': a floating-point number representing the person's height in meters.
 * 
 * Structures can be used to represent real-world entities, such as employees, students, or
 * geometric shapes, by combining various data types into a single unit. Accessing structure
 * members is done using the dot (.) operator, for example:
 * 
 * struct person p1;
 * p1.letter = 'A';
 * p1.age = 30;
 * p1.height = 1.75;
 * 
 * Structures can also be nested within other structures, allowing for the creation of
 * hierarchical data structures to represent more complex relationships.
*/

//------------------------------------------------------------------------------------------------

union data {
    int i;
    float f;
    char c;
}; // union data type

/****************************************************
 * The union data type represents a special kind of structure where all members share the same
 * memory location. This means that a union can only store one value at a time, regardless of
 * the number of members it contains. Unions are useful when you need to store different types of
 * data in the same memory location, but only one type is used at a time.
 * 
 * In the example above, we define a union named 'data' that contains three members:
 * 
 * - 'i': an integer value.
 * - 'f': a floating-point value.
 * - 'c': a character value.
 * 
 * Since all members of a union share the same memory location, modifying one member can
 * affect the value of other members. Therefore, unions are commonly used in situations where
 * only one member needs to be accessed or modified at a time, such as in data serialization or
 * type punning.
 * 
 * Accessing union members is similar to accessing structure members, using the dot (.) operator:
 * 
 * union data d;
 * d.i = 10; // Sets the value of 'i'
 * printf("%d", d.i); // Prints the value of 'i'
 * 
 * It's important to use unions carefully, as accessing the wrong member can lead to undefined
 * behavior or unexpected results.
*/

