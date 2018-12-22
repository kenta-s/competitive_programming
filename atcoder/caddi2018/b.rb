n, h, w = gets.chomp.split(" ").map(&:to_i)

abs = []
n.times do |i|
  abs << gets.chomp.split(" ").map(&:to_i)
end

ans = abs.select do |ab|
  ab[0] >= h && ab[1] >= w
end.size

puts ans
