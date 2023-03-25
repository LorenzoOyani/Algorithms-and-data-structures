function printString(str, low, high) {
  document.write("string is: ", str.Substring() + low + high - 1);
}

const longestPalindromeSubstring = (str) => {
  let max_length = 1;

  let n = str.length;
  let table = new Array(n);
  for (let i = 0; i < n; i++) {
    table[i] = n;
  }
  for (let i = 0; i < n; i++) {
    table[i][i] = true;
  }
  let start = 0;
  for (let i = 0; i < n - 1; i++) {
    table[i][i + 1] = true;
    start = i;
    max_length = 2;
  }

  for (k = 3; k <= n; k++) {
    for (let i = 0; i < n - k + 1; i++) {
      let j = i - k + 1;
      if (table[i + 1][j - 1] && str[i] === str[j]) {
        table[i][j] = true;
        start = i;
        max_length = k;
      }
    }
  }
  document.write("The longest palindrome in the string is: ");
  printString(str, start, start + max_length - 1);
};

let str = "LetThereBeLight";
document.write(
  "The longest palindrome substring: is " + longestPalindromeSubstring(str)
);
