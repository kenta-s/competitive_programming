a, b = gets.split(" ").map(&:to_i)

puts (1...(b - a)).reduce(0){|a,e|a+=e} - a
