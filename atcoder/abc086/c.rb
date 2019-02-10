n = gets.to_i
list = []
n.times do
  list << gets.split(" ").map(&:to_i)
end

list.sort!{|a,b| a[0] <=> b[0]}

prev_t = 0
prev_x = 0
prev_y = 0
list.each do |l|
  t = l[0] - prev_t
  x = l[1] - prev_x
  y = l[2] - prev_y
  if t < (x + y)
    puts "No"
    exit
  elsif (x + y).odd? != t.odd?
    puts "No"
    exit
  else
    prev_t = l[0]
    prev_x = l[1]
    prev_y = l[2]
  end
end

puts "Yes"
