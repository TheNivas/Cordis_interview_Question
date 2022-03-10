# Cordis_interview_Question
Write a program to check if a number “N” can be written in sum of the powers of 5. The coefficients of 5p should always be 1 and p should be unique in the summation series.
### N = ∑5<sup>p</sup>

If representation is not possible; print **“Failed”**.<br>
If representation is possible; print **“Passed”**.<br>
Print for the below Numbers if they pass or fail the test and record your output.

|Test Number  | Output |
| :---------- | ------ |
|394376       |        |
|421875       |        |
|390625       |        |
|781250       |        |
|484377       |        |

Please send the output table along with your program to the coordinator.<br>
**Example:** 
31, 26 and 130 pass the test because they can be written as summation of powers of 5 with 
coefficients 1.<br>
31 =  5<sup>2</sup> + 5<sup>1</sup>+ 5<sup>0</sup>  <br>
26 =  5<sup>2</sup> + 5<sup>0</sup><br>
130 = 5<sup>3</sup>+ 5<sup>1</sup><br>
35 fails the test because it cannot be written in sum of powers of 5 with coefficients 1. Here, the 
coefficient of 51 is 2; thus it fails the test.<br>
35 = 5<sup>2</sup>+ 2 x 5<sup>1</sup><br>
128 fails the test because it cannot be written in the sum of powers of 5 with coefficients 1. Here, 
the coefficient of 50 is 3; thus it fails the test.<br>
128 = 5<sup>3</sup> + 3 x 5<sup>0</sup><br><br>
Example Output: <br>

|Test Number  | Output |
| :----------- | ------ |
| 31          |PASSED  |
|26           |PASSED  |
|130          |PASSED  |
|35           |FAILED  |
|128          |FAILED  |