#!/usr/bin/node
const { argv } = process;

function factorial (a) {
  if (a >= 2) {
    return factorial(a - 1) * a;
  }
  return 1;
}

if (isNaN(Number(argv[2]))) {
  console.log(1);
} else {
  console.log(factorial(Number(argv[2])));
}
