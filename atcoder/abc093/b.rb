a, b, k = gets.split(" ").map(&:to_i)

left = [a]
(k-1).times do
  break if b < left[-1] + 1
  left << left[-1] + 1
end

right = [b]
(k-1).times do
  break if right[0] - 1 < a
  right.unshift(right[0] - 1)
end

puts [left + right].flatten.uniq.join("\n")
