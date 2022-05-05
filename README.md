# PartialCreditPlease

<h1 align="center">Hi 👋, We're Partial Credit Please</h1>
<h3 align="center">A team of 3 Binghamton University CS 375 Students: Zane Wang, Stanley Lin, and Michael Cohen</h3>

- 🔭 This project focuses on the [Knight's Tour problem](https://dl.acm.org/doi/pdf/10.1145/363427.363463)

- 💬 We found this project interesting, as it was our first exposure to **Heuristic Algorithms (Warnsdorff)**

- 1️⃣ The first algorithm attempted utilizes the [Backtracking Approach](https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=8126004)

- 2️⃣ The second algorithm attempted utilizes the [Warnsdorff Approach](http://www.cmat.edu.uy/~mordecki/articles/warnsdorff.pdf)

- 📝 Do Note: **Warnsdorff's Algorithm performs much better in practice but is not as reliable**

- 📈 Check out our [Google Slides presentation](https://docs.google.com/presentation/d/1CrXxs2aa5r0qaIThm5TBN-bXgkF5Tv7tWmkR7-Fg4o0/edit?usp=sharing)

<h3 align="left">Project proudly written in:</h3>
<p align="left"> <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a> </p>

<h3 align="left">Program Usage Instructions</h3>

- Perform <b>git clone</b>
- Open a terminal window and navigate to the cloned directory
- Enter <b>make</b> into your terminal to run the Makefile
- Type <b>./pcpkt 'input.txt' 'output.txt'</b>, where input and output are names of test files
	- Note: Choosing Warnsdorff or Backtracking will depend on the input file format
- Your output will be provided in output.txt

<h3 align="left">Program Input File</h3>

- This program uses an istream to parse the input file
- The input file should be a .txt formatted as follows
	- Coordinate [SPACE] Method
	- Example: To find a knight's tour from location C1 using backtracking
       - <b>C1 1</b> should be Line 1 in your txt file
	- Another example: To find a knight's tour from location C1 using Warnsdorff's
    	- <b>C1 2</b> should be Line 1 in your txt file

<h3 align="left">Program Output File</h3>

- This program outputs to both the terminal (stdout) and a .txt file.
- The output file will be formatted as follows after each run
	- NOTE: Spot number 1 will always equal your input square, the rest may vary. Let's start from A1 for this example

<p align = "center"> INSERT EXAMPLE HERE </p>
