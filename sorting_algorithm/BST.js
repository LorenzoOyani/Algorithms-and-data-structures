class Node {
  constructor(item) {
    this.key = item;
    this.right = this.left = null;
  }
}

let root = null;

function insert(key) {
  root = insertRec(key);
}

function insertRec(key) {
  if (root == null) {
    root = new Node(key);
    return root;
  }

  if (key < root.key) {
    root.left = insertRec(root.left, key);
  } else if (root.key > key) {
    root.right = insertRec(root.right, key);
  } else {
    return root;
  }
}

function inorderRec() {
  inorderRec(root);
}

function inorderRec(root) {
  if (root !== null) {
    inorderRec(root.left);
    document.write(root.key + "<br>");
    inorderRec(root.right);
  }
}
/* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
insert(50);
insert(30);
insert(20);
insert(40);
insert(70);
insert(60);
insert(80);

// Print inorder traversal of the BST
inorder();
