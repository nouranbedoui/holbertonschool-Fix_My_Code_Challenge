#!/usr/bin/env node
// Print a square of given size

const size = parseInt(process.argv[2]);

for (let i = 0; i < size; i++) {
    console.log("#".repeat(size));
}
