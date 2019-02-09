array = []
3.times do
  a, b = gets.split(" ").map(&:to_i)
  array << a
  array << b
end

one = array.count(1)
two = array.count(2)
three = array.count(3)
four = array.count(4)

if one < 3 && two < 3 && three < 3 && four < 3
  puts "YES"
else
  puts "NO"
end
