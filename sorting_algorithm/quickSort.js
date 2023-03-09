function QuickSort(arr) {
  if (arr.length <= 1) {
    return arr;
  } else {
    var pivot = arr[0];
    var left = [];
    var right = [];
    for (var i = 0; i < arr.length; i++) {
      if (arr[i] < pivot) {
        left.push(arr[i]);
      } else {
        right.push(arr[i]);
      }
    }
    return QuickSort(left).concat(pivot, QuickSort(right));
  }
}

var arr = [10, 5, 2, 3, 7, 8, 9, 1, 0];
var sortedArray = QuickSort(arr);
console.log(sortedArray);
