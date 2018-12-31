n = gets.to_i
as = gets.chomp.split(" ").map(&:to_i)

even_h = Hash.new(0)
odd_h = Hash.new(0)

as.each.with_index do |a, i|
  if i % 2 == 0
    even_h[a] += 1
  else
    odd_h[a] += 1
  end
end

even = even_h.to_a.sort{|a,b| a[1] <=> b[1]}.reverse
odd = odd_h.to_a.sort{|a,b| a[1] <=> b[1]}.reverse

e = []
o = []
(n/2).times do |i|
  e = even[i]
  o = odd[i]
  if e.nil? || o.nil?
    e = [0,0]
    o = odd[0]
  end
  break if e[0] != o[0]
  if e[1] == o[1]
    next
  elsif e[1] < o[1]
    e = even[i]
    break
  else
    o = odd[i]
    break
  end
end

puts n - e[1] - o[1]
