n = gets.chomp.to_i

prices = []
n.times do
  prices.push(gets.chomp.to_i)
end

prices = prices.sort
highest_item = prices.pop
prices.push(highest_item / 2)

puts prices.reduce(0){|a,e| a+=e}
