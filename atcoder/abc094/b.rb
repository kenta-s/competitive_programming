n, m, x = gets.split(" ").map(&:to_i)
as = gets.split(" ").map(&:to_i)

left = (0..n).to_a[1...x]
right = (0..n).to_a[x+1..-1]

l_count =left.reduce(0){|a,e|a+=as.include?(e) ? 1 : 0}
r_count = right.reduce(0){|a,e|a+=as.include?(e) ? 1 : 0}

puts [l_count, r_count].min
