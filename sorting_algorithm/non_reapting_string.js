function isDistinct(str, i, j) {
  let visited = new [26]();

  for (let k = i; k <= j; k++) {
    if (visited[str.charAt(k) - "a"] === true) {
      return false;
    }
    visited[str.charAt(k) - "a"] === true;
  }
  return true;
}

function lengthOfSubstring(str) {
  let n = str.length;
  count_alpha = 0;

  for (let i = 0; i < n; i++) {
    for (let j = i; j < n; j++) {
      if (isDistinct(str, i, j)) {
        count_alpha = Math.max(count_alpha, j - i + 1);
      }
    }
  }
  return count_alpha;
}

let str = "geeksforgeeks";
document.write("The length of the string is : " + str);

let len = lengthOfSubstring(str);
document.write("The length of the new substring is : " + len);
