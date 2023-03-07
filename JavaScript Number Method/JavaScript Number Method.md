• Introduction:

The Number constructor contains constants and methods for working with numbers. Values of other types can be converted to numbers using the Number() function.

A number literal like 37 in JavaScript code is a floating-point value, not an integer. There is no separate integer type in common everyday use. (JavaScript also has a BigInt type, but it's not designed to replace Number for everyday uses. 37 is still a number, not a BigInt).

• Methods Of Numbers:

1. The toString() Method : The toString() method returns a number as a string.All number methods can be used on any type of numbers (literals, variables, or expressions).
         Example : let x = 123;
                 x.toString();
                (123).toString();
               (100 + 23).toString();

2. The toExponential() Method : toExponential() returns a string, with a number rounded and written using exponential notation.A parameter defines the number of characters behind the decimal point.
          Example : let x = 9.656;
                   x.toExponential(2);
                   x.toExponential(4);
                   x.toExponential(6);

3. The toPrecision() Method :toPrecision() returns a string, with a number written with a specified length.
         Example : let x = 9.656;
                   x.toPrecision();
                   x.toPrecision(2);
                   x.toPrecision(4);
                   x.toPrecision(6);

4. The valueOf() Method : valueOf() returns a number as a number.
        Example : let x = 123;
                  x.valueOf();
                  (123).valueOf();
                  (100 + 23).valueOf();

5. The Number() Method : The Number() method can be used to convert JavaScript variables to numbers.
        Example : Number(true);
                 Number(false);
                 Number("10");
                 Number("  10");
                 Number("10  ");
                 Number(" 10  ");

6. The Number.parseInt() Method : Number.parseInt() parses a string and returns a whole number.Spaces are allowed. Only the first number is returned.
              Example : Number.parseInt("-10");
                        Number.parseInt("-10.33");
                        Number.parseInt("10");

7. The Number.isInteger() Method : The Number.isInteger() method returns true if the argument is an integer.
              Example : Number.isInteger(10);
                       Number.isInteger(10.5);

8. The Number.isSafeInteger() Method : A safe integer is an integer that can be exactly represented as a double precision number.The Number.isSafeInteger() method returns true if the argument is a safe integer.
              Example : Number.isSafeInteger(10);
                        Number.isSafeInteger(12345678901234567890);
