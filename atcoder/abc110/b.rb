n, m, x, y = gets.split(" ").map(&:to_i)
xs = gets.split(" ").map(&:to_i)
ys = gets.split(" ").map(&:to_i)

if [xs.max, x].max < [ys.min, y].min
  puts "No War"
else
  puts "War"
end
