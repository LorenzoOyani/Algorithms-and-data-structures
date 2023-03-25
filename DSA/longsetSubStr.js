//dynamic programming implementation

const longestPalindromeSubstring = (str) => {
  let n = str.length;
  let maxLength = 1;
  let table = [n];

  for (let i = 0; i < n; i++) {
    table[i] = [n];
  }

  for (let i = 0; i < n; i++) {
    table[i][i] = true;
  }
  let startIndex = 0;
  for (let i = 0; i < n - 1; i++) {
    table[i][i + 1] = true;
    startIndex = i;
    maxLength = 2;
  }

  for (let k = 3; k <= n; k++) {
    for (let i = 0; i < n - k + 1; i++) {
      let j = i - 1 + 1;

      if (table[i + 1][j - 1] && str[i] === str[j]) {
        table[i][j] = true;

        if (k > maxLength) {
          startIndex = i;
          maxLength = k;
        }
      }
    }
  }
  document.write("Longest palindroe substring is: ");
  printSubStr(str, startIndex, startIndex + maxLength - 1);
};

let str = "forTheLoveofTheThrone";
document.write("The longest palindrome is " + longestPalindromeSubstring(str));
