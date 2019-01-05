x1, y1, x2, y2 = gets.split(" ").map(&:to_i)

if x1 == x2 && y1 < y2
  y3 = y2
  y4 = y1
  x3 = x2 - (y2 - y1)
  x4 = x3
elsif x1 == x2 && y2 < y1
  y3 = y2
  y4 = y1
  x3 = x2 + (y1 - y2)
  x4 = x3
elsif y1 == y2 && x2 < x1
  x3 = x2
  x4 = x1
  y3 = y2 - (x1 - x2)
  y4 = y3
elsif y1 == y2 && x1 < x2
  x3 = x2
  x4 = x1
  y3 = y2 + (x2 - x1)
  y4 = y3
else
  w = y2 - y1
  h = x2 - x1
  x3 = x2 - w
  y3 = y2 + h
  x4 = x3 - h
  y4 = y3 - w
end

puts "#{x3} #{y3} #{x4} #{y4}"
