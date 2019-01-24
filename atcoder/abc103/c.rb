_ = gets.to_i
nums = gets.split(" ").map(&:to_i)
puts nums.reduce(0){|a,e| a += e - 1}
