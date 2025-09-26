#!/usr/bin/node
// prints a square of size 'size' with '#'

const arg = process.argv[2];
const size = parseInt(arg, 10);

if (!isNaN(size) && size > 0) {
  for (let i = 0; i < size; i++) {
    console.log('#'.repeat(size));
  }
}
