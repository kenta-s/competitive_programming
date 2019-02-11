x, y = gets.split(" ").map(&:to_i)
tmp = x

count = 0

while tmp <= y
  count += 1
  tmp = tmp * 2
end

puts count
