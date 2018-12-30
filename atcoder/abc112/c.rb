n = gets.to_i

inputs = []
ans = []
n.times do
  x, y, h = gets.split(" ").map(&:to_i)
  if h == 100
    ans << [x,y,h]
  end
  inputs << [x, y, h]
end

if !ans.empty?
  puts ans.join(" ")
  exit
end

first_input = inputs.select{|i| i[2] > 0}.first
(0..100).each do |x|
  (0..100).each do |y|
    h = (first_input[2] + (first_input[0] - x).abs + (first_input[1] - y).abs)
    if inputs.all?{|t| t[2] == [(h - (t[0] - x).abs - (t[1] - y).abs),0].max }
      puts "#{x} #{y} #{h}"
      exit
    end
  end
end
