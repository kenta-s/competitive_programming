n = gets.to_i
as = gets.split(" ").map(&:to_i)
h = Hash.new(0)

as.each do |a|
  h[a] += 1
end

max = 0
(0..10**5).each do |i|
  a = h[i]
  b = h[i+1]
  c = h[i+2]
  max = [max, a+b+c].max
end

puts max
