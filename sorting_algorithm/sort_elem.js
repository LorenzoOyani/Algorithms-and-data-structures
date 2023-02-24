class Element {
    constructor() {
        this.count = 0;
        this.index = 0;
        this.val = 0;
    }
}

function mycomp(a, b) {
    return a.val - b.val;
}

function mycomp2(a, b) {

    if (a.count == b.count) {
        return b.index - a.index;
    }
    return a.count - b.count;
}

function sortByFrequency(arr, n) {
    let elem = new Array(n);
    for (var i = 0; i < n; i++) {
        elem[i] = new Element

        elem[i].index = i;

        elem[i].count = 0;

        elem[i].val = arr[i];
    }

    elem.sort(mycomp);
    elem[0].count = 1;

    for (var i = 1; i < n; i++) {
        if (elem[i].val == elem[i - 1].val) {
            elem[i].count += elem[i - 1].count + 1;

            elem[i - 1].count = -1;
        }
        else
            elem[i].count = 1;
    }

    elem.sort(mycomp2);

    let index = 0;
    for (i = n - 1; i >= 0; i--) {
        if (elem[i].count != -1) {
            for (var j = 0; j < elem[i].count; j++) {
                arr[index] = elem[i].val;
                index += 1;

            }
        }
    }
}