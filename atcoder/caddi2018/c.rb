# n, p = gets.chomp.split(" ").map(&:to_i)

require 'prime'

n = 3
p = 24

prime_division

if p % n == 0
  ans = n
elsif n >= p
  ans = 1
elsif p == 1
  ans = 1
else
end
