ruby 2-sort.rb 12 41 2 C 9 -9 31 fun -1 32
# Expected output:
# -9
# -1
# 2
# 9
# 12
# 31
# 32
# 41
#!/usr/bin/env ruby
# Sort integer arguments in ascending order

# Filter only valid integers
numbers = ARGV.select { |arg| arg =~ /^-?\d+$/ }.map(&:to_i)

# Sort numerically
numbers.sort.each { |n| puts n }
