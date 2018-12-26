n, m = gets.chomp.split(" ").map(&:to_i)
cities = []

m.times do |i|
  pref, year = gets.split(" ").map(&:to_i)
  cities << [i, pref, year]
end

sorted = cities.sort{|a, b| a[2] <=> b[2]}

h = {}
sorted.each do |s|
  num = (h[s[1]] || 0) + 1
  s << "#{s[1].to_s.rjust(6, '0')}#{num.to_s.rjust(6, '0')}"
  h[s[1]] = num
end

sorted.sort!{|a,b| a[0] <=> b[0]}
ans = sorted.map{|s| s[3]}.join("\n")

puts ans
