n, m = gets.split(" ").map(&:to_i)

puts (m * 1900 + (n - m) * 100) * 2**m
