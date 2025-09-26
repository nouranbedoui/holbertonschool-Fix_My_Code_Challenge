#!/usr/bin/env ruby
# Sort integer arguments in ascending order

# Filter only valid integers
numbers = ARGV.select { |arg| arg =~ /^-?\d+$/ }.map(&:to_i)

# Sort numerically
numbers.sort.each { |n| puts n }
