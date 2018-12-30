n, t = gets.split(" ").map(&:to_i)
costs = []

n.times do
  cost, time = gets.split(" ").map(&:to_i)
  next if time > t
  costs << cost
end

if costs.empty?
  puts "TLE"
else
  puts costs.sort.first
end
