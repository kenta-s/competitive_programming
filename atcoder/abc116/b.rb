s = gets.to_i
results = [s]

i = 1
while true
  i += 1
  n = results[-1]

  tmp = if n.even?
    n / 2
  else
    3 * n + 1
  end

  break if results.include?(tmp) || i > 1000000
  results.push(tmp)
end

puts i
