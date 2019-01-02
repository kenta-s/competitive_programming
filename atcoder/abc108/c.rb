n, k = gets.split(" ").map(&:to_i)

a = n / k
if k.odd?
  ans = a**3
else
  ans = a**3 + (a + 1)**3
end

puts ans
