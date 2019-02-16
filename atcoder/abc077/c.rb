n = gets.to_i
as = gets.split(" ").map(&:to_i)
bs = gets.split(" ").map(&:to_i)
cs = gets.split(" ").map(&:to_i)

as.sort!
cs.sort!

count = 0
bs.each do |b|
  a_i = as.bsearch_index{|a| b <= a}
  c_i = cs.bsearch_index{|c| b < c}
  if !a_i
    a_i = n
  end
  if c_i
    count += a_i * (n - c_i)
  end
end

puts count
