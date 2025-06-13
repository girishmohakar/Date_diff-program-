# Date Difference and Live Clock Program

# 📌 Description

This is a simple C program that allows the user to:

Display live current date and time (updated every second).

Calculate days until a future date.

Calculate days since a past date.

Validate input dates (including leap years).


The program uses standard C libraries:

stdio.h (for input/output)

time.h (for date/time operations)

unistd.h (for live clock functionality)



---

# 🛠 Features

1️⃣ Live Clock:
Continuously displays the current date and time in the format:
YYYY-MM-DD HH:MM:SS

2️⃣ Days Until a Date:
User enters a future date; program calculates how many days remain until that date.

3️⃣ Days Since a Date:
User enters a past date; program calculates how many days have passed since that date.

4️⃣ Date Validation:
The program checks if the entered date is valid (correct day, month, leap year, etc.). Invalid dates are rejected.


---

# 📂 Program Flow

1. Program starts and shows the main menu.


2. User selects an option:

Option 1: Displays live current date and time.

Option 2: Prompts user for a future date and calculates days remaining.

Option 3: Prompts user for a past date and calculates days passed.

Option 4: Exit the program.



3. Input dates are validated before calculations.


4. Menu loops until user chooses to exit.




---

# 🚩 Limitations

Year range limited between 1900 to 9999.

No support for time zone differences.

No input error handling for non-integer inputs (user should enter correct formats).



---

# 📅 Example Usage

===== MENU =====
1. Current Time (Live)
   
2. Days Until a Date

3. Days Since a Date

4. Exit

Choose option: 2

Enter future date (DD MM YYYY): 25 12 2025

Days until 25-12-2025: 196 days



