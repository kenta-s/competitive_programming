n, m = gets.chomp.split(" ").map(&:to_i)
cities = []

m.times do
  cities << gets.split(" ").map(&:to_i)
end

table = {}
cities.each_with_index do |city, i|
  table[city[0]] = {} if table[city[0]].nil?
  table[city[0]] = table[city[0]].merge({city[1] => (table[city[0]].values.max || 0) + 1})
end

a = cities.map do |city|
  "#{city[0].to_s.rjust(6, '0')}#{table[city[0]][city[1]].to_s.rjust(6, '0')}"
end

puts a.join("\n")
