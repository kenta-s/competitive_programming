n = gets.to_i
shops = []
profits = []
n.times do
  shops << gets.split(" ").map(&:to_i)
end
n.times do
  profits << gets.split(" ").map(&:to_i)
end

max_nums = []
selected = []
tmp = -10**7

n.times do |i|
  ones = shops[i].count(1)
  cands = profits[i][0..ones]
  max = nil
  chosen = nil
  cands.each_with_index do |c,i|
    if max == nil
      max = c
      chosen = i
    elsif max <= c
      max = c
      chosen = i
    end
  end
  if chosen == 0
    tmp = [tmp, cands[1..-1].max].max
  end
  selected << chosen
  max_nums << max
end

max_nums.sort!
ans = nil

max_nums.each do |m|
  if m > 0
    ans ||= 0
    ans += m
  end
end

if ans == nil
  ans = max_nums[0]
end

if selected.all?{|a| a == 0}
  ans = tmp
end

puts ans
