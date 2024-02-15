#!/usr/bin/node
const { argv } = process;

if (argv[2] && !isNaN(Number(argv[2]))) {
  for (let i = 0; i < Math.floor(Number(argv[2])); i++) {
    console.log('X'.repeat(Math.floor(Number(argv[2]))));
  }
} else {
  console.log('Missing size');
}
