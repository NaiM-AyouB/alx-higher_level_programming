#!/usr/bin/node
const { argv } = process;

if (argv.length < 4) {
  console.log(0);
} else {
  console.log(
    Math.max(...argv.slice(2).map((n) => Math.floor(Number(n))).filter((n) => n !== Math.max(...argv.slice(2).map((n) => Math.floor(Number(n))))))
  );
}
