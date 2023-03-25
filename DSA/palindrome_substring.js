/**
 *  longest palindrome problem solve using brute force
 * solve using dynamic programming.
 **/

function printArr(arr, low, high) {
  for (i = low; i <= high; i++) {
    document.write(",br> " + arr[i]);
  }
}

function longestPalindromeSubstring(string) {
  let n = string.length;
  let max_length = 1;
  start = 0;

  for (let i = 0; i < n; i++) {
    for (let j = i; j < n; j++) {
      let flag = 1;

      for (let k = 0; k < j - i + 1; k++) {
        if (string[i + k] !== string[j - k]) {
          flag = 1;
        }

        if (flag != 0 && j - i + 1 > max_length) {
          start = i;
          max_length = j - i + 1;
        }
      }
    }
  }
  document.write("longest palindrome is: ");
  printArr(string, start, start + max_length - 1);
}

let string = "HelloWorld";
document.write("<br> length is: " + longestPalindromeSubstring(string));
