#!/usr/bin/node
const { argv } = process;

if (argv[2]) {
  if (isNaN(Number(argv[2]))) {
    console.log('Not a number');
  } else {
    console.log(`My number: ${Math.floor(Number(argv[2]))}`);
  }
} else {
  console.log('No argument');
}
