
### input/output

>[main.cpp lines 33-34] (/main.cpp#L33)
I wrote this code because I needed to know whether or not the user wanted to continue or quit, therefore needing direct
interaction with them.

### control flow
>[main.cpp lines 26-29] (/main.cpp#L26)
   [main.cpp lines 56-59] (/main.cpp#L56)
I used these two if statements because I wanted to make sure that the user didn't try to input any invalid text, and so they'd have the 
opportunity to correct it if it was a typo.
>
>[main.cpp lines 60-63] (/main.cpp#L60)
I placed this else statement here because I didn't want the program to use invalid text, and this way it will only run if it's valid.

### iteration
>[main.cpp lines 22-37] (/main.cpp#L22)
I used this dowhile because I needed it to keep prompting the user for input as many times as they wished to continue for.
>[main.cpp lines
### data structure
>[receipt.h lines 11-14] (/receipt.h#L11)
I used vectors because I wanted to keep the data, but I needed them to stay seperate.
### function
>[main.cpp lines 9-11] (/main.cpp#L9)
I used a string return function to receive the user's receipt imputs multiple times, and would return the approriate category.
>
>I used a void return function to set up code that I could insert at intervals to catch invalid string types.
>
>The final void function just printed out text and the averages of the user's input.

### file io
>...oops...

### class
>[receipt.h lines 6-21] (/receipt.h#L6)
I made a class for receipts because they contain multiple pieces of information. There's variables from the functions in the provate section and the functions themselves in the public one.
