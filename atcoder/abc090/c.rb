n,m = gets.split(" ").map(&:to_i)

if n == 0 || m == 0
  ans = 0
elsif n == 1 || m == 1
  ans = n * m == 1 ? 1 : n * m - 2
elsif n == 2 || m == 2
  ans = 0
else
  ans = n * m - ((n * 2) + (m * 2) - 4)
end

puts ans
