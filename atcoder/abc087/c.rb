n = gets.to_i
row1 = gets.split(" ").map(&:to_i)
row2 = gets.split(" ").map(&:to_i)

if n == 1
  puts row1[0] + row2[0]
  exit
end

score1 = [0]
(n-1).times do |i|
  score1 << score1[-1].to_i + row1[1..-1][i]
end

score2 = []
(n-1).times do |i|
  score2 << score2[-1].to_i + row2[0..-1][i]
end

max = 0
n.times do |i|
  if i == 0
    max = [max, score1[i] + score2[-1]].max
  else
    max = [max, score1[i] + score2[-1] - score2[i-1]].max
  end
end

max += row1[0]
max += row2[-1]

puts max
