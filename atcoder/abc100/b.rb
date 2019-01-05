d, n = gets.split(" ").map(&:to_i)
if n == 100
  puts 100**d * n + 100**d
else
  puts 100**d * n
end
