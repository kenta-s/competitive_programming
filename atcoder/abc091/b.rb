h = Hash.new(0)

n = gets.to_i
ss = []
n.times do
  s = gets.chomp
  h[s] += 1
end

m = gets.to_i
ts = []
m.times do
  t = gets.chomp
  h[t] -= 1
end

max = h.values.max
puts [max, 0].max
