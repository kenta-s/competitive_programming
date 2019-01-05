n = gets.to_i
as = gets.split(" ").map(&:to_i)

puts as.max - as.min
