n = gets.to_i
sts = []

(n-1).times do
  sts << gets.split(" ").map(&:to_i)
end

cost = sts[0][1]
(n-1).times do |i|
  cost += sts[i][0]
  ((i+1)...(n-1)).each do |j|
    if cost <= sts[j][1]
      cost = sts[j][1]
    else
      short = cost - sts[j][1]
      if short % sts[j][2] == 0
        cost = sts[j][1] + (short / sts[j][2]) * sts[j][2]
      else
        cost = sts[j][1] + ((short / sts[j][2]) + 1) * sts[j][2]
      end
    end
    cost += sts[j][0]
  end
  puts cost
  cost = sts[i+1] ? sts[i+1][1] : 0
end

puts 0
