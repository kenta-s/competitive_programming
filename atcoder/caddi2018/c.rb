require 'prime'
n, p = gets.chomp.split(" ").map(&:to_i)

gcd = p.prime_division.select{|array| array[1] >= n}.flatten.first

while gcd && a = (p / gcd ** n).prime_division.select{|array| array[1] >= n}.flatten.first do
  gcd = gcd * a
end

puts gcd || 1
