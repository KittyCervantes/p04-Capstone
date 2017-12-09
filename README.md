
### input/output

>[main.cpp lines 37-38] (/main.cpp#L37)
I wrote this code because I needed to know whether or not the user wanted to continue or quit, therefore needing direct
interaction with them.

### control flow
>[main.cpp lines 70-73] (/main.cpp#L70)
   [main.cpp lines 74-77] (/main.cpp#L74)
I used these two if statements because I wanted to make sure that the user didn't try to input any invalid text, and so they'd have the 
opportunity to correct it if it was a typo.
>
>[receipt.cpp lines 8-9] (/receipt.cpp#L8)
I used if statements here because i wanted to put the respective data into categories without much trouble.

### iteration
>[main.cpp lines 25-41] (/main.cpp#L25)
I used this dowhile because I needed it to keep prompting the user for input as many times as they wished to continue for.
>[main.cpp lines 82-85] (/main.cpp#L82)
I used a while loop because I wanted it to repeat itself while the input was still invalid.

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
>...damnit...
### class
>[receipt.h lines 6-21] (/receipt.h#L6)
I made a class for receipts because they contain multiple pieces of information. There's variables from the functions in the provate section and the functions themselves in the public one.
