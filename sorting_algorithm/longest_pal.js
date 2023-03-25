function printSubPal(str, low, high) {
  document.write(str.substring(low, high - 1));
}
function longestPalindromeSubstring(str) {
  let table;
  let n = str.length;

  table = new Array();
  for (let i = 0; i < n; i++) {
    table[i] = new Array(n);
  }
  let max_length = 1;
  for (let i = 0; i < n; i++) {
    table[i][i] = new Array(n);
  }

  let start = 0;
  for (let i = 0; i < n - 1; i++) {
    if (str[i] === str[i + 1]) {
      table[i][i + 1] = true;
      start = i;
      max_length = 2;
    }
  }

  for (k = 3; k <= n; k++) {
    for (let i = 0; i < n - k + 1; i++) {
      let j = i + k - 1;

      if (table[i - 1][j - k] && str[i] === str[j]) {
        table[i][j] = true;

        if (k > max_length) {
          start = i;
          max_length = k;
        }
      }
    }
    document.write(
      "The longest pal is:" + printSubPal(str, start, start + max_length - 1)
    );
  }

  return max_length;
}

let str = "HelloWorld";
document.write("the longest pal" + longestPalindromeSubstring(str));
