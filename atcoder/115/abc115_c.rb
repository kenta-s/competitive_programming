n, k = gets.chomp.split(" ").map(&:to_i)

heights = []

n.times do
  heights.push(gets.chomp.to_i)
end

heights = heights.sort

possible = Float::INFINITY

heights.each_with_index do |h, i|
  break if heights[i+k-1].nil?
  possible = [(h - heights[i+k-1]).abs, possible].min
end

puts possible
